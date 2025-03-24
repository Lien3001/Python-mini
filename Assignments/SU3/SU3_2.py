temperature = int(input('Enter a temperature (in Celsius): '))
# I would have made the temperature a float to be more accurate but
# if it is a float it does not fit into the criteria given
# ex. 0 to 10 and 11 to 20, what about 10.5
print('The temperature is', end=' ')
if temperature < 0:  # Less than 0
    print('Freezing Cold')
elif temperature <= 10:  # Between 0 and 10
    print('Cold')
elif temperature <= 20:  # Between 11 and 20
    print('Cool')
elif temperature <= 30:  # Between 21 and 30
    print('Warm')
else:
    print('Scorching')  # 31 and up
