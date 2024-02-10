#include <iostream>
using namespace std;

//  Class Node For DOUBLY Linked List
class Node
{
public:
 int data;
 Node *prev;
 Node *next;

 Node(int d)
 {
  this->data = d;
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
  cout << " Memory is free for node with data " << val<<endl;
 }
};

// For Traversing Doubly linked list
void print(Node *&head)
{
 Node *temp = head;
 while (temp != NULL)
 {
  cout << temp->data << " ";
  temp = temp->next;
 }
 cout << endl;
}

// Returns Length of the D Linked list
int getLength(Node *&head)
{
 int len = 0;
 Node *temp = head;
 while (temp != NULL)
 {
  len++;
  temp = temp->next;
 }
 return len;
}

// For Inserting Element at head Position
void insertAtHead(Node *&head, Node *&tail, int d)
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
  temp->next = head;
  head->prev = temp;
  head = temp;
 }
}

// For Inserting Element at tail Position
void insertAtTail(Node *&tail, Node *&head, int d)
{
 if (tail == NULL)
 {
  Node *temp = new Node(d);
  tail = temp;
  head = temp;
 }
 else
 {
  Node *temp = new Node(d);
  tail->next = temp;
  temp->prev = tail;
  tail = temp;
 }
}

// for Inserting element at any given POSITION
void insertAtPosition(Node *&tail, Node *&head, int position, int d)
{
 // for correctly printing head element
 if (position == 1)
 {
  insertAtHead(head, tail, d);
  return;
 }

 // for traversing the node till the given position
 int cnt = 1;
 Node *temp = head;
 while (cnt < position - 1)
 {
  temp = temp->next;
  cnt++;
 }

 // for updating the TAIL value correctly
 if (temp->next == NULL)
 {
  insertAtTail(tail, head, d);
  return;
 }

 // for Inserting element at given position
 Node *nodeToInsert = new Node(d);
 nodeToInsert->next = temp->next;
 temp->next->prev = nodeToInsert;
 temp->next = nodeToInsert;
 nodeToInsert->prev = temp;
}

void deletePosition(Node *&head, Node* &tail,int position)
{
 if (position == 1)
 {
  Node *temp = head;
  temp->next->prev = NULL;
  head = temp->next;
  temp->next = NULL;
  delete temp;
 }
 else
 {
  Node *curr = head;
  Node *prev = NULL;

  int cnt = 1;
  while (cnt < position)
  {
   prev = curr;
   curr = curr->next;
   cnt++;
  }
  curr->prev = NULL;
  prev->next = curr->next;
  curr->next = NULL;
  delete curr;

  if (prev->next == NULL)
  {
   tail = prev;
  }
 }
}

int main()
{
 // Node *node1 = new Node(10);
 Node *head = NULL; // If node1 is not given then do like this
 Node *tail = NULL;

 print(head);
 // cout<<getLength(head)<<endl;

 insertAtHead(head, tail, 11);
 print(head);

 insertAtTail(tail, head, 12);
 print(head);

 insertAtPosition(tail, head, 3, 100);
 print(head);

 deletePosition(head,tail, 3);
 print(head);

 return 0;
}
/*
REVERSES DOUBLY LINKED LIST USING RECURSION

Node* reverse(Node* &head){

    //base case
    if(head== NULL || head->next==NULL){
        return head;
    }

    Node* ChotaHead= reverse(head->next);
    head->next->next = head;
    head->prev = head->next;
    head->next=NULL;


    return ChotaHead;
}
*/