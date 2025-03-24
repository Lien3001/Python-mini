# Karlien Heleen Brink 52444015
# declare acceleration due to gravity with a constant
ACCELERATION = 9.81
# get mass from user as a float
mass = float(input("Enter the mass of an object (kilograms): "))
# calculate weight
weight = mass * ACCELERATION
# display results
print(f"The object's weight is {weight} newtons (N)")
