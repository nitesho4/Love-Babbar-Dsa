// #include <iostream>
// #include <stack>
// using namespace std;

// class Stack
// {
// public:
//  int *arr;
//  int size;
//  int top;

//  Stack(int size)
//  {
//   this->size = size;
//   arr = new int[size];
//   top = -1;
//  }

//  void push(int element)
//  {
//   if (size-top > 1)
//   {
//    top++;
//    arr[top] = element;
//   }
//   else
//   {
//    cout << "Stack Overflow" << endl;
//   }
//  }

//  void pop()
//  {
//   if(top>=0)
//   {
//    top--;
//   }
//   else
//   {
//    cout<<"Stack Underflow"<<endl;
//   }
//  }

//  int peek()
//  {
//   if(top>=0)
//   {
//    return arr[top];
//   }
//   else
//   {
//    cout<<"Stack is empty"<<endl;
//    return -1;
//   }
//  }

//  bool isEmpty()
//  {
//   if(top==-1)
//   {
//    return true;
//   }
//   else
//   {
//    return false;
//   }
//  }
// };

// int main()
// {
//  /*
//  stack<int> s;
//  s.push(20);
//  s.push(10);
//  s.pop();
//  cout<<"Printing the top element:"<<s.top()<<endl;
//  if(s.empty())
//  {
//   cout<<"The stack is empty!\n";
//  }
//  else{
//   cout<<"Stack is Not empty\n";
//  }
//   */
//  Stack st(6);
//  st.push(10);
//  st.push(27);
//  st.push(17);
//  st.push(69);
//  st.push(7);
//  st.push(33);
//  cout<<"The top element is :"<<st.peek()<<endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();
//  cout << "The top element is :" << st.peek() << endl;
//  st.pop();

//  if(st.isEmpty())
//  {
//   cout<<"The Stack is empty"<<endl;
//  }
//  else
//  {
//   cout<<"The stacl is not empty"<<endl;
//  }
//  return 0;
// }

// Reverse of a string using STACK
#include <iostream>
#include <stack>
using namespace std;

int main()
{
 string str = "nitesh";

 stack<char> s;

 for (int i = 0; i < str.length(); i++)
 {
  char ch = str[i];
  s.push(ch);
 }

 string ans = "";

 while (!s.empty())
 {
  char ch = s.top();
  ans.push_back(ch);

  s.pop();
 }

 cout << "The reverse order of the string is:" << ans << endl;
 return 0;
}

bool isValidParenthesis(string expression)
{
 stack<char> s;
 for (int i = 0; i < expression.length(); i++)
 {

  char ch = expression[i];

  // if opening bracket, stack push
  // if close bracket, stacktop check and pop

  if (ch == '(' || ch == '{' || ch == '[')
  {
   s.push(ch);
  }
  else
  {
   // for closing bracket
   if (!s.empty())
   {
    char top = s.top();
    if ((ch == ')' && top == '(') ||
        (ch == '}' && top == '{') ||
        (ch == ']' && top == '['))
    {
     s.pop();
    }
    else
    {
     return false;
    }
   }
   else
   {
    return false;
   }
  }
 }

 if (s.empty())
  return true;
 else
  return false;
}