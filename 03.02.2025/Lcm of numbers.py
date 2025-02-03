def lcm(a, b):
    return abs(a * b) // math.gcd(a, b)

import math
a, b = map(int, input("Enter two numbers: ").split())
print("LCM:", lcm(a, b))
