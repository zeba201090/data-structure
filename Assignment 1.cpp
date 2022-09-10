#include <iostream>

using namespace std;

int is_prime(int x)

{
    int m=0,flag=0;
    m=x/2;
    for(int i=2; i<=m; i++)
    {
        if(x%i==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    return 0;

}

int main()
{
    int x;

    int arr[20];

    cout << "Enter the number of inputs:" << endl;

    cin>>x;
    for (int i=0; i<x; i++)
    {
        cin>> arr[i];
    }

    for (int i=0; i<x; i++)
    {
        int result==is_prime(arr[i]);
        if (result==1)
        {
            //flag++;
            cout << arr[i] << " ";

        }
        //cout << flag << endl;


    }
    return 0;
}
