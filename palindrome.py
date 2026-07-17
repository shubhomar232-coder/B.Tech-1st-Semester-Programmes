num=int(input("Enter A Number ")) 
n=num 
s=0 
while num > 0: 
        rem=num%10; 
        s=s*10+rem 
        num=num//10 
 
if s==n: 
        print(n," Is Palindrome Number") 
else: 
        print(n," Is Not Palindrome Number")
