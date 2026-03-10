import numpy as np
import matplotlib.pyplot as plt

# Input combinations
A = np.array([0,0,1,1])
B = np.array([0,1,0,1])

# Boolean outputs for circuits
Qa = (A ^ B) & (~B & 1)       # option a
Qb = A & (~B & 1)             # option b
Qc = (A & (~B & 1)) | ((~A & 1) & B)   # option c
Qd = (~A & 1) | B             # option d

print("A B | Qa Qb Qc Qd")
for i in range(4):
    print(A[i], B[i], "|", Qa[i], Qb[i], Qc[i], Qd[i])

# Graph plotting
x = np.arange(4)

plt.figure()

plt.step(x, Qa, where='mid', label="Qa")
plt.step(x, Qb, where='mid', label="Qb")
plt.step(x, Qc, where='mid', label="Qc")
plt.step(x, Qd, where='mid', label="Qd")

plt.xlabel("Input Combination")
plt.ylabel("Output")
plt.title("Gate Logic Circuit Outputs")

plt.legend()
plt.grid()

plt.savefig("q41_graph.png")
plt.show()
