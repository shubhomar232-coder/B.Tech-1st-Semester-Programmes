#include<stdio.h>
void india();
void french();
int main(){
    int n ;
    printf("Enter 1 for Indian below\nEnter 2 for French below\n:");
    scanf("%d \n " , &n);
    if (n==1){
        india();
    }
    else if(n==2){
        french();
    }
    else{
        printf("invalid input");
    }

    return 0 ;
}
void india(){
printf("namaste \n");
}
void french(){
    printf("bonzour \n");
}
