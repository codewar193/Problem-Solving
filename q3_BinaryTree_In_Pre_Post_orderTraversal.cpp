#include<iostream>
#include<queue>
#include<stack>
using namespace std;
/*Tree Traversals (Inorder, Preorder and Postorder)*/

class node {
    public:
     int data;
     node* left;
     node* right;

     node(int value){
        this->data = value;
        this->left = NULL;
        this->right = NULL;
     }
};
//Inorder Traversal
//=====================

void inOrder(node* root){

    //Base case 
     if (root == NULL)
     {
        return;
     }
     

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);

}
//Preorder Traversal
//=====================

void preOrder(node* root){

    //Base case 
     if (root == NULL)
     {
        return;
     }
     
    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);

}
//Postorder Traversal
//=====================

void postOrder(node* root){

    //Base case 
     if (root == NULL)
     {
        return;
     }
     

    postOrder(root->left);
    postOrder(root->right);
     cout<<root->data<<" ";

}

node* buildTree(node* root){

int data;
cout<<"Enter data: "<<endl;
cin>>data;

root = new node(data);

if(data ==- 1){
    return NULL;
}
cout<<"Enter data for inserting in left of "<<data<<endl;
root->left=buildTree(root->left);
cout<<"Enter data for inserting in right of "<<data<<endl;
root->right=buildTree(root->right);

return root;

}
int main() {
    node* root =NULL;
    //Creating a Tree
   root =  buildTree(root);
    

    //Level order 
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<< "Inorder traversal output: "<<endl;
    inOrder(root);
    cout<< "\nPreorder traversal output: "<<endl;
    preOrder(root);
    cout<< "\nPostorder traversal output: "<<endl;
    postOrder(root);
    return 0;
}
