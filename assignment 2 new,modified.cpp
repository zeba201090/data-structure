#include <iostream>

using namespace std;

int main()
{   int D,m,n,x;
    int a[20];
    int d=0;

    cin >> D;
    cin >> m;
    int y=m;
    cin >> n;
    cout << "Enter the gas station intervals" << endl;
    for (int i=1; i<=n; i++ )
    {   a[0]=0;
        cin>> a[i];
    }

    for (int j=1;j<=n;j++)
    {   x= (a[j+1]-a[j]);
        d=d+x;
        if (m<=d)
            //
        {   m=m-x;
            m=m+y;
            cout << "Stops at Gas station" <<j << "(" << a[j]<< "miles)" << endl;
            d=0;
        }

        else
        {
            m=m-x;
        }
    }


    return 0;
}
