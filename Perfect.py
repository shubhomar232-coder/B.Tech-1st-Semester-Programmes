def pernum(num):
    divsum=0
    n=num
    for i in range(1,n):
        if n%i==0:            
            divsum+=i
    if divsum==n:
            print(f"{num} is perfect number")
    else:
            print(f"{num} is not perfect number")
pernum(28)
