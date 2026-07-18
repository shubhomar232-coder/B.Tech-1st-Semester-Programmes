#An Armstrong number has sum of the cubes of its digits is equal to the 
#number itself ex.153 is armstrong number. 
no=int(input("Enter any number to check : ")) 
no1 = no 
sum = 0 
while(no>0): 
    ans = no % 10; 
    sum = sum + (ans * ans * ans) 
    no = int (no / 10) 
if sum == no1: 
    print("Armstrong Number") 
else: 
    print("Not an Armstrong Number")
