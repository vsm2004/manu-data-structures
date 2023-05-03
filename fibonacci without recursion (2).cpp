#include <stdio.h>

int main() {
    // Write C code here
  int a,b,c,d,e;
  float f;
  printf("enter the numbers: ");
  scanf("%d%d",&a,&b);
  c=a+b;
  d=a-b;
  e=a*b;
  f=a/b;
  printf("sum=%d\n",c);
  printf("difference=%d\n",d);
  printf("product=%d\n",e);
  printf("quotient=%2f",f);
    return 0;
}
