N = int(input())
num_arr = [];
num = "";

for i in str(N):
    num_arr.append(int(i))

num_arr.sort()
num_arr.reverse()

for i in num_arr:
    num += str(i)

print(int(num))