import math

a = input("What is the length of side A?")
a = float(a)
b = input("What is the length of side B? ")
b = float(b)
angleD = input("What is the angle Theta in degrees? ")
angleD = int(angleD)
math.radians(angleD)
c = ((a**2)+(b**2)-2*a*b*(math.cos(angleD)))
math.sqrt(c)
c = float(c)
print(c)
