#code
t = int(input())
for i in range(t):
    n = int(input())
    pos = -1
    while(n != 0):
        if(n & 1):
            pos+=1
            break
        n >> 1
    print(pos)