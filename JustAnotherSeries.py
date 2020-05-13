z=int(input())
sum=0
i=1
while(z>0):
	
	s=(3*i)+2
	if(s%4!=0):
		print(s)
		sum=sum+s
		z=z-1
		i+=1
	else:
		i+=1

	
print(sum)
