#include<iostream>
using namespace std;
class Queue{
int queue[10];
int f=-1,b=-1;

public:
    bool isEmpty()
    {
        if(f==-1 && b==-1 )
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
      if(b==9)
      {
          return true;
      }
      else
      {
          return false;
      }
  }

  void enqueue(int element)
  {
      if(isFull()==true)
      {
          cout<<"can not push"<<endl;

      }
      else if(isEmpty()==true)
      {
        f=0;
        b=0;
        queue[b]=element;

      }
      else
      {
          b++;
          queue[b]=element;
      }
  }
  void dequeue()
  {
      if(isEmpty()==true)
      {
          cout<<"can not dequeue"<<endl;
      }
      else if(f==b)
      {
          f=-1;
          b=-1;
      }
      else
      {
          f++;
      }
  }

  void display()
  {
      if(isEmpty()==true)
      {
          cout<<"can not display"<<endl;
      }
      else
      {
          for(int i=f;i<=b;i++)
          {
              cout<<queue[i]<<endl;
          }
      }
  }



};
int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    q.enqueue(5);
    q.enqueue(6);
    q.enqueue(7);
    q.enqueue(8);
    q.enqueue(9);
    q.enqueue(10);
    q.enqueue(11);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.display();



}
