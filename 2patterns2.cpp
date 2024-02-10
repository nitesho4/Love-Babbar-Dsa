/*
pattern-
A 
B B
C C C
D D D D

CODE:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row =1;
 while(row<=n)
 {
  int col=1;
  char ch=('A'+row-1);
  while(col<=row)
  {
   cout<<ch;
   cout<<' ';
   col++;
  }
  cout<<"\n";
  row++;
 }
 return 0;
}

*/
/*
pattern -
A 
B C
C D E
D E F G

CODE:-

#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int i=1;
 int value=i;
 while(i<=n)
 {
  int j=1;
  while(j<=i)
  
  {
   char ch=('A'+i+j-2);
   cout<<ch;
   cout<<' ';
   value++;
   j++;
  }
  cout<<endl;
  i++;
 }
 return 0;
}
*/

/*
pattern -
A
B C 
D E F
G H I J

Code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int i=1;
 char value='A';
 while(i<=n)
 {
  int j=1;
  while(j<=i)
  {
   cout<<value;
   cout<<' ';
   value++;
   j++;
  }
  cout<<endl;
  i++;
 }
 return 0;
}
*/

/*
pattern -
D
C D
B C D
A B C D

Code:-

#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int row=1;
 while(row<=n)
 {
  char ch='A'+n-row;
  int col=1;
  while(col<=row)
  {
   cout<<ch;
   cout<<" ";
   ch++;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}
*/

/*
pattern -
   *
  **
 ***
****

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row=1;
 while(row<=n)
 {
  int space=n-row;
  while(space)
  {
   cout<<" ";
   space--;
  }
  int col=1;
  while(col<=row)
  {
   cout<<"*";
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}
*/

/*
pattern -
****
***
**
*

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row=1;
 while(row<=n)
 {
  int col=1;
  while(col<=n-row+1)
  {
   cout<<"*";
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}
*/

/*
pattern -
****
 ***
  **
   *

code:-   
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row=1;
 while(row<=n)
 {
  int space=1;
  int col=1;
  while(space<row)
  {
   cout<<" ";
   space++;
  }
  while(col<=n-row+1)
  {
   cout<<"*";
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}
*/

/*
pattern -
1111
 222
  33
   4

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row=1;
 while(row<=n)
 {
  int space=1;
  int col=1;
  while(space<row)
  {
   cout<<" ";
   space++;
  }
  while(col<=n-row+1)
  {
   cout<<row;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}

*/

/*
pattern -
   1
  22
 333
4444

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;

 int row=1;
 while(row<=n)
 {
  int space=n-row;
  while(space)
  {
   cout<<" ";
   space--;
  }
  int col=1;
  while(col<=row)
  {
   cout<<row;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}

*/

/*
pattern-
1234
 234
  34 
   4

code:-

#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int row=1;
 while(row<=n)
 {
  int space=1;
  int col=0;
  while(space<row)
  {
   cout<<" ";
   space++;
  }
  while(col<=n-row)
  {
   cout<<row+col;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}

*/

/*
pattern -
   1 
  2 3 
 4 5 6 
7 8 9 10 

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int num=1;
 cout<<endl;

 int row=1;
 while(row<=n)
 {
  int space=1;
  while(space<=n-row)
  {
   cout<<" ";
   space++;
  }
  int col=1;
  while(col<=row)
  {
   cout<<num;
   cout<<' ';
   num++;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}
*/

/*
pattern -
      1 
    2 3 
  4 5 6 
7 8 9 10 

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int row=1;
 int num=1;
 while(row<=n)
 {
  int col=1;
  int space=1;
  while(space<=n-row)
  {
   cout<<"  ";
   space++;
  }
  while(col<=row)
  {
   cout<<num;
   cout<<' ';
   num++;
   col++;
  }
  cout<<endl;
  row++;
 }
 return 0;
}

*/

/*
pattern -
   1
  121
 12321
1234321

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int row=1;
 while(row<=n)
 {
  int space =n-row;
  while(space)
  {
   cout<<" ";
   space--;
  }
  int col=1;
  while(col<=row)
  {
   cout<<col;
   col++;
  }

  int start=row-1;
  while(start)
  {
   cout<<start;
   start--;
  }
  cout<<endl;
  row++;
  }
  return 0;
}

*/

/*
pattern -

1 2 3 4 5 5 4 3 2 1
1 2 3 4 * * 4 3 2 1
1 2 3 * * * * 3 2 1
1 2 * * * * * * 2 1
1 * * * * * * * * 1
*/
// code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<endl;

 int row=1;
 while(row<=n)
 {
  int col=1;
  while(col<=n-row+1)
  {
   cout<<col<<' ';
   col++;
  }
  
  col=1;
  while(col<=(row-1)*2)
  {
   cout<<"* ";
   col++;
  }

  col=n-row+1;
  while(col>=1)
  {
   cout<<col<<' ';
   col--;
  }
  cout<<endl;
  row++;
 }
 return 0;
}




