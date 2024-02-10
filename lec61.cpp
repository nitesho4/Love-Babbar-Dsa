// K Numbers of Queue by using an single array 
// #include<iostream>
// using namespace std;

// class kQueue{
//  public:
//  int n;
//  int k;
//  int *front;
//  int *rear;
//  int *arr;
//  int freeSpot;
//  int *next;

//  public:
//  kQueue(int n, int k)
//  {
//   this->n=n;
//   this->k=k;

//   front=new int[k];
//   rear=new int[k];
//   for(int i=0;i<k;i++)
//   {
//    front[i]=-1;
//    rear[i]=-1;
//   }

//   next=new int[n];
//   for(int i=0;i<n;i++)
//   {
//     next[i]=i+1;
//   }
//   next[n-1]=-1;

//   arr=new int[n];
//   freeSpot=0;
//  }

//  void enqueue(int data,int qn)
//  {
//   if(freeSpot==-1)
//   {
//     cout<<"The Queue is Full!"<<endl;
//     return;
//   }

//   int index=freeSpot;

//   freeSpot=next[index];

//   if(front[qn-1]==-1)
//   {
//     front[qn-1]=index;
//   }
//   else
//   {
//     next[rear[qn-1]]=index;
//   }

//   next[index] = -1;

//   rear[qn - 1] = index;

//   arr[index] = data;
//  }

//  int dequeue(int qn)
//  {
//    if(front[qn-1]==-1)
//    {
//     cout<<"The Queue is Empty!"<<endl;
//     return -1;
//    }

//    int index=front[qn-1];

//    front[qn-1]=next[index];

//    next[index]=freeSpot;
//    freeSpot=index;
//    return arr[index];
//  }
// };


// int main()
// {
//  kQueue q(10,3);
//  q.enqueue(10,1);
//  q.enqueue(15,1);
//  q.enqueue(20,2);
//  q.enqueue(25,1);

//  cout<<q.dequeue(1)<<endl;
//  cout<<q.dequeue(2)<<endl;
//  cout<<q.dequeue(1)<<endl;
//  cout<<q.dequeue(1)<<endl;
//  cout<<q.dequeue(1)<<endl;
//  return 0;
// }


// Maximum and Minimum of arr in a Queue
#include<iostream>
#include<queue>
using namespace std;

int solve(int *arr,int n,int k)
{
  deque<int> maxi(k);
  deque<int> mini(k);

  for(int i=0;i<k;i++)
  {
    while(!maxi.empty() && arr[maxi.back()]<=arr[i])
    {
      maxi.pop_back();
    }

    while (!mini.empty() && arr[mini.back()] >= arr[i])
    {
      mini.pop_back();
    }

    maxi.push_back(i);
    mini.push_back(i);
  }

  int ans=0;
  ans += arr[maxi.front()] + arr[mini.front()];

  for(int i=k;i<n;i++)
  {
    while(!maxi.empty() && i-maxi.front()>=k)
    {
      maxi.pop_front();
    }

    while (!mini.empty() && i - mini.front() >= k)
    {
      mini.pop_front();
    }

    while (!maxi.empty() && arr[maxi.back()] <= arr[i])
    {
      maxi.pop_back();
    }

    while (!mini.empty() && arr[mini.back()] >= arr[i])
    {
      mini.pop_back();
    }

    maxi.push_back(i);
    mini.push_back(i);

    ans += arr[maxi.front()] + arr[mini.front()];
  }
  return ans;
}

int main()
{
  int arr[7] = {2, 5, -1, 7, -3, -1, -2};
  int k = 4;
  cout << solve(arr, 7, k) << endl;
  return 0;
}