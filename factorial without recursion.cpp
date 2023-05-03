#include<stdio.h>
int main(){
    int c;
    int a=1;
    printf("enter the number: ");
    scanf("%d",&c);
    for(int i=1;i<=c;i++){
        a=a*i;
    }
    printf("%d",a);
}
