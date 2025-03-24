#PERFORMING CACLULATIONS
    #Math operator examples

integer_one = 11
integer_two = 8
real_one = 10.0
real_two = 2.5
    #addition(integers)
print(integer_one,'+', integer_two, '=', integer_one + integer_two) #result int
    #addition(integer + float)
print(real_one,'+', integer_two, '=', real_one + integer_two)   #result float
print('\n')

    #subtraction 
print(real_one,'-', integer_two, '=', real_one - integer_two)
print(integer_one,'-', integer_two, '=', integer_one - integer_two) 
print('\n')

    #Multiplication
print(real_one,'x', integer_two, '=', real_one * integer_two)
print(integer_one,'x', integer_two, '=', integer_one * integer_two)
print('\n')

    #Division
print(real_one,'/', integer_two, '=', real_one / integer_two)
print(integer_two,'/', integer_one, '=', integer_two / integer_one)
print('\n')

    #Integer division
print(integer_two,'//', integer_one, '=', integer_two // integer_one)
print(integer_one,'//', integer_two, '=', integer_one // integer_two)
print('-',integer_one,'//', integer_two, '=', -integer_one // integer_two)
print('\n')

    #Remainder
print(integer_two,'%', integer_one, '=', integer_two % integer_one)
print(integer_one,'%', integer_two, '=', integer_one % integer_two)
print('-',integer_one,'%', integer_two, '=', -integer_one % integer_two)
print('\n')

    #Exponent
print(integer_two,'^', integer_one, '=', integer_two **integer_one)
print(integer_one,'^', integer_two, '=', integer_one ** integer_two)
print('-',integer_one,'^', integer_two, '=', -integer_one ** integer_two)
print('\n')

#BREAKING UP LONG STATEMENTS INTO MULTIPLE LINES
#Use backslash
result = integer_one + integer_two + \
         real_one - real_two

#!Parenthetses can be broken up without line seperator (backslash)
