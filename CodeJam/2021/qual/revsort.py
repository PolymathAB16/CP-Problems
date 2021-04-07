def partial_reverse(list_, from_, to):
    for i in range(0, int((to - from_)/2)):
        (list_[from_+i], list_[to-i]) = (list_[to-i], list_[from_+i])

def solve(t):
    print("Case # ",t,": ")
    n, cost
    a[]
    n=int(input())
    for i in range(n):
        x=int(input())
        a.append(x)
    
    for i in range(n-1):
        partial_reverse(a,0,a.index(min(a)))
        cost+=a.index(min(a))+1
        a.pop(i)
        

    print(cost)

t=int(input())   
for int i in range(t):
    solve(i)