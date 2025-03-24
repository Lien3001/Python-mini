# Karlien Brink 52444015 Su8_2
# import pandas library under alias pd
import pandas as pd

# Read csv file into Pandas dataframe
df = pd.read_csv('grades.csv')
# Group data by course & calculate averages
grouped = df.groupby('Course').agg({"Grade": 'mean'})
# Print ENTIRE resulting DataFrame
print(grouped.to_string(header = False))
