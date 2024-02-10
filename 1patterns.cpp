/*

1st pattern:-
****
****
****
****

code:-

#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 int i=1;

 while(i<=r)
 {
  int j=1;
  while(j<=r)
  {
   cout<<"*";
   j++;
  }
  cout<<"\n";
  i++;
 }
 return 0;
}


*/

/*
2nd pattern:-
1111
2222
3333
4444

code:-

#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 cout<<"\n";

 int i=1;

 while(i<=r)
 {
  int j=1;
  while(j<=r)
  {
   cout<<i;
   j++;
  }
  cout<<"\n";
  i++;
 }
 return 0;
}


*/

/*
3rd pattern:-
1234
1234
1234
1234

code:-

#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 cout<<'\n';

 int i=1;

 while(i<=r)
 {
  int j=1;
  while(j<=r)
  {
   cout<<j;
   j++;
  }
  cout<<"\n";
  i++;
 }
 return 0;
}


*/

/*
4th pattern:-
4321
4321
4321
4321

code:-

#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 cout<<'\n';

 int i=1;

 while(i<=r)
 {
  int j=1;
  while(j<=r)
  {
   cout<<r-j+1;
   j++;
  }
  cout<<"\n";
  i++;
 }
 return 0;
}


*/

/*
1 2 3 4
5 6 7 8 
9 10 11 12
13 14 15 16

code:-

#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 cout<<'\n';

 int i=1;
 int count=1;

 while(i<=r)
 {
  int j=1;
  while(j<=r)
  {
   cout<<count<<" ";
   count++;
   j++;
  }
  cout<<"\n";
  i++;
 }
 return 0;
}

*/

/*
pattern-
*
**
***
****
*****
code:-
#include<iostream>
using namespace std;

int main()
{
 int r;
 cin>>r;
 cout<<'\n';

 int i=1;

 while(i<=r)
 {
  int j=1;
  while(j<=i)
  {
   cout<<"*";
   j++;
  }
  cout<<'\n';
  i++;
 }
 return 0;
}

*/

/*
pattern-
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
 cout<<'\n';

 int row=1;
 while(row<=n)
 {
  int col=1;
  while(col<=row)
  {
   cout<<row;
   col++;
  }
  cout<<"\n";
  row++;
 }
 return 0;
}

*/

/*
pattern-
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
 cout<<'\n';

 int row=1;
 int count=1;
 
 while(row<=n)
 {
  int col=1;
  while(col<=row)
  {
   cout<<count<<" ";
   count++;
   col++;
  }
  cout<<'\n';
  row++;
 }
 return 0;
}

*/

/*
pattern-
1
2 3
3 4 5
4 5 6 7
5 6 7 8 9 

code:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<'\n';

 int row=1;

 while(row<=n)
 {
  int col=1;
  int count=0;
  while(col<=row)
  {
   cout<<count+row<<' ';
   count++;
   col++;
  }
  cout<<'\n';
  row++;
 }
 return 0;
}

Alternative way for this pattern :--
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<'\n';

 int row=1;
 while(row<=n)
 {
  int col=1;
  int value=row;
  while(col<=row)
  {
   cout<<value<<' ';
   value++;
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
1
2 1
3 2 1
4 3 2 1

code:-
#include<iostream>
using namespace std;
int main()
{
 int n;
 cin>>n;
 cout<<'\n';

 int row=1;
 while(row<=n)
 {
  int col=1;
  while(col<=row)
  {
   cout<<row-col+1<<' ';
   col++;
  }
  cout<<"\n";
  row++;
}
return 0;
}

*/

/*
pattern-
A A A
B B B 
C C C 

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
  while(col<=n)
  {
   char ch='A'+row-1;
   cout<<' ';
   cout<<ch;
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
A B C
A B C 
A B C

CODE:-
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
  while(col<=n)
  {
   char ch='A'+col-1;
   cout<<' ';
   cout<<ch;
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
A B C
D E F 
G H I

CODE:-
#include<iostream>
using namespace std;

int main()
{
 int n;
 cin>>n;
 cout<<'\n';

 int row=1;
 char value='A';

 while(row<=n)
 {
  int col=1;
  while(col<=n)
  {
   cout<<value;
   value++;
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
A B C
B C D
C D E

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
  char ch='A'+row+col-2;
  while(col<=n)
  {
   cout<<ch;
   cout<<' ';
   ch++;
   col++;
  }
  cout<<"\n";
  row++;
 }
 return 0;
}
*/








