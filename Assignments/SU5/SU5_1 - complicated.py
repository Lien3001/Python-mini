# Karlien Heleen Brink 52444015
import random


def main():  # define main function
    # get random number between 1 and 100
    random_number = random.randint(1, 100)
    # get initial guess from user
    guess = get_guess()

    # initialise counter as 1 because we've had a guess
    counter = 1

    while (guess != 0):  # continue while guess is not = to 0
        option = check(guess, random_number)
        if option == 0:  # if guess was correct
            print('Congratulations! You guessed the number ' + str(guess) +
                  ' correctly in ' + str(counter) + ' guesses.')
            guess = 0  # set guess to 0 to stop program
        else:
            counter += 1  # increase counter by 1
            display_feedback(option)  # give user feedback
            guess = get_guess()  # get new guess from user


def get_guess():  # Gets guess from user as integer
    guess = int(input('Guess the number (enter 0 to quit): '))
    return guess


def check(guess, random_number):
    # returns 0 if correct, 1 if high, 2 if low
    if guess == random_number:
        option = 0
    elif guess > random_number:
        option = 1
    else:
        option = 2
    return option


def display_feedback(option):
    # displays feedback to the user
    if option == 1:
        print('Too high, try again.')
    elif option == 2:
        print('Too low, try again')


main()
