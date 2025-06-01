import pandas as pd
import matplotlib.pyplot as plt
from mpl_toolkits.mplot3d import Axes3D  # For 3D plots

# Load your CSV file
df = pd.read_csv('output/lorenz.csv')

# Create a new 3D figure
fig = plt.figure(figsize=(10, 7))
ax = fig.add_subplot(111, projection='3d')

# Plot the data as a continuous 3D line
ax.plot(df['x'], df['y'], df['z'], color='blue', linewidth=0.2)

# Labels and title
ax.set_xlabel('X')
ax.set_ylabel('Y')
ax.set_zlabel('Z')
ax.set_title('Lorenz Attractor')

plt.show()
