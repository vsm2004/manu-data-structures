#include<stdio.h>
int i,n,x;
int fib(x);{
	if(x==1||x==2){
		return 1;
	}else{
		return fib(x-1)+fib(x-2);
	}
}
int main(){
	printf("enter the value: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d",fib(i));
	}
} 
