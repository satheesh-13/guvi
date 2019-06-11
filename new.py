n=int(input())
l2=list()
for x in range(n):
	l3=list(map(int,input().split()))
	l2=l2+l3
l2=sorted(l2)
for x in l2:
	print(x,end=" ")
