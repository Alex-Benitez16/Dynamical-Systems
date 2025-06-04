import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  

choice = input("Type the name of the file to graph (omit .csv and do not include spaces): ")

df = pd.read_csv('output/' + choice + '.csv')

fig = plt.figure(figsize=(10, 7))
ax = fig.add_subplot(111, projection='3d')

ax.plot(df['x'], df['y'], df['z'], color='c', linewidth=0.2)

# Labels and title
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')

plt.show()
