#include <iostream>
#include<map>
using namespace std;

class Node
{
public:
 int data;
 Node *next;

 Node(int data)
 {
  this->data = data;
  this->next = NULL;
 }

 ~Node()
 {
  int val = this->data;
  while (this->next != NULL)
  {
   delete next;
   next = NULL;
  }
  cout << " Memory is free for node with data " << val << endl;
 }
};

void insertNode(Node *&tail, int element, int d)
{
 if (tail == NULL)
 {
  Node *newNode = new Node(d);
  tail = newNode;
  newNode->next = newNode;
 }

 else
 {
  Node *curr = tail;
  while (curr->data != element)
  {
   curr = curr->next;
  }
  Node *temp = new Node(d);
  temp->next = curr->next;
  curr->next = temp;
 }
}

void print(Node *&tail)
{
 Node *temp = tail;
 if (tail == NULL)
 {
  cout << "The list is empty!" << endl;
  return;
 }
 do
 {
  cout << tail->data << " ";
  tail = tail->next;
 } while (temp != tail);
 cout << endl;
}

void deleteNode(Node *&tail, int value)
{

 // empty list
 if (tail == NULL)
 {
  cout << " List is empty, please check again" << endl;
  return;
 }
 else
 {
  // non-empty
  // assuming that "value" is present in the Linked List
  Node *prev = tail;
  Node *curr = prev->next;

  while (curr->data != value)
  {
   prev = curr;
   curr = curr->next;
  }

  prev->next = curr->next;

  // 1 Node Linked List
  if (curr == prev)
  {
   tail = NULL;
  }

  //>=2 Node linked list
  else if (tail == curr)
  {
   tail = prev;
  }

  curr->next = NULL;
  delete curr;

  if(prev->next==NULL)
  {
   tail=prev;
  }
 }
}

bool isCircularList(Node* head)
{
 if(head==NULL)
 {
  return true;
 }

 Node* temp=head->next;
 while(temp!=NULL && temp!=head)
 {
  temp=temp->next;
 }

 if(temp==NULL)
 {
  return false;
 }

 if(temp==head)
 {
  return true;
 }

}

bool detectLoop(Node* head)
{
 if(head==NULL)
 {
  return false;
 }
 Node* temp=head;
 map<Node*,bool> visited;

 while(temp!=NULL)
 {
  if(visited[temp]==true)
  {
   return true;
  }
  visited[temp]=true;
  temp=temp->next;
 }
 return false;
}

int main()
{
 Node *tail = NULL;

 insertNode(tail, 5, 3);
 print(tail);

 insertNode(tail, 3, 5);
 print(tail);

 insertNode(tail, 5, 7);
 print(tail);

 insertNode(tail, 7, 9);
 print(tail);

 insertNode(tail, 5, 6);
 print(tail);

 insertNode(tail, 9, 10);
 print(tail);

 insertNode(tail, 3, 4);
 print(tail);

 deleteNode(tail,9);
 print(tail);

 if(isCircularList(tail))
 {
  cout<<"Its a circular"<<endl;
 }
 else
 {
  cout << "Its a Not circular" << endl;
 }

 return 0;
}
