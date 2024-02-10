#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{
 for (int i = 0; i < n; i++)
 {
  cout << arr[i] << " ";
 }
 cout << endl;
}

void swapAlternate(int arr[], int size)
{
 for (int i = 0; i < size; i += 2)
 {
  if (i + 1 < size)
  {
   int temp=arr[i];
   arr[i]=arr[i+1];
   arr[i+1]=temp;
   // swap(arr[i], arr[i + 1]);
  }
 }
}

int main()
{
 int even[8] = {5, 3, 6, 10, 1, 4, 9, 8};
 int odd[5] = {33, 11, 22, 77, 3};

 swapAlternate(even, 8);
 printArray(even, 8);

 cout << endl;

 swapAlternate(odd, 5);
 printArray(odd, 5);

 return 0;
}