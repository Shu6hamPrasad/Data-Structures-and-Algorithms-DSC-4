#include<stdio.h>

int partition(int* arr, int low, int high)
{
  int temp;
  int pivot = arr[high];
  int pIndex = low;
  for(int i = low; i < high; i++){
    if(arr[i] <= pivot){
      temp = arr[i];
      arr[i] = arr[pIndex];
      arr[pIndex] = temp;
      pIndex++;
    }
  } 
  temp = arr[pIndex];
  arr[pIndex] = arr[high];
  arr[high] = temp;
  return pIndex;
}

void quickSort(int* arr, int low, int high)
{
  if(low < high){
    int pIndex = partition(arr, low, high);
    quickSort(arr, low, pIndex - 1);
    quickSort(arr, pIndex + 1, high);
  }
}

int main(void)
{
  int arr[] = {9,8,7,6,5,4,3,2,1};
  quickSort(arr, 0, 8);
  for(int i = 0; i < 9; i++){
    printf("%d, ", arr[i]);
  }
  return 0;
}

