from z3 import *

x = Int('x')
print(simplify(5*(2+x)+3*(5*x+4)-(x**2)**2))
