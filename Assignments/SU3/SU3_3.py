# Get stick lengths
stick_1 = int(input('Enter the length of stick #1: '))
stick_2 = int(input('Enter the length of stick #2: '))
stick_3 = int(input('Enter the length of stick #3: '))
print('\n')

triangle_possible = False
# Check if triangle is possible
if stick_1 + stick_2 > stick_3:
    if stick_2 + stick_3 > stick_1:
        if stick_1 + stick_3 > stick_2:
            triangle_possible = True

if triangle_possible:
    print('Triangle possible')
# Check triangle type
    if stick_1 == stick_2 == stick_3:
        print('Equilateral triangle possible')
    elif (stick_1 == stick_2) or (stick_2 == stick_3) or (stick_1 == stick_3):
        print('Isosceles triangle possible')
    else:
        print('Scalene triangle possible')
else:
    print('No triangle possible')
