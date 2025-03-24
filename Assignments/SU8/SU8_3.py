#Karlien Brink 52444015 SU8_3
import matplotlib.pyplot as plt

# initialize lists for categories
categories = ['Leisure', 'Rent', 'Internet', 'Food', 'Petrol']
budget = [500, 3500, 550, 2000, 1200]

# Make a pie chart
# Change the size of the image produced
plt.figure(figsize=(8, 6))

# Set chart title
plt.title('Monthly Budget')

# Assign slice sizes and labels to chart
plt.pie(budget, labels=categories)

# Make sure chart is round
plt.axis('equal')

# Display pie chart
plt.show()
