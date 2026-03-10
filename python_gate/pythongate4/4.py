import numpy as np
import matplotlib.pyplot as plt

# Inputs
P = np.array([0,0,0,0,1,1,1,1])
Q = np.array([0,0,1,1,0,0,1,1])
R = np.array([0,1,0,1,0,1,0,1])

# Function
F = ~(Q | R) & 1

print("P Q R | F")
for i in range(8):
    print(P[i],Q[i],R[i],"|",F[i])

x = np.arange(8)

plt.stem(x,F)
plt.xlabel("Input Combination")
plt.ylabel("Output f")
plt.title("NOR Circuit Output")

plt.savefig("nor_graph.png")
plt.show()
