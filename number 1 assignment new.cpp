#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Item
{
    int id;
    double unit,v, w;

};

bool comp(struct Item i1, struct Item i2)
{
    return i1.unit> i2.unit;
}

double fractional_knapsack(struct Item items[], int n, double W)
{
    sort(items, items+n, comp);
    double profit=0;
    for(int i=0; i<n&&W; i++)
    {
        int take=min(W,items[i].w);
        if (items[i].w!=0)
        {
            cout<< "Item "<<items[i].id << "  weight:" << items[i].w <<"kg" << " value:" << items[i].unit << endl;

        }
        else {
            cout <<  "Still following items are left " << items[i].id << endl;}

        profit+=items[i].v*take;

        W-=take;
        items[i].w-=take;
        cout << "profit: " << endl;
    }
    return profit;
}


int main()
{
    int n,chor;
    cout << "Enter the number of items:" << endl;
    cin >> n;
    Item items[n];
    double v, w;
    string id;
    cout << "Enter item name , weight , value:" <<endl;
    for (int i=0; i<n; i++)
    {
        cin >> id;

        cin >> v >> w;
        Item item = {i+1, v/w,v, w};
        items[i] = item;
    }
    cin>> chor;
    int chors[chor];
    for (int i=0; i<chor; i++)
    {
        cin >> chors[i];
    }
    for(int i=0; i<chor; i++)
    {
        cout<<"Thief "<<i+1<<": "<< endl;

        cout<<fractional_knapsack(items, n,chors[i])<<endl;
    }
}
