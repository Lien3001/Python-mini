# initialise N(amount of even numbers)
N = int(input('Enter amount(N) of even numbers to add together: '))

# validate N (as a natural number)
while N < 1:
    # error message
    print('Please enter a valid natural number')
    # get new input
    N = int(input('Enter amount(N) of even numbers to add: '))

# initialise the sum total as 0
total = 0

# iterate from 1 to N to add even numbers
for num in range(1, N + 1):
    # nth even number is N * 2
    total += num * 2

print(f'The sum of the first {N} even numbers is {total}')
