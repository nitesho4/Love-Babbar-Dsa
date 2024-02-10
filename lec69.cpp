#include <iostream>
#include<queue>
using namespace std;

class Node
{
public:
 int data;
 Node *left;
 Node *right;

 Node(int d)
 {
  this->data = d;
  left = NULL;
  right = NULL;
 }
};

Node *InsertIntoBst(Node *root, int d)
{
 if (root == NULL)
 {
  root = new Node(d);
  return root;
 }

 if (d > root->data)
 {
  root->right = InsertIntoBst(root->right, d);
 }
 else
 {
  root->left = InsertIntoBst(root->left, d);
 }
 return root;
}

void takeInput(Node *&root)
{
 int data;
 cin >> data;

 while (data != -1)
 {
  root = InsertIntoBst(root, data);
  cin >> data;
 }
}

void levelOrderTraversal(Node *root)
{
 queue<Node *> q;
 q.push(root);
 q.push(NULL);
 while (!q.empty())
 {
  Node *temp = q.front();
  q.pop();
  if (temp == NULL)
  {
   cout << endl;
   if (!q.empty())
   {
    q.push(NULL);
   }
  }
  else
  {
   cout << temp->data << " ";
   if (temp->left != NULL)
   {
    q.push(temp->left);
   }
   if (temp->right != NULL)
   {
    q.push(temp->right);
   }
  }
 }
}

Node *minVal(Node *root)
{
 while (root->left != NULL)
 {
  root = root->left;
 }
 return root;
}

Node* maxVal(Node* root)
{
 while(root->right!=NULL)
 {
  root=root->right;
 }
 return root;
}

Node* deleteNodeBst(Node* root,int val)
{
 if(root==NULL)
 {
  return root;
 }
 if(root->data==val)
 {
  // 0 child;
  if(root->left==NULL && root->right==NULL)
  {
   delete root;
   return NULL;
  }
  // 1 child
  if(root->left!=NULL && root->right==NULL)
  {
   Node* temp = root->left;
   delete root;
   return temp;
  }
  if (root->left == NULL && root->right != NULL)
  {
   Node *temp = root->right;
   delete root;
   return temp;
  }

  //2 child;
  if(root->left!=NULL && root->right!=NULL)
  {
   int mini = minVal(root->right)->data;
   root->data = mini;
   root->right=deleteNodeBst(root->right,mini);
   return root;
  }
 }
 else if(val < root->data)
 {
  root->left=deleteNodeBst(root->left,val);
 }
 else
 {
  root->right = deleteNodeBst(root->right, val);
 }
}
int main()
{
 cout << "Hey Everything is fine!" << endl;

 Node *root = NULL;
 cout << "Enter the data to insert into BST" << endl;
 takeInput(root);
 cout<<"Printing the tree\n"<<endl;
 levelOrderTraversal(root);
 deleteNodeBst(root, 50);
 cout << endl;
 levelOrderTraversal(root);

 return 0;
}