// Switch case
// #include<iostream>
// using namespace std;

// int main()
// {
//  int num;
//  cin>>num;

//  switch (num)
//  {
//   case 34:
//   cout<<"The number is 34"<<endl;
//   break;

//   case 69:
//   cout<<"The number is 69"<<endl;
//   break;

//   default:
//   cout<<"No such number is present"<<endl;

//  }
//  return 0;
// }

// Program for mini Calculator

// #include<iostream>
// using namespace std;

// int main()
// {

//  char operation;
//  cout<<"Enter the operation you want to perform:";
//  cin>>operation;

//   int a;
//  cout<<"Enter the value of a:";
//  cin>>a;

//  int b;
//  cout<<"Enter the value of b:";
//  cin>>b;

//   switch(operation)
//   {
//    case '+':
//    cout<<"Addition:"<<a+b<<endl;
//    break;

//    case '-':
//    cout<<"Subtection:"<<a-b<<endl;
//    break;

//    case '*':
//    cout<<"Multiplication:"<<a*b<<endl;
//    break;

//    case '/':
//    cout<<"Division:"<<a/b<<endl;
//    break;

//    case '%':
//    cout<<"Modulas:"<<a%b<<endl;
//    break;

//    default:
//    cout<<"Currently it's unavailable!!!";
//   }
//   return 0;
// }

// Program for How many notes are needed for a given amount

// #include <iostream>
// using namespace std;

// int main()
// {
//   int amount;
//   cout<<"Enter the amount:";
//   cin>>amount;
//   int Rs100 , Rs50 , Rs20 , Rs1;

//   switch(1)
//   {
//       case 1: Rs100=amount/100;
//               amount=amount%100;
//               cout<<"No of 100 Rupee ="<<Rs100<<endl;

//       case 2: Rs50=amount/50;
//               amount=amount%50;
//               cout<<"No of 50 Rupee ="<<Rs50<<endl;

//       case 3: Rs20=amount/20;
//               amount=amount%20;
//               cout<<"No of 20 Rupee ="<<Rs20<<endl;

//       case 4: Rs1=amount/1;
//               amount=amount%1;
//               cout<<"No of 1 Rupee ="<<Rs1<<endl;

//            }
//         return 0;
// }

// Program for power of a to b i.e pow(a,b) OR X^n By using FUNCTION!!!!!!!!!!!!!!!!!!

// #include<iostream>
// using namespace std;

// int power(int a,int b)
// {
//  int ans=1;

//  for (int i=1;i<=b;i++)
//  {
//   ans=ans*a;
//  }
//  return ans;
// }

// int main()
// {
//  int a,b;
//  cout<<"Enter the num1 and num2:";
//  cin>>a>>b;
//  int answer=power(a,b);
//  cout<<"The answer is:"<<answer;
//  return 0;
// }

// Program for even and odd
// #include <iostream>
// using namespace std;

// bool isEven(int a)
// {
//  if (a & 1)
//  {
//   return 0;
//  }
//  return 1;
// }

// int main()
// {
//  int num;
//  cin >> num;

//  if (isEven(num))
//  {
//   cout << " Number is Even" << endl;
//  }
//  else
//  {
//   cout << " Number is Odd" << endl;
//  }

//  return 0;
// }

//Program for nCr

// #include<iostream>
// using namespace std;

// int factorial(int n)
// {
//  int fact=1;
//  for(int i=1;i<=n;i++)
//  {
//    fact=fact*i;
//  }
//  return fact;
// }

// int nCr(int n,int r)
// {
//  int num=factorial(n);

//  int denom=factorial(r)*factorial(n-r);

//  return num/denom;

// }
// int main()
// {
//  int n,r;
//  cin>>n>>r;

//  cout<<"The Factorial of the Number is:"<<nCr(n,r);

//  return 0;
// }

//Program for prime no or not

// #include<iostream>
// using namespace std;
// // 0 -> Not a Prime no.
// // 1 -> Prime no.

// bool isPrime(int n ) {
//    for(int i = 2; i < n; i++){
//        if(n % i == 0) {
//        //divide hogya h , not a prime no.
//           return 0;
//         }
//    }
//    return 1;
// }

// int main() {
   
//    int n ;
//    cin >> n;
//    if(isPrime(n)) {
//         cout <<" is a Prime number " <<endl;
//    }
//    else{
//        cout<< "Not a prime number "<<endl;

//    }
// }

//Program for (3*n+7)

// #include<iostream>
// using namespace std;

// int func()
// {
//  int n;
//  cout<<"Enter the value for n:";
//  cin>>n;

//  cout<<"The value is:"<<(3*n+7);
// }

// int main()
// {
//  func();
//  return 0;
// }

//Program for total no of set bits in a&b

// #include<iostream>
// using namespace std;

// int set_bits()
// {
//  int a,b;
//  cout<<"Enter the value for a and b:";
//  cin>>a>>b;

//  cout<<"The total no's of set bit are:"<<(a&b);
// }

// int main()
// {
//  set_bits();
//  return 0;
// }

//Program for fibonacci series

// #include<iostream>
// using namespace std;

// int fibonacci(int a)
// {
//  if(a==0||a==1)
//  {
//   return a;
//  }
//  else
//  {
//   return (fibonacci(a-1))+(fibonacci(a-2));
//  }
 
// }

// int main()
// {
//  int n;
//  cout<<"Enter the value of n:";
//  cin>>n;

//  fibonacci(n);
//  for(int i=0;i<=n;i++)
//  {
//   cout<<' '<<fibonacci(i);
//  }

//  return 0;
// }

