#include <iostream>
#include <map>
using namespace std;

// for creating a single Node or first Node in linked list
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
  int value = this->data;
  while (this->next != NULL)
  {
   delete next;
   this->next = NULL;
  }
  cout << " Memory is free for node with data " << value << endl;
 }
};

// For Inserting any element at the head or Start of the Node
// Singly Linked List
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
  head = temp;
 }
}

// for Inserting any element at the tail or End of the Node
// Singly Linked list
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
 Node *temp = head;
 int cnt = 1;
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
 temp->next = nodeToInsert;
}

void deletePosition(Node *&head, Node *&tail, int position)
{
 // deleting for 1st element
 if (position == 1)
 {
  Node *temp = head;
  head = head->next;
  temp->next = NULL;
  delete temp;
 }

 // deleting for any element
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
  prev->next = curr->next;
  curr->next = NULL;
  delete curr;

  if (prev->next == NULL)
  {
   tail = prev;
  }
 }
}

// for Printing or Traversing the linked list
// Singly Linked List
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


// To detectLoop in a Node 
bool detectLoop(Node *head)
{
 if (head == NULL)
 {
  return false;
 }
 Node *temp = head;
 map<Node *, bool> visited;

 while (temp != NULL)
 {
  if (visited[temp] == true)
  {
   cout << "the loop element starting point is " << temp->data << endl;
   return true;
  }
  visited[temp] = true;
  temp = temp->next;
 }
 return false;
}

// To detectLoop in a Node
Node *floydDetectLoop(Node *head)
{
 if(head==NULL)
 {
  return NULL;
 }

 Node* slow=head;
 Node* fast=head;

 while( slow!=NULL && fast!=NULL)
 {
  fast=fast->next;
  if(fast!=NULL)
  {
   fast=fast->next;
  }
  slow =slow->next;
  if(slow==fast)
  {
   cout<<"Element of loop is "<<slow->data<<endl;
   return slow;
  }
 }
 return NULL;
}

// To get the starting point or element of the loop node 
Node* getStartingNode(Node* head)
{
 if(head==NULL)
 {
  return NULL;
 }
 Node* slow=head;
 Node* intersection=floydDetectLoop(head);
 while(slow!=intersection)
 {
  slow=slow->next;
  intersection=intersection->next;
 }
 return slow;
}

// to remove cycle from the linked list 
void removeLoop(Node* head)
{
 if(head==NULL)
 {
  return;
 }
 Node* start=getStartingNode(head);
 Node* temp=start;

 while(temp->next!=start)
 {
  temp=temp->next;
 }
 temp->next=NULL;
}

// Driver Function
int main()
{
 // creating new Node
 Node *node1 = new Node(10);

 // Pointing Node to the head and tail
 Node *head = node1;
 Node *tail = node1;

 // for Inserting at the head
 // print(head);
 // insertAtHead(head,12);
 // print(head);
 // insertAtHead(head,15);
 // print(head);
 cout << endl;

 // for inserting at the tail
 // print(head);
 insertAtTail(tail, head, 12);
 // print(head);
 insertAtTail(tail, head, 15);
 // print(head);

 // cout << "After inserting element at given position" << endl;
 insertAtPosition(tail, head, 3, 22);
 print(head);
 tail->next = head->next;
 if (floydDetectLoop(head) != NULL)
 {
  cout << "Loop is present!" << endl;
 }
 else
 {
  cout << "Not present" << endl;
 }

 Node* loop=getStartingNode(head);
 cout<<"The start is "<<loop->data<<endl;
 removeLoop(head);
 print(head);
 // print(head);
 // cout << "Head:" << head->data << endl;
 // cout << "Tail:" << tail->data << endl;

 // Deleting element at given position
 // deletePosition(head,tail,3);
 // print(head);

 // cout << "Head:" << head->data << endl;
 // cout << "Tail:" << tail->data << endl;
 return 0;
}