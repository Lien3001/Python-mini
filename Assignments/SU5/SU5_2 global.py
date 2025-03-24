average = 0

def main():
    global average
    average = calcAverage()  # get average
    letter = determineGrade()  # get letter grade
    print(f'\nAverage test score: {average: .1f}')  # print average
    print('Letter Grade: ', letter)  # print letter grade


def calcAverage():
    total = 0  # initialise total
    # get test scores 1 to 5
    for i in range(1, 6):
        # get score from user
        mark = int(input(f'Enter test score {i}: '))
        # add each score to total
        total += mark
    return total/5  # return average calculated


def determineGrade():
    print(str(average))
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
