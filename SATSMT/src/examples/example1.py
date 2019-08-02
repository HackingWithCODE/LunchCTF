def formula(a, b, c):
    return not ((a and b) or c)

print("not ((a and b) or c)")
print("a b c")
print("0 0 0 => {}".format(formula(0,0,0)))
print("0 0 1 => {}".format(formula(0,0,1)))
print("0 1 0 => {}".format(formula(0,1,0)))
print("0 1 1 => {}".format(formula(0,1,1)))
print("1 0 0 => {}".format(formula(1,0,0)))
print("1 0 1 => {}".format(formula(1,0,1)))
print("1 1 0 => {}".format(formula(1,1,0)))
print("1 1 1 => {}".format(formula(1,1,1)))
