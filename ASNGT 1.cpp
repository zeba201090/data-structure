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
int count_prime(int a[],int i,int j){
    int cnt=0;
    if(i==j){
        bool flag=true;
        flag=is_prime(a[i]);
        if(flag==true){
            cout<<a[i]<<" ";
            cnt++;
            return cnt;
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
{
    int x;
    int arr[20];
    cout << "Enter the number of inputs:" << endl;
    cin>>x;

    for (int i=0; i<x; i++)
    {
        cin>> arr[i];

    }
    //upto here all ok

//    bool result;
//    for (int i=0; i<x; i++)
//
//    {
//        result=is_prime(arr[i]);
//        if (result==true)
//        {
//            cout << arr[i] << " ";
//        }
//
//
//    }
    int c =count_prime(arr,0,x);
    cout<< endl;
    cout <<"#Primes - " <<c  ;


    return 0;
}
