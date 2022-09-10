#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

struct Item
{
    int id;
    double v, w;

};

bool comp(struct Item i1, struct Item i2)
{
    /// complete it yourself
    double item1 = (double)i1.v / (double)i1.w;
    double item2 = (double)i2.v / (double)i2.w;
    return item1 > item2;
}

double fractional_knapsack(struct Item items[], int n, double W,int k)
{
    sort(items, items+n, comp);
    /// complete it yourself
    //double cap_left = W;
    double profit = 0.0;
    int i;
    int j;
    int weight=W;
    int p=0;

for ( j=p; j<n; j++)
  {
    cout << "chor:  " << j   << endl;

        W=weight;
        profit=0.0;

    for(i=k; i < n; i++)
    {
        if(items[i].w <= W)
        {
            cout << "ITEM: "<< items[i].id <<endl ;
            W = W - items[i].w;
            profit = profit + items[i].v;


        }
        else
        {   //cout << items[i].id << endl;
            profit = profit + items[i].v * ((double)W / (double)items[i].w);
//            items[i].w= items[i].w-W;
            cout << "else er item: "<< items[i].id <<endl ;

            cout <<"PROFIT: "<< profit<<endl;
                break;
        }
        //i++;
    }
  }

}


int main()
{
    int n,chor;
    cin >> n;
    Item items[n];
    double v, w;

    for (int i=0; i<n; i++)
    {
        cin >> w >> v;
        Item item = {i+1, v, w};
        items[i] = item;
    }
    double W;
    cin>> chor;

    cin >> W;
    /*for (int i=0; i<n; i++) //
    {
        cout << items[i].id << " "
             << items[i].w << " " << items[i].v << endl;
    }
    cout << endl;*/

    fractional_knapsack(items, n, W,chor);

}
