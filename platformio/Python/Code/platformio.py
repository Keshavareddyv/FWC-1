import numpy as np
import matplotlib.pyplot as plt

# Input combinations
P = np.array([0,0,0,0,1,1,1,1])
Q = np.array([0,0,1,1,0,0,1,1])
R = np.array([0,1,0,1,0,1,0,1])

# Output function
F = P ^ Q ^ R

print("P Q R | F")
for i in range(len(P)):
    print(P[i], Q[i], R[i], "|", F[i])

# Graph
x = np.arange(8)

plt.step(x, F, where='mid', marker='o', label="F = P ⊕ Q ⊕ R")

plt.xticks(x)
plt.yticks([0,1])
plt.xlabel("Input Combination (P,Q,R)")
plt.ylabel("Output F")
plt.title("Multiplexer Output Graph")
plt.legend()
plt.grid()

plt.savefig("graph.jpg")
plt.show()
