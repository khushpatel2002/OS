#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
 
void bubbleSort(int arr[], int n)
{
int i, j;
for (i = 0; i < n-1; i++)

	// Last i elements are already in place
	for (j = 0; j < n-i-1; j++)
		if (arr[j] > arr[j+1])
			swap(&arr[j], &arr[j+1]);
}
 
void printArray(int arr[], int size)
{
	int i;
	for (i=0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
 
int main(int argc, char *argv[])
{
       if (argc < 2) {
 	int seedVal = 0;
        srand(time((time_t*)&seedVal)); 	
	int sz;
  	printf("Enter the size of array::");
  	scanf("%d",&sz);
        int arr[sz],i;
        for(i=0;i<sz;i++)
     	arr[i]=rand()%100; 
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;  
    }
        int seedVal = 0;
        srand(time((time_t*)&seedVal)); 	
	int sz = atoi(argv[1]);
	int arr[sz],i;
        for(i=0;i<sz;i++)
     	arr[i]=rand()%100;  
	int n = sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Sorted array: \n");
	printArray(arr, n);
	return 0;
}
