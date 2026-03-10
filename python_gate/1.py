import numpy as np
import matplotlib.pyplot as plt

# Inputs
P = np.array([0,0,0,0,1,1,1,1])
Q = np.array([0,0,1,1,0,0,1,1])
R = np.array([0,1,0,1,0,1,0,1])

# Boolean function
F = P ^ Q ^ R

print("P Q R | F")
print("------------")

for i in range(8):
    print(P[i], Q[i], R[i], "|", F[i])

# Plot graph
x = np.arange(8)

plt.stem(x,F)
plt.xlabel("Input Combination")
plt.ylabel("Output F")
plt.title("Boolean Function Output Graph")

plt.savefig("graph.png")
plt.show()
