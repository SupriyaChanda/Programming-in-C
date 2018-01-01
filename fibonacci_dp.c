#include <stdio.h>
	
int fib(int array[], int n) {
	int sum;
	if(array[n]==0) {
		if(n>1) {
			
			array[n]  = fib(array, n - 1) + fib(array, n - 2);
			//printf("%d ",array[n]);
		}
		else {
			array[n]=n;
			//printf("%d",array[n]);
			
		}
	}
	else {
		//printf("%d",n);
		//return array[n];
	}

}

int main() {
	int n,i;
	printf("How many numbers?");
	scanf("%d",&n);
	int array[100] = {0};
	fib(array, n);
	for(i=0;i<=n;i++){
		printf("%d ",array[i]);
	}
}
