#include<stdio.h>
#include<iostream>

struct listNode{
	int item;
	struct listNode *next;
	struct listNode *prev;
};
typedef struct listNode node;
node y;
void push(node &y,int i)
{
    node *temp=y.next;
    y.next=new node();
    y.next->prev=&y;
    y.next->next=temp;
    y.next->item=i;
    if(temp!=NULL)
    {temp->prev=y.next;
    }
}



void deleter(int n)
{
    node *temp=y.next;
    int r=1;
    while(temp!=NULL)
    {
       r++;
       temp=temp->next;
       if(r%n==0)
       {
        temp->prev->next=temp->next;
       }
    }

}
void ShowAll(int min)
{
    node *temp;
    temp=y.next;
    while(temp!=NULL)

    {printf("%d ",(temp->item)-min);
    temp=temp->next;
    }
}

int FindMin()
{
    node *temp;
    temp=y.next;
    int min=y.next->item;
    while(temp!=NULL)
    {
        if(min>temp->item)
        {
            min=temp->item;
        }

        temp=temp->next;
    }
    return min;
}



int main()
{
    int i,array[]={3,5,7,9,12,4,8,6};
    int s= sizeof(array)/sizeof(array[0]);
     int min=0;
    for(i=0;i<s;i++)
    {
      push(y,array[i]);
    }
    printf("Before: \n");
    ShowAll(min);

    int n;
    printf("\nEnter N:\n");
    scanf("%d",&n);
    printf("After: \n");
    deleter(n);
    ShowAll(min);
    printf("\n After subtracting smallest:\n");
    min=FindMin();
    ShowAll( min);


}
