def formula(a, b):
    return ((a or (b and not b)) or not (b or not b))

print("0 0 => {}".format(formula(0,0)))
print("0 1 => {}".format(formula(0,1)))
print("1 0 => {}".format(formula(1,0)))
print("1 1 => {}".format(formula(1,1)))
