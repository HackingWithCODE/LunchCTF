from z3 import *
import string, sys

LEN = 8 # "LunchCTF"

s = Solver()
buf = [BitVec('bit%d' % i, 8) for i in xrange(LEN)]
s1 = BitVecVal(1, 32)
s2 = BitVecVal(0, 32)
for b in buf:
    s.add(Or([b == ord(c) for c in string.lowercase + string.uppercase]))

for n in xrange(LEN):
    # print(buf[n].size()). ## size = 8, must be 32 for next operations
    s1 = (s1 + ZeroExt(24, buf[n])) % 65521
    s2 = (s2 + s1) % 65521

v = (s2 << 16) | s1
s.add(v == 0x0D7502D8)

## Just find one valid model
# if s.check() == sat:
#     m = s.model()
#     print("".join([chr(m[b].as_long()) for b in buf]))
# else:
#     print "unsat"

## Find all valid models
while s.check() == sat:
    m = s.model()
    buf_str = "".join([chr(m[b].as_long()) for b in buf])
    print(buf_str)
    s.add(Or(buf[0] != m[buf[0]],
        buf[1] != m[buf[1]],
        buf[2] != m[buf[2]],
        buf[3] != m[buf[3]],
        buf[4] != m[buf[4]],
        buf[5] != m[buf[5]],
        buf[6] != m[buf[6]],
        buf[7] != m[buf[7]]
        ))
    if buf_str == "LunchCTF":
        print("GOT `EM!")
        sys.exit()
