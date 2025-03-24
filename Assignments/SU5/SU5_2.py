AMOUNT_SCORES = 5  # Declare constant for amount of scores


def main():
    average = calcAverage()  # get average
    letter = determineGrade(average)  # get letter grade
    print(f'\nAverage test score: {average: .1f}')  # print average
    print('Letter Grade: ', letter)  # print letter grade


def calcAverage():
    total = 0  # initialise total
    # get test scores 1 to 5
    for i in range(1, AMOUNT_SCORES + 1):
        # get score from user
        mark = int(input(f'Enter test score {i}: '))
        # add each score to total
        total += mark

    return total/AMOUNT_SCORES  # return average calculated


def determineGrade(average):
    if average > 90:
        letter = 'A'
    elif average > 80:
        letter = 'B'
    elif average > 70:
        letter = 'C'
    elif average > 60:
        letter = 'D'
    else:
        letter = 'F'

    return letter


main()
