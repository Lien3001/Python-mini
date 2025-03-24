# Karlien Heleen Brink 52444015
def main():
    print('Enter 20 numbers:\n')
    # Get a series of 20 numbers
    series = []  # list declaration
    for i in range(1, 21):  # get 20 values from user
        number = int(input(f'Enter number {i}: '))
        series.append(number)
    # print lowest number
    print('\nLowest number: ' + str(determineLowest(series)))
    # print highest number
    print('\nHighest number: ' + str(determineHighest(series)))
    # get total and print it to reduce redundancy
    total = determineTotal(series)
    print('\nTotal: ' + str(total))
    # print average
    print('\nAverage: ' + str(determineAverage(series, total)))


def determineLowest(series):
    # sort series ascending so lowest is first
    series.sort()
    lowest = series[0]
    return lowest


def determineHighest(series):
    # sort series ascending so highest is last
    # I decided to sort in every function so that the functions are
    # seperate and can work on their own instead of having to use
    # a sorted series as input
    series.sort()
    highest = series[len(series)-1]
    return highest


def determineTotal(series):
    total = 0  # accumulative variable
    for number in series:  # add all values together
        total += number
    return total


def determineAverage(series, total):
    average = total/len(series)  # divide total by amount of items in list
    return average


if __name__ == '__main__':
    main()
