import math # I failed this one
a = int(input("Please, input the length of the side a: ")) 
b = int(input("Please, input the length of the side b: "))
q = math.degrees(int(input("Please, input the length of the angle Q: "))) # translating from radians to degrees for the input
q = math.radians(q) # translating back to radians in order to use in the program
c = math.sqrt(a**2+b**2+2*a*b*math.cos(q)) # the maion formula written in the correct view
print("Given that side a is equal", a, "side b is equal", b, "and the angle is", q, "degrees, the length of the side c is", c) # printing the result
