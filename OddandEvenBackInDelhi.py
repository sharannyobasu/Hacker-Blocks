a=int(input())
while(a>0):
    x=int(input())
    sum4=0
    sum3=0
    while(x!=0):
        d=x%10
        if(d%2==0):
            sum4=sum4+d
        else:
            sum3=sum3+d
        x=int(x/10)
    
    if(sum4%4==0 or sum3%3==0):
        print("Yes")
    else:
        print("No")
    a=a-1
