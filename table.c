#include<stdio.h>
int main(){
    int n ;
    printf("enter n numbers : ");
    scanf("%d" , &n);
    for ( int i = 1 ; i<=10 ; i++ ){
        int x = n*i ;
        printf(" %d \n " , x );
    }
    return 0;
}
