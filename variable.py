x="Global" 
def display(): 
       global x 
       y="Local" 
       x=x*2 
       print(x) 
       print(y) 
 
display()
