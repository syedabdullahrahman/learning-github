#include<stdio.h>
void swap(int *a,int *b){
	/* code */
	int temp = *a;
	*a=*b;
	*b=temp;
}
int main()
{
		int a,b;
		a=5;
		bb=3500;
		b=3.1416;
		//Adding swap functionality
		swap(&a,&b);
		return 0;
}
