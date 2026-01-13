import math

a = int(input("Enter first number: "))
b = int(input("Enter second number: "))

if math.gcd(a, b) == 1:
    print("The numbers are Co-prime")
else:
    print("The numbers are NOT Co-prime")
