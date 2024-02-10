// #include<iostream>
// using namespace std;

// void reachHome(int src,int dest)
// {
//  cout<<"Source "<<src<<" Destination "<<dest<<endl<<endl;
//  if(src==dest)
//  {
//   cout<<"Pahuch Gaye Bhai!";
//   return;
//  }
//  src++;
//  reachHome(src,dest);
// }

// int main()
// {
//  cout<<endl;
//  int src=1;
//  int dest=100;

//  reachHome(src,dest);

//  return 0;
// }

#include <iostream>
using namespace std;

void sayDigit(int n, string arr[])
{

 // base case
 if (n == 0)
  return;

 // processing
 int digit = n % 10;
 n = n / 10;

 // recursive call
 sayDigit(n, arr);

 cout << arr[digit] << " ";
}

int main()
{

 string arr[10] = {"zero", "one", "two", "three",
                   "four", "five", "six", "seven", "eight", "nine"};
 int n;
 cin >> n;

 cout << endl
      << endl
      << endl;
 sayDigit(n, arr);
 cout << endl
      << endl
      << endl;

 return 0;
}