// // Program for printing Max and Min
//  #include<iostream>
//  using namespace std;

// int getmin(int num[],int n)
// {
//  int min= INT32_MAX;
//  for(int i=0;i<n;i++)
//  {
//   if(num[i]<min)
//   {
//    min=num[i];
//   }
//  }
//  return min;
// }

// int getmax(int num[],int n)
// {
//  int max= INT32_MIN;
//  for(int i=0;i<n;i++)
//  {
//   if(num[i]>max)
//   {
//    max=num[i];
//   }
//  }
//  return max;
// }

// int main()
// {
//  cout<<"Enter the size of array:";
//  int size;
//  cin>>size;
//  int num[100];

//  for(int i=0;i<size;i++)
//  {

//   cin>>num[i];
//  }

//  cout<<"The max value is:"<<getmax(num,size)<<endl;
//  cout<<"The min value is:"<<getmin(num,size);

//  return 0;

// }

// #include <iostream>
// using namespace std;
// int main()
// {
//  int arr[] = {2, 5, 7, 8, 2, 6, 9};
//  int n = 7, sum = 0;
//  for (int i = 0; i < n; i++)
//  {
//   sum += arr[i];
//  }
//  cout << "The array sum is " << sum;
//  return 0;
// }

// #include<iostream>
// using namespace std;

// bool search(int arr[],int size,int key)
// {
//  for(int i=0;i<size;i++)
//  {
//   if(arr[i]==key)
//   {
//    return 1;
//   }
//  }
//  return 0;
// }

// int main()
// {
//  int arr[10]={10,-3,3,4,6,8,4,89,38,28};

//  cout<<"Enter the element you want to search for:";
//  int key;
//  cin>>key;

//  bool found=search(arr,10,key);
//  if(found)
//  {
//   cout<<"Key is Present"<<endl;
//  }
//  else{
//   cout<<"Key do not found in it.";
//  }
//  return 0;
// }

// Program for an Reverse integer

#include <iostream>
using namespace std;

int reverse(int arr[], int n)
{
 int start = 0;
 int end = n - 1;

 while (start <= end)
 {
  swap(arr[start], arr[end]);
  start++;
  end--;
 }
}

void printArray(int arr[], int n)
{

 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}
int main()
{
 int arr1[6] = {10, 2, 4, 67, 9, 75};
 int arr2[5] = {3, 65, 99, 69, 28};

 reverse(arr1, 6);
 reverse(arr2, 5);

 printArray(arr1,6);
 printArray(arr2,5);

 return 0;
}