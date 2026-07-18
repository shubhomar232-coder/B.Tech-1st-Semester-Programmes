#include<stdio.h>
void square(int n);

int main(){
    int n ;
    printf("enter n number :");
    scanf("%d",&n);

    square(n);
    square(n);


    return 0;
}

void square(int n){
    int x = n*n ;
    printf("%d\n",x);
}
