from z3 import *

x = Int('x')
y = Int('y')
print(simplify(x + 1 + y + x + 1))
