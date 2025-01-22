import sys

alphabet = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"]
number = ["0", "1", "2", "3", "4", "5", "6", "7", "8", "9"]

N, B = sys.stdin.readline().split()
B = int(B)

result = 0

for i in range(len(N)):
    if N[i] in number:
        result += int(N[i])*(B**(len(N)-i-1))
    elif N[i] in alphabet:
        result += (ord(N[i])-55)*(B**(len(N)-i-1))

print(result)
