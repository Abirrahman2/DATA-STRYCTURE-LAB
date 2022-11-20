#include<iostream>
using namespace std;
class Queue{
int front=-1,rear=-1;
int q[5];
public:
    bool isEmpty()
    {
        if(front==-1 && rear==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if((rear+1)%5 == front)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

     void enQueue(int element)
    {
        if(isFull()==true)
        {
            cout<<"can not enqueue"<<endl;
        }
        else if(isEmpty()==true)
        {
            front=0;
            rear=0;
            q[rear]=element;
        }
        else
        {
            rear=((rear+1)%5);
            q[rear]=element;
        }
    }

    void deQueue()
    {
        if(isEmpty()==true)
        {
            cout<<"Can not dequeue"<<endl;
        }
        else if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
            front=((front+1)%5);
        }
    }

   /* void show()
    {
        if(isEmpty()==true)
        {
            cout<<"Queue is empty"<<endl;
        }
        else
        {
            int i=front;
            while(i!=rear)
            {
                cout<<q[i]<<" ";
                i=(i+1)%5;
            }
            cout<<q[rear]<<endl;
        }
    }*/
    void show()
    {
        if(isEmpty()==true)
        {
            cout<<"can not show"<<endl;
        }
        else if(front<=rear)
        {
            for(int i=front;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
        }
        else
        {
            for(int i=front;i<5;i++)
            {
                cout<<q[i]<<" ";
            }
            for(int i=0;i<=rear;i++)
            {
                cout<<q[i]<<" ";
            }
        }
    }


};
int main()
{
    Queue Q;
    Q.enQueue(1);
    Q.enQueue(2);
    Q.enQueue(3);
    Q.enQueue(4);
    Q.enQueue(5);
    Q.enQueue(6);

    Q.show();
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();
    Q.deQueue();
    cout<<endl;
     Q.show();
     Q.enQueue(8);
     Q.deQueue();
     Q.deQueue();
     cout<<endl;
     Q.show();
     Q.deQueue();




}
