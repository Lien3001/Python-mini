# Get 2 numbers as input
number_1 = int(input('Enter the first number: '))
number_2 = int(input('Enter the second number: '))
# if remainder of number_1 divided by number_2 = 0 then
# number_1 is divisible by number_2 otherwise not divisible
if number_1 % number_2 == 0:
    print(number_1, 'is divisible by', number_2)
else:
    print(number_1, 'is not divisible by', number_2)
