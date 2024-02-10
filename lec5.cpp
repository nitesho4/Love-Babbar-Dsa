#include<iostream>
using namespace std;

int main()
{
 // int a=4;
 // int b=6;

 // cout<<(a&b)<<endl;
 // cout<<(a|b)<<endl;
 // cout<<(~a)<<endl;
 // cout<<(~b)<<endl;
 // cout<<(a^b)<<endl;
 
 // cout<<(17>>1)<<endl;
 // cout<<(17>>2)<<endl;
 // cout<<(19<<1)<<endl;
 // cout<<(19<<2)<<endl;

//Factorial of a number
// int n;
// cin>>n;

// int a=0;
// int b=1;
// cout<<a<<" "<<b<<" ";
// for(int i=0; i<=n;i++)
// {
//  int fac=a+b;
//  cout<<fac<<" ";

//  a=b;
//  b=fac;
// }

//Prime or not

 int n;
 cin>>n;
 bool isPrime=1;
 for(int i=2;i<n;i++)
 {
  if(n%i==0)
  {
   isPrime=0;
   break;
  }
 }
 if(isPrime==0)
 {
  cout<<"Not a Prime!";
 }
 else
 {
  cout<<"Prime ####";
 }
 return 0;
}