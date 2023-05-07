#include <stdio.h>

int main() {
    // Write C code here
   int x,i,c=1;;
   printf("enter the number: ");
   scanf("%d",&x);
   for(i=1;i<=x;i++){
       c=c*i;
   }
   printf("%d",c);

    return 0;
}
