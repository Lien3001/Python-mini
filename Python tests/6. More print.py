#More about print

#Suppress automatic newline
print('One', end=' ')
print('Two', end=' ')
print('Three')
#OR
print('One', end='')
print('Two', end='')
print('Three\n')

#Specify item seperator
print('One', 'Two', 'Three')
#OR
print('One', 'Two', 'Three', sep='')
#OR
print('One', 'Two', 'Three\n', sep='*')

#Escape characters
    #\n : newline
print('One\nTwo\nThree')
    #\t : skip tab position
print('Mon\tTues\tWed')
print('Thur\tFri\tSat')
    #\' \" : display quotation marks
print("Your assignment is to read \"Hamlet\" by tomorrow.")
print('I\'m ready to begin.')
    #\\ " display backlash
print('The path is C:\\temp\\data.')
