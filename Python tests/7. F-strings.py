#FORMATTED OUTPUT
    #example of f -string
print(f'Hello world\n')

    #Placeholder
name = 'Johnny'
print(f'Hello {name}.\n') 

    #Placeholder expression
print(f'The value is {10 + 2}.\n')
    #OR
val = 10 Enter
print(f'The value is {val + 2}.\n')

#FORMATTING VALUES{placeholder:format-specifier)
    #Rounding floats
amount_due = 5000.0
monthly_payment = amount_due / 12.0
print(f'The monthly payment is {monthly_payment:.2f}.\n')

    #Inserting comma seperators
number = 1234567890.12345 Enter
print(f'{number:,}') 
    #OR
number = 1234567890.12345 Enter
print(f'{number:,.2f}\n') 

    #Percentage
discount = 0.5
print(f'{discount:%}')
    #OR
discount = 0.5
print(f'{discount:.0%}\n') 

#Scientific notation
number = 12345.6789
print(f'{number:e}\n')

#FORMATTING INTEGERS
    #Decimal integer
number = 123456
print(f'{number:d}') #no special formatting
    #OR
number = 123456
 >>> print(f'{number:,d}') #comma seperator

#FIELD WIDTH(for tables)(minimum)
 number = 99
print(f'The number is {number:10}')
    #Align field
#left
f'{number:<10d}'
#right
f'{total:>20.2f}'
#center
f'{total:^20.2f}'

#!Order for formatting: [alignment][width][,][.precision][type]

