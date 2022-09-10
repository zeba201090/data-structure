#include <iostream>

using namespace std;

bool is_prime(int n)
{

    if (n <= 1)
        return false;

    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}
//int count_prime(int x)
//{ if (x>0)
//{
//    return count_prime(x-1)
//}
//
//}
////{ int flag=0;
//    bool result;
//    result= is_prime(x);
//    if (result==true)
//{
//    cout << x << " " << endl;
//    flag++;
//}
// cout<< flag;
//
//
//}

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
    count_prime(x);
    //upto here all ok

    bool result;
        for (int i=0; i<x; i++)

    {
        result=is_prime(arr[i]);
        if (result==true)
        {
        cout << arr[i] << " ";
        }


    }

    return 0;
}
