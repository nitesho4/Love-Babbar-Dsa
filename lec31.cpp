#include <iostream>
using namespace std;

int factorial(int n)
{
 if (n == 0)
  return 1;
 else
  return n * factorial(n - 1);
}

int main()
{
 cout << endl;
 int fact;
 cout << "Which number of FACTORIAL do you want?\nINPUT:";
 cin >> fact;
 cout << endl;
 int ans = factorial(fact);
 cout << "The Factorial is :" << ans << endl;

 return 0;
}