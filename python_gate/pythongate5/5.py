import numpy as np
import matplotlib.pyplot as plt

# Inputs
X = np.array([0,0,1,1])
Y = np.array([0,1,0,1])

# XOR function
Z = X ^ Y

print("X Y | Z")
for i in range(4):
    print(X[i],Y[i],"|",Z[i])

# Graph
x = np.arange(4)

plt.stem(x,Z)
plt.xlabel("Input Combination")
plt.ylabel("Output Z")
plt.title("XOR Output Graph")

plt.savefig("q42_graph.png")
plt.show()
