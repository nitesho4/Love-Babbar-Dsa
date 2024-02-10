#include <iostream>
using namespace std;

int main()
{
 int n;
 cin >> n;
 int m;
 cin >> m;
 cout << endl;
 int **arr = new int *[n];
 for (int i = 0; i < n; i++)
 {
  arr[i] = new int[m];
 }

 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   cin >> arr[i][j];
  }
 }
 cout << endl;

 for (int i = 0; i < n; i++)
 {
  for (int j = 0; j < m; j++)
  {
   cout << arr[i][j] << " ";
  }
  cout << endl;
 }

 for (int i = 0; i < n; i++)
 {
  delete[] arr[i];
 }

 for (int i = 0; i < n; i++)
 {
  delete[] arr;
 }
}