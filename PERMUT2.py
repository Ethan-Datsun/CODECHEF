# cook your dish here

while True:
    n=int(input())
    if n==0:
        break
    arr=list(map(int,input().split()))
    arr.insert(0,0)
    inversearr =[0]*(n+1)
    
    for i in range (n+1):
        inversearr[arr[i]]=i
    if arr != inversearr:
        print('not ambiguous')
    else:
        print('ambiguous')