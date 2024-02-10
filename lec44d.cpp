#include <iostream>
using namespace std;

class Node
{
public:
 int data;
 Node *prev;
 Node *next;

 Node(int data)
 {
  this->data = data;
  this->prev = NULL;
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

void print(Node *&tail)
{
 if (tail == NULL)
 {
  cout << "The list is empty!" << endl;
  return;
 }
 Node *temp = tail;
 do
 {
  cout << temp->data << " ";
  temp = temp->next;
 } while (temp != tail);
 cout << endl;
}

void insertAtHead(Node* & head,Node* &tail,int d)
{
 if (head == NULL)
 {
  Node *temp = new Node(d);
  head = temp;
  tail = temp;
 }
 else
 {
  Node *temp = new Node(d);
  Node* curr=head;
  curr->next=temp->prev;
  temp->prev=curr->next;
  temp->next=curr->prev;
  curr->prev=temp->next;
  head=temp;
 }
}

int main()
{
 Node* node1=new Node(3);
 Node* head=node1;
 Node* tail=node1;
 print(head);
 insertAtHead(head, tail, 11);
 print(head);
 return 0;
}