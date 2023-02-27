#include<stdio.h>
void reversearray(int *a, int n)
{
	int *f = a;
	int *lst = a+n-1;
	while(f<lst)
	{
		int temp = *f;
		*f = *lst;
		*lst = temp;
		f++;
		lst--;
	}
	printf("Reversed array elements are: ");
	for(int i=0; i<n; i++)
		printf("%d ", *a++);
}
int main()
{
	int n;
	printf("Enter no of elements in an array:- ");
	scanf("%d", &n);
	int arr[n];
	printf("Enter %d numbers: ",n);
	for(int i=0; i<n; i++)
		scanf("%d", &arr[i]);
	reversearray(arr, n);
	return 0;
}