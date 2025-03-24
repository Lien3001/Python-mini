# Karlien Heleen Brink 52444015

def main():
    # validate password
    password = input("Enter your password: ")
    valid = check_password(password)
    while not valid:
        password = input("Enter your password: ")
        valid = check_password(password)

    # initialize list
    groups = [1234, 989, 2233]

    # display menu and get choices
    choice = -1
    while choice != 5:
        print("""\nMenu:

                1. Show all groups' amounts
                2. Add an amount
                3. Change an amount
                4. Calculate the total amount
                5. Exit\n""")

        choice = int(input("Enter your choice: "))
        # execute option chosen
        while choice not in range(1, 6, 1):
            print("Please choose a valid option/")
            choice = int(input("Enter your choice: "))
            print('\n')
        if choice == 5:
            print("Exiting program.")
        elif choice == 1:
            show_all(groups)
        elif choice == 2:
            add_amount(groups)
            print(f"Group {len(groups)}'s amount has been added to the list.")
        elif choice == 3:
            change = int(input("Enter the amount to change: "))
            change_amount(groups, change)
        else:
            calculate_total(groups)


# function to check if password is valid
def check_password(password):
    if password[0] != '#':
        print("That password is not valid.")
        return False
    elif len(password) < 8:
        print("That password is not valid.")
        return False
    else:
        uppercase_letter = False
        for character in password:
            if character.isupper():
                uppercase_letter = True
        if not uppercase_letter:
            print("That password is not valid.")
        else:
            print("That is a valid password.")
        return uppercase_letter


# function that shows all groups in list
def show_all(groups):
    print("List of all amounts:")
    for group in groups:
        print(f"Group {groups.index(group) +1}: {group}")


# function that adds amount to list
def add_amount(groups):
    # get new amount
    new_amount = int(input("Enter the amount to add: "))
    # add new amount to list
    groups.append(new_amount)
    return new_amount


# change an amount in list to another amount
def change_amount(groups, change):
    # get new amount
    new = int(input("Enter the new amount:"))
    try:
        # change number at index if initial number appeared
        groups[groups.index(change)] = new
        print(f'{change} has been changed.')
    except ValueError:
        # initial number was not found in list
        print(f'{change} not found.')


# Calculate and display the total amount that was raised
def calculate_total(groups):
    total = 0
    for group in groups:
        total += group

    print(f'The total amount is {total}.')


if __name__ == "__main__":
    main()
