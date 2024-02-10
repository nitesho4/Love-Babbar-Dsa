#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
 int start = 0;
 int end = size - 1;

 int mid = start + (end - start) / 2;

 while (start <= end)
 {
  if (arr[mid] == key)
  {
   return mid;
  }
  else if (key > arr[mid])
  {
   start = mid + 1;
  }
  else
  {
   end = mid - 1;
  }
  mid = start + (end - start) / 2;
 }
 return -1;
}

int main()
{
 int even[6] = {2, 3, 4, 6, 7, 8};
 int odd[5] = {1, 2, 5, 6, 9};

 int index = binarySearch(even, 6, 4
 );
 cout << "The index:" << index << endl;

 int index1 = binarySearch(odd, 5, 1);
 cout << "The index:" << index1 << endl;

 return 0;
}