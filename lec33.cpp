// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int size)
// {
//  if (size == 0 || size == 1)
//  {
//   return true;
//  }
//  if (arr[0] > arr[1])
//  {
//   return false;
//  }
//  else
//  {
//   bool remainingPart = isSorted(arr + 1, size - 1);
//   return remainingPart;
//  }
// }

// int getSum(int *arr, int size)
// {
//  if (size == 0)
//  {
//   return 0;
//  }
//  if (size == 1)
//  {
//   return arr[0];
//  }
//  else
//  {
//   int remaingP = getSum(arr + 1, size - 1);
//   int sum = arr[0] + remaingP;
//   return sum;
//  }
// }

// int main()
// {
//  cout << endl;
//  int arr[4] = {1, 3, 4, 6};
//  int size = 4;

//  int ans = isSorted(arr, size);
//  if (ans)
//  {
//   cout << "The Array is SORTED" << endl;
//  }
//  else
//   cout << "Array is not sorted" << endl;
//  int sum=getSum(arr,size);
//  cout<<sum;
//  return 0;
// }


// #include<iostream>
// using namespace std;

// void print(int arr[],int size)
// {
//  cout<<"The size of the array is "<<size<<endl;
//  for(int i=0;i<size;i++)
//  {
//   cout<<arr[i]<<" ";
//  }
//  cout << endl;
// }

// bool linearSearch(int arr[],int size,int k)
// {
//  print(arr,size);
//  if(size==0)
//  {
//   return false;
//  }
//  if(arr[0]==k)
//  {
//   return true;
//  }
//  else
//  {
//   int remainingPart=linearSearch(arr+1,size-1,k);
//   return remainingPart;
//  }
// }

// int main()
// {
//  int arr[5]={2,5,8,4,10};
//  int size=5;
//  int key=8;

//  int ans=linearSearch(arr,size,key);

//  if(ans)
//  {
//   cout<<"Element is Present!"<<endl;
//  }
//  else
//   cout<<"Element !found"<<endl;

//  return 0;
// }


#include<iostream>
using namespace std;

bool binarySearch(int arr[],int s,int e,int k)
{
 if(s>e)
 {
  return false;
 }
 int mid=s+(e-s)/2;
 if(arr[mid]==k)
 {
  return true;
 }
 if(arr[mid]<k)
 {
  return binarySearch(arr,mid+1,e,k);
 }
 else
 {
  return binarySearch(arr,s,mid-1,k);
 }
}

int main()
{
 int arr[11] = {2, 4, 6, 10, 14, 18, 22, 38, 49, 55, 222};
 int size = 11;
 int key = 2229;

 int ans=binarySearch(arr,0,size-1,key);

 if(ans)
 {
  cout<<"The Element is Present"<<endl;
 }
 else
 {
  cout<<"!Not Present";
 }
 return 0;
}