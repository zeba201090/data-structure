#include <iostream>

using namespace std;

int partition (int A[],int p,int r)
{   int  x;
    int  i;
     x = A[r];
     i = p-1;

     for (int j=p;j<r-1;j++)
     {
         if (A[j]<= x)
         {
            i=i+1;
            swap(A[i], A[j]);

         }
     }
     swap(A[i+1], A[r]);

    return (i+1);
}
void Quicksort(int A[],int p,int r)
{   int q;
    if (p<r)
    {
        q= partition(A,p,r);
        Quicksort (A,p,q-1);
        Quicksort(A,q+1,r);
    }

}

void printArray(int array[], int size){
  int i;
  for (i = 0; i < size; i++)
    cout << array[i] << " ";
  cout << endl;
}

int main()
{

  int data[] = {8, 7, 6, 1, 0, 9, 2};
  int n = sizeof(data) / sizeof(data[0]);

  cout << "Unsorted Array: \n";
  printArray(data, n);

  // perform quicksort on data
  Quicksort(data, 0, n - 1);

  cout << "Sorted array in ascending order: \n";
  printArray(data, n);
}
