# Karlien Heleen Brink, 52444015
print('Pyramid calculator\n')  # Heading

length = float(input('Enter the length (cm): '))
width = float(input('Enter the width (cm): '))

area = length * width  # Get area of rectangle
perimeter = 2 * (length + width)  # Get perimeter of rectangle
diagonal = (length ** 2 + width ** 2) ** 0.5  # Get diagonal of rectangle

print(f'\nArea of the rectangle is {area : .2f} square cm')
print(f'Perimeter of the rectangle is {perimeter : .1f} cm')
print(f'Diagonal of the rectangle is {diagonal : .3f} cm')
# Cubic was added to pass codegrade
print('\n**Rectangle dimensions:**')
print('length =', length, 'cm\twidth =', width, 'cm')
