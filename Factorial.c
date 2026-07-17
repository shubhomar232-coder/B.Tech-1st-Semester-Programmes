#include<stdio.h>
int main(){
    int n;
    printf("enter n number : ");
    scanf("%d",&n);
    int c = 1 ;
    for (int i = 1 ; i <=n  ; i=i+1 ){
        c=c*i;
    }
    printf("%d \n" , c );
    return 0;
}
