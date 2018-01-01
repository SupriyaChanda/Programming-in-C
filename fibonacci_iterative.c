#include <stdio.h>

int main() {
	int n, c;
	int a = 0, b = 1;
	printf("How many number u want to print?");
	scanf("%d",&n);
	int count = n - 2;
	printf("%d ",a);
	printf("%d ",b);
	while(count != 0) {
		c = a + b;
		a = b;
		b = c;
		printf("%d ",c);
		count--;
	}
}
