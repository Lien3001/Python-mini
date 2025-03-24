# Karlien Heleen Brink 52444015 SU8_1
import pandas as pd

# 8.1.1 Filter rows where the course is "Databases"
print('Course = Databases')
df = pd.read_csv('grades.csv')
print((df.loc[df['Course'] == 'Databases']))

# 8.1.2 Filter rows to identify students who are at risk of failing
print('\nGrade < 40')
df_Fails = (df.loc[df['Grade'] < 40])
print(df_Fails.drop_duplicates())


# 8.1.3 Identify students with a distinction in “Programming”
print('\nCourse > 75')
df_distinctions = df.loc[(df['Grade'] > 75) & (df['Course'] == 'Programming')]
print(df_distinctions)
print('*' * 15)
