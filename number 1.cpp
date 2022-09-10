#include <iostream>

using namespace std;
int gcd (int x,int y)
{
    int a,b;

   if (x!=y)

{


    if (x>y)
    { a=x-y;
      cout << a << ", " << y<< endl;

     return gcd(a,y);

    }
    else  {
            b=y-x;
                  cout << x << ", " << b<< endl;

            return gcd(x,b);

 }
 }
if (x==y)
{
return x;
}

}

int main()
{      int x,y;
    cout << "Enter the two numbers " << endl;
    cin>> x>> y;
   int res= gcd(x,y);
    cout << " gcd ("<<x<<","<<y<<")" << "="<< res;

    return 0;
}
