print('Concatenated values')  # Heading for output formatting
age_1 = input('Enter your age: ')  # get first age as str
age_2 = input('Enter the age of your friend: ')  # get second age as str
print('\nResult: ' + age_1 + age_2)  # print concatenated ages

print('\nSum values')  # Heading for output formatting
age_1 = int(input('Enter your age: '))  # get first age as integer
age_2 = int(input('Enter the age of your friend: '))  # second age as integer
print('\nResult:', age_1 + age_2)

average_age = (age_1 + age_2) / 2
print(f'\nAverage age: {average_age:.1f}')
