from z3 import *

x, y = Ints('x y')
s = Solver()
s.add((x % 4) + 3 * (y / 2) > x - y)

if s.check() == sat:
	print("sat")
	print(s.model())
else:
	print("unsat")

while s.check() == sat:
    print s.model()
    s.add(Or(x != s.model()[x], y != s.model()[y]))
