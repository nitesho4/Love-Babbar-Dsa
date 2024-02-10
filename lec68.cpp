/*MORRIS TRAVERSAL FOR TREE (Optimized Inorder Traversal)
KEY FACTORS:--
1. TIME COMPLEXITY : O(N)
2. SPACE COMPLEXITY : O(1)
*/
Node* curr = root;
while(curr != NULL) {
   if(curr->left == NULL) {
    cout << curr->data << " ";
    curr = curr->right;
   }else {
    Node* pre = curr ->left;
    while(pre->right && pre->right != curr) {
        pre = pre->right;
    }
    if(pre->right == NULL) {
        pre->right = curr;
        curr = curr -> left;

    }else {
        pre->right = NULL;
        cout << curr->data << " ";
        curr = curr->right;
    }
   }
}