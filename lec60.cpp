#include<iostream>
#include<queue>
using namespace std;

int main()
{
 queue<int> q;
 q.push(11);
 cout<<"The front Element is:"<<q.front()<<endl;
 q.push(27);
 cout<<"The front Element is:"<<q.front()<<endl;
 q.push(33);
 cout<<"The front Element is:"<<q.front()<<endl;
 q.push(37);
 cout<<"The front Element is:"<<q.front()<<endl;

 cout<<"The size of the queue is:"<<q.size()<<endl;

 q.pop();
 q.pop();
 q.pop();
 q.pop();

 cout << "The size of the queue is:" << q.size()<<endl;

 if(q.empty())
 {
  cout<<"The queue is empty!"<<endl;
 }
 else
 {
  cout<<"The queue is Not empty"<<endl;
 }
}