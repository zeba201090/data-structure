#include <iostream>

using namespace std;

int last8(int x[],int i,int j){
    int cnt=0;
    int temp;
for (int i=0;i<j-1;i++)
  {
     if (x[i]>10)
    {temp= x%10;

        if (temp==8)
           {

            cout<<x[i]<<" ";
            cnt++;
            return cnt; }
    }
    else if (x[i]=8)
        cnt++

        }
    }
    else{
        int mid=(i+j)/2;
        int c1=count_prime(a,i,mid);
        int c2=count_prime(a,mid+1,j);
        return c1+c2;
    }
}





int main()
{   int n;
    int arr[30];
    cout << "number of inputs" << endl;
    cin >> n;

    for (int i=0;i<n;i++)
    {  cin << arr[i];

    }

    return 0;
}
