// #include <iostream>
// using namespace std;

// int getPivot(int arr[], int n)
// {

//  int s = 0;
//  int e = n - 1;
//  int mid = s + (e - s) / 2;

//  while (s < e)
//  {

//   if (arr[mid] >= arr[0])
//   {
//    s = mid + 1;
//   }
//   else
//   {
//    e = mid;
//   }
//   mid = s + (e - s) / 2;
//  }
//  return s;
// }

// int main()
// {
//  int arr[5] = {1, 3, 8, 10, 17};
//  cout << "Pivot is " << getPivot(arr, 5) << endl;
// }

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<queue>

using namespace std;

class Node
{
public:
 int data;
 Node* left;
 Node* right;

 Node(int d)
 {
  this->data = d;
  this->left = NULL;
  this->right = NULL;
 }
};

Node *insertNode(Node *root, int d)
{
 if (root == NULL)
 {
  root = new Node(d);
  return root;
 }

 if (d > root->data)
 {
  root->right = insertNode(root->right, d);
 }

 else
 {
  root->left = insertNode(root->left, d);
 }

 return root;
}

void takeInput(Node* &root)
{
 int data;
 while (cin >> data && data != -1)
 {
  root = insertNode(root, data);
 }
}

Node* maxVal(Node* root){
 Node* temp = root;
 while(temp->right!=NULL){
  temp = temp->right;
 }
 return temp;
}

Node *minVal(Node *root)
{
 Node *temp = root;
 while (temp->left != NULL)
 {
  temp = temp->left;
 }
 return temp;
}

Node* deleteFromBST(Node* root, int val){
 if(root==NULL){
  return root;
 }

 if(root->data==val){
  //0 child
  if(root->left==NULL && root->right==NULL){
   delete root;
   return NULL;
  }

  //1 Child
    //1 child is in the left side
    if(root->left!=NULL && root->right==NULL){
     Node* temp = root->left;
     delete root;
     return temp;
    }

    // 1 child is in the right side
    if (root->left == NULL && root->right != NULL)
    {
     Node *temp = root->right;
     delete root;
     return temp;
    }

  //2 child
  if(root->left!=NULL && root->right!=NULL){
   int mini = minVal(root->right)->data;
   root->data = mini;
   root->right = deleteFromBST(root->right,mini);
   return root;
  }
 }
 else if (root->data > val)
 {
  root->left = deleteFromBST(root->left, val);
  return root;
 }

 else{
  root->right = deleteFromBST(root->right, val);
  return root;
 }
}

void levelOrderTraversal(Node* root){
 queue<Node*> q;
 q.push(root);
 q.push(NULL);

 while(!q.empty()){
  Node* temp = q.front();
  q.pop();

  if(temp==NULL){
   cout<<endl;
   if(!q.empty()){
    q.push(NULL);
   }
  }
  else{
   cout<<temp->data<<" ";
   if(temp->left){
    q.push(temp->left);
   }
   if(temp->right){
    q.push(temp->right);
   }
  }
 }
}

int main()
{
 Node *root = NULL;
 cout << "Enter the data for the tree"<<endl;
 takeInput(root);
 levelOrderTraversal(root);
 // cout<<maxVal(root)->data<<endl;
 // cout<<minVal(root)->data<<endl;
 cout<<"Printing the BST after deletion of the node"<<endl;
 deleteFromBST(root,15);
 levelOrderTraversal(root);

 return 0;
}
