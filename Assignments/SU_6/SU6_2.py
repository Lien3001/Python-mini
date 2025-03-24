# Karlien Heleen Brink 52444015
import random


def main():
    lottery_numbers = [0,] * 7  # list of 7 0s
    print('Lottery number generator\n')  # heading
    print(lottery_numbers)
    # Display options to user
    print('Pick an option',
          '\n\t1. Generate lottery numbers randomly',
          '\n\t2. Select lottery numbers',
          '\n\t0. Quit')
    user_input = -1  # initialise for while to run
    # Get user input(validate that input is integer(0,1,2))
    while user_input not in ([0, 1, 2]):
        try:
            user_input = int(input("\nEnter 1, 2 or 0: "))
        except ValueError:
            print("Please enter either 1, 2 or 0")

    if user_input == 1:  # option 1 was chosen
        # get a list of random numbers
        random_numbers = generateRandom()
        displayLottery(random_numbers)
    elif user_input == 2:  # option 2 was chosen
        # only necessary for option 1
        selectNumbers(lottery_numbers)
        displayLottery(lottery_numbers)
    else:  # quit
        print("\nGoodbye")


def generateRandom():
    # get a list of random numbers between 1 and 49
    random.seed(111)  # set seed
    lottery_numbers = []  # initialize list of random numbers as empty
    # get 7 unique random lottery numbers
    while len(lottery_numbers) != 7:
        # get random number
        random_number = random.randint(1, 49)
        # only add unique numbers
        if random_number not in lottery_numbers:
            lottery_numbers.append(random_number)
    return lottery_numbers


def selectNumbers(lottery_numbers):
    print('Enter 7 unique numbers between 1 and 49:')  # heading
    for i in range(0, 7):  # get 7 numbers
        number = -1  # initialise each number as -1
        # repeat until we have a unique number between 1 and 49
        while (number in lottery_numbers) or (number not in range(1, 50, 1)):
            try:  # make sure an integer is entered
                number = int(input(f"Enter number {i+1}: "))
            except ValueError:
                print("Please enter a unique integer between 1 and 49")
            # make sure integer is valid
            if (number in lottery_numbers) or (number not in range(1, 50, 1)):
                print("Please enter a unique integer between 1 and 49")
        # if past while, number can be added to list (unique & valid)
        lottery_numbers[i] = number  # list indexing to replace number
    return lottery_numbers


def displayLottery(lottery_numbers):
    lottery_numbers.sort()
    for i in range(0, len(lottery_numbers)):
        print(lottery_numbers[i], end=' ')


if __name__ == '__main__':
    main()
