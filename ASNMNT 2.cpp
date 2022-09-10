#include <iostream>

using namespace std;

int is_reverse(int num, int rev)
{
    if(num==0)
        return rev;
    else
        return is_reverse (num/10, rev*10 + num%10);
}
int is_palindrome(int num,int num2)// 3,56
{
    int rev=0;
    int sum;

    if (num<=num2)
    {

        rev = is_reverse(num,0);
        if (num==rev)
        {
//            sum=sum+num;
            cout << num << " " ;
//            cout << num+is_palindrome(num+1,num2)<< endl;
             sum=num+is_palindrome(num+1,num2);
            cout<< sum << endl;
        }
        else {

        return is_palindrome((num+1),num2);
        }
    }
    return sum;


}

int sum_palindrome(int num,int num2)
{
    int result=is_palindrome(num,num2);
    cout << result;

}




int main()
{
    cout << "Enter starting and ending number" << endl;
//    int result=is_reverse(865,0);
//    cout << result;
int x,y;
cin >> x;
cin >> y;
//int result=is_palindrome(3,56);
   // cout << result;

sum_palindrome(x,y);
    return 0;

}
