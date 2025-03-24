# get mass of an object as input
mass = float(input("Enter the mass of the object: "))

#constants
POUNDS = 2.20462
OUNCES = 0.035274
# Give options
print("\nSelect a conversion option:")
print("1. Kilograms to Pounds")
print("2. Pounds to Kilograms")
print("3. Grams to Ounces")
print("4. Ounces to Grams\n")
# initialize answer variable
answer = 0.0
# Ask for user input again abouut choice
choice = int(input("Enter your choice (1/2/3/4): "))

# Calculate conversion
if choice == 1:
    answer = mass * POUNDS
    print(f"\n{mass:.2f} kilograms is equivalent to {answer:.2f} pounds.")
elif choice == 2:
    answer = mass / POUNDS
    print(f"\n{mass:.2f} pounds is equivalent to {answer:.2f} kilograms.")
elif choice == 3:
    answer = mass * OUNCES
    print(f"\n{mass:.2f} grams is equivalent to {answer:.2f} ounces.")
elif choice == 4:
    answer = mass / OUNCES
    print(f"\n{mass:.2f} ounces is equivalent to {answer:.2f} grams.")
# input validation
else:
    print('\nInvalid option. Please choose between 1, 2, 3, or 4.')

