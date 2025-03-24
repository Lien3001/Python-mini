# initialise age with user input
age = int(input('Enter your Age (0 to quit): '))

# repeat while the age is not 0
while age != 0:
    # if someone is older than/or 18 they can vote
    if age >= 18:
        print('You are eligible to vote')
    # if they are between 0 and 17 years old they may not vote
    elif age > 0:
        print('You may NOT vote')
    # no one can be less than 0 years old
    else:
        print('Invalid age')
    # get the next age from user
    age = int(input('Enter your Age (0 to quit): '))
