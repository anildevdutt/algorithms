#include <stdio.h>

int binary_search(int *arr, int st, int ed, int key)
{
  int mid = (st + ed) / 2;

  if(key == arr[mid])
    return mid;
  
  if(key > arr[mid]) {
    return binary_search(arr, mid+1, ed, key);
  } else {
    return binary_search(arr, st, mid-1, key);
  }
}

void main()
{
  int arr[] = {12, 24, 34, 45, 123, 345, 456, 542};
  int key = 345;
  printf("%d found at index %d\n", key, binary_search(arr, 0, 8, key)); 
}
