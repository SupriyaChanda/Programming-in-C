//SUPRIYA CHANDA
//16MCMT34

#include<stdio.h>
#define SIZE 10

void swap(int a[], int i, int j)
{
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
}

void display(int a[], int n)
{
	int j;
	FILE *fop;
	fop=fopen("output.txt","a");
	for(j=0; j<n; j++)
	{
		fprintf(fop,"%d\n",a[j]);
	}
	//fclose(fop);
}

void qsort(int a[], int low, int high)
{
	if(high-low > 1)
	{
		int yellow = low + 1;
		for(int green = low + 1; green < high; green++)
		{
			if(a[green] <= a[low])
			{
				swap(a, yellow, green);
				yellow++;
			}
		}
		swap(a, low, yellow-1);
		
		FILE *fop;
		fop=fopen("output.txt","a");
		fprintf(fop,"-------------------------------------------------------\n");
		fprintf(fop,"partition index is %d lies inside the interval[%d...%d]\n",yellow-1, low, high);
		fprintf(fop,"The index %d is not equal to %d when the partition terminates.\n", yellow-1, high);
		fprintf(fop,"Every element of A[%d...%d] is less then or equal to every elements of A[%d...%d] when the partition terminates.\n", low, yellow-1, yellow, high);
		qsort(a, low, yellow-1);
		qsort(a, yellow, high);
	}
}

int main()
{
	int i;
	int a[SIZE];
	FILE *fip;
	int len = 0;
	fip=fopen("input.txt","r");
	for(i=0; i<SIZE; i++)
	{
		fscanf(fip,"%d",&a[i]);
	}
	fclose(fip);
	
	qsort(a, 0, SIZE);
	display(a, SIZE);
	
	return 0;
}
