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

#include <iostream>
using namespace std;

int fibonacci(int n){
 if (n == 0 || n == 1)
  return n;

 return fibonacci(n-1)+fibonacci(n-2);
}

int main()
{
 // your code goes here
 // int a,b;
 // cin>>a>>b;
 // cout<<a**b;
 int n;
 cin>>n;
 n+1;
 int arr[n];
 for(int i=0;i<=n;i++){
  while(i>=0 && i<=n){
   arr[i]=fibonacci(i);
   cout<<arr[i]<<" ";
   break;
  }
 }
 // cout<<fibonacci(n);
 
 return 0;
}
