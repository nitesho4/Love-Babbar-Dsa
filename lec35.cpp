// #include<iostream>
// using namespace std;

// void merge(int *arr,int s,int e)
// {
//  int mid=s+(e-s)/2;

//  int len1=mid-s+1;
//  int len2=e-mid;

//  int *first=new int[len1];
//  int *second=new int[len2];

//  int mainArrayIndex=s;
//  for(int i=0;i<len1;i++)
//  {
//   first[i]=arr[mainArrayIndex++];
//  }

//  mainArrayIndex=mid+1;
//  for(int i=0;i<len2;i++)
//  {
//   second[i]=arr[mainArrayIndex++];
//  }

//  int index1=0;
//  int index2=0;
//  mainArrayIndex=s;

//  while(index1<len1 && index2<len2)
//  {
//   if(first[index1]<second[index2])
//   {
//    arr[mainArrayIndex++]=first[index1++];
//   }
//   else
//   {
//    arr[mainArrayIndex++]=second[index2++];
//   }
//  }
//  while(index1<len1)
//  {
//   arr[mainArrayIndex++] = first[index1++];
//  }
//  while (index1 < len2)
//  {
//   arr[mainArrayIndex++] = second[index2++];
//  }
//  delete []first;
//  delete []second;
// }

// void mergeSort(int *arr,int s,int e)
// {
//  if(s>=e)
//  {
//   return ;
//  }
//  int mid=s+(e-s)/2;

//  mergeSort(arr,s,mid);
//  mergeSort(arr,mid+1,e);

//  merge(arr,s,e);
// }

// int main()
// {
//  int arr[5]={23,4,889,1,0};
//  int n=5;

//  for (int i = 0; i < n; i++)
//  {
//   cout << arr[i] << " ";
//  }
//  cout << endl;
//  mergeSort(arr,0,n-1);
//  for (int i = 0; i < n; i++)
//  {
//   cout << arr[i] << " ";
//  }
//  cout << endl;
//  return 0;
// }

#include<iostream>
using namespace std;

long long merge(int *arr,int s,int e)
{
 long long inv=0;
 int mid=s+(e-s)/2;

 int len1=mid-s+1;
 int len2=e-mid;

 int *first=new int[len1];
 int *second=new int[len2];

 int mainArrayIndex=s;
 for(int i=0;i<len1;i++)
 {
  first[i]=arr[mainArrayIndex++];
 }

 mainArrayIndex=mid+1;
 for(int i=0;i<len2;i++)
 {
  second[i]=arr[mainArrayIndex++];
 }

 int index1=0;
 int index2=0;
 mainArrayIndex=s;

 while(index1<len1 && index2<len2)
 {
  if(first[index1]<second[index2])
  {
   arr[mainArrayIndex++]=first[index1++];
  }
  else
  {
   inv+=len1-index1;
   arr[mainArrayIndex++]=second[index2++];
  }
 }
 while(index1<len1)
 {
  arr[mainArrayIndex++] = first[index1++];
 }
 while (index1 < len2)
 {
  arr[mainArrayIndex++] = second[index2++];
 }
 return inv;
 delete []first;
 delete []second;
}

long long mergeSort(int *arr,int s,int e)
{
 long long inv=0;
 if(s<e)
 {
  int mid = s + (e - s) / 2;

  inv += mergeSort(arr, s, mid);
  inv += mergeSort(arr, mid + 1, e);
  inv += merge(arr, s, e);
 }
 return inv;
}

int main()
{
 int arr[8]={3,5,6,9,1,2,7,8};
 int n=8;
 cout << endl;
 cout<<mergeSort(arr,0,n-1);
 return 0;
}
