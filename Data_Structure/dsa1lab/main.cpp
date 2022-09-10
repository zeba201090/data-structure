#include <iostream>

using namespace std;

void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}



void insertionSort(int arr[],int n)
{
    for(int i=1; i<n; i++)
    {
        int key = arr[i];
        int j = i-1;
        while (arr[j]>key && j=0)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

void printArray{int arr[],int n}
{
    for (int i=0;i<n; i++)
    {
        cout<<arr[i]<< "" ;
    }
    count << endl;
   // printf(/n)
}
int main()
{    int arr[]= {5,2,4,6,1,3};
  int n=6;
     printArray(arr,n)
     insertionSort(arr,n)
     printArray(arr,n)
     selectionSort(arr,n)
    cout << "Hello world!" << endl;

    return 0;
}
