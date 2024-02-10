// #include<iostream>
// using namespace std;

// void reverse(string& str,int i,int j)
// {
//  cout<<"For this string "<<str<<endl;
//  if(i>j)
//  {
//   return;
//  }
//  swap(str[i],str[j]);
//  i++;
//  j--;

//  reverse(str,i,j);
// }

// int main()
// {
//  string name="nitesh";
//  cout << endl;
//  reverse(name,0,name.length()-1);
//  cout << endl;
//  cout << name << endl;

//  return 0;

// }

// #include<iostream>
// using namespace std;

// bool checkPalindrome(string str,int i,int j)
// {
//  if(i>j)
//  {
//   return true;
//  }
//  if(str[i]!=str[j])
//  {
//   return false;
//  }
//  else
//  {
//   return checkPalindrome(str,i+1,j-1);
//  }
// }

// int main()
// {
//  string name="madam";
//  cout<<endl;
//  bool isPalindrome=checkPalindrome(name,0,name.length()-1);
//  cout<<endl;
//  if(isPalindrome)
//  {
//   cout<<"It's a Palindrome"<<endl;
//  }
//  else
//  {
//   cout<<"! a Palindrome"<<endl;
//  }
//  return 0;
// }

// #include <iostream>
// using namespace std;

// int poo(int a, int b)
// {
//  if (b == 0)
//  {
//   return 1;
//  }
//  if (b == 1)
//  {
//   return a;
//  }
//  int ans = poo(a, b / 2);

//  if (b % 2 == 0)
//  {
//   return ans * ans;
//  }
//  else
//  {
//   return a * ans * ans;
//  }
// }

// int main()
// {
//  int base, power;
//  cout << "Enter the value for base ans power:" << endl;
//  cin >> base >> power;
//  cout << endl;

//  int ans = poo(base, power);
//  cout << "The ANSWER is :" << ans << endl;

//  return 0;
// }


#include<iostream>
using namespace std;

void bubbleSort(int arr[],int n)
{
 if(n==0||n==1)
 {
  return ;
 }

 for(int i=0;i<n-1;i++)
 {
  if(arr[i]>arr[i+1])
  {
   swap(arr[i],arr[i+1]);
  }
 }

 bubbleSort(arr,n-1);
}

int main()
{
 int arr[6]={34,546,3,5,4,0};
 int size=6;

 bubbleSort(arr,size);

 for(int i=0;i<size;i++)
 {
  cout<<arr[i]<<" ";
 }
 return 0;
}