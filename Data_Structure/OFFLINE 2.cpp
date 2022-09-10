#include<iostream>

using namespace std;

struct node
{
	int val;
	node *next;


	node(int val)
	{
		this->val = val;
		this->next = NULL;
	}

};

struct Queue
{
	node *head;

	Queue()
	{
		head = NULL;
	}

	void enQueue(int val)
	{
        node *temp = new node(val);
        temp->next = head;
        head = temp;
	}

	int  deQueue()
	{   if (isEmpty())
        {
            return 0;
        }
        else {
        node *temp= head;
        node *temp2=temp;
        while (temp->next!=nullptr)
        {
            temp=temp->next;

        }

            temp2->next= nullptr;
            delete temp;
        }

	}






	bool isEmpty()
	{
      if ( head==NULL)
        return true;
	}

	bool isFull()
	{
        return false;
	}

	void print()
	{
		node *cur = this->head;
		while(cur!=NULL)
		{
			cout << cur->val << "	  ->	";
			cur = cur->next;
		}
		cout << "Null" ;
		cout << endl;
	}

};


int main()
{

	Queue q;

	q.enQueue(10);
	q.enQueue(3);
	q.print();

	int a = q.deQueue();
	cout << a << endl;
	q.print();

	int b = q.deQueue();
	cout << b << endl;
	q.print();



	return 0;
}
