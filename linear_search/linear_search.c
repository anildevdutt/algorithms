#include <stdio.h>

int linear_search(int *arr, int len, int key)
{
	int i;
	for(i = 0; i < len; i++)
		if(arr[i] == key)
			return i;
	return -1;
}

void main()
{
	int arr[] = {12,4,42,5,121,41};
	printf("%d\n", linear_search(arr, 6, 121));
}
