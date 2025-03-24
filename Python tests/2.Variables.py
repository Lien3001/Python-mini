
#VARIABLES p40/56
#!Cannot use a variable until it has a value
 
#Assignment statement to create variable
age = 25        #Written in form variable = Expression(value) -> Variable appears on left side of =

#Use print function to display variable, don't use quotes
print(age)

#Naming variables
day_of_week = 'Monday'  #!Cannot use a keyword
                        #!Cannot contain spaces
                        #!First character must be A-Z, a-z, or _
                        #!After first letter you may also use numbers 0-9
                        #!Case sensitive
                        #!Name must show purpose
                        #!lowercase with underscores to seperate words
print('\n')     #Newline for formatting

#Display multiple items with print
    #using variable
room = 600  
print('I am staying in room', room)     #Python automatically inserts a space
    #Using 2 string literals(Why though?)
print('My name is', 'Peter')
print('\n')     #Newline for formatting

#Variable reassignment
dollars = 66.5
print('This value was', dollars)
    #Id prefre this variable refernce a different value
dollars = 100
print('now it is:', dollars)
print('\n')     #Newline for formatting

#Numeric literal
print(500)
print('\n')     #Newline for formatting

#Check data type
type(1.0)
type(1)
type('string')
print('\n')     #Newline for formatting

#Storing strings
#!Stored as type str
first_name = 'Peter'
last_name = 'Kotze'
print(first_name, last_name)
print('\n')     #Newline for formatting

#Change variable type
x = 99      #refers to int
print(x) 
x = 'Hello' #refers to str
print(x)

