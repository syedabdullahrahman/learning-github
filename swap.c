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
		b=3500;

		//Adding swap functionality
		swap(&a,&b);
		return 0;
}
