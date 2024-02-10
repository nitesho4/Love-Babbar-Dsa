#include <iostream>
#include<limits.h>
using namespace std;

int maxiSum(int arr[][4], int row, int col)
{

 int maxi = INT_MIN;
 int rowIndex = -1;

 for (int row = 0; row < 3; row++)
 {
  int sum = 0;
  for (int col = 0; col < 4; col++)
  {
   sum += arr[row][col];
  }

  if (sum > maxi)
  {
   maxi = sum;
   rowIndex = row;
  }
 }

 cout << "the maximum sum is " << maxi << endl;
 return rowIndex;
}

    void printRsum(int arr[][4], int row, int col)
{
 for (int i = 0; i < 3; i++)
 {
  int sum=0;
  for (int j = 0; j < 4; j++)
  {
   sum += arr[i][j];
  }
  cout<<sum<<" ";
 }
 cout<<"\n";
}

bool isPresent(int arr[][4],int target,int row,int col)
{
 for(int i=0;i<3;i++)
 {
  for(int j=0;j<4;j++)
  {
   if(arr[i][j]==target)
   {
    return 1;
   }
  }
 }
 return 0;
}

int main()
{
 int arr[3][4];

 for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 4; j++)
  {
   cin >> arr[i][j];
  }
 }

 for (int i = 0; i < 3; i++)
 {
  for (int j = 0; j < 4; j++)
  {
   cout << arr[i][j]<<" ";
  }
  cout<<"\n";
 }

 cout << " Enter the element to search " << endl;
 int target;
 cin >> target;
 if (isPresent(arr, target, 3, 4))
 {
  cout << " Element found " << endl;
 }
 else
 {
  cout << " Not Found" << endl;
 }

 cout<<"the sum is:";
 printRsum(arr,3,4);

 int ans=maxiSum(arr,3,4);
 cout<<"The index at maxi is:"<<ans<<endl;
 return 0;
}