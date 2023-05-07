#include <stdio.h>
int x,i,c=1;
 int fact(int x){
    if(x==1||x==0){
        return 1;
    }else{
        return x*fact(x-1);
    }
 }
int main() {
    // Write C code here
   printf("%d",fact(9));
    return 0;
}
