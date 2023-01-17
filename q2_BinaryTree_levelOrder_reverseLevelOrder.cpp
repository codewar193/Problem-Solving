#include<iostream>
#include<queue>
#include<stack>
using namespace std;

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

void reverseLevelOrder(node* root)
{//The idea is to print the last level first, then the second last level, and so on
    stack <node *> S;
    queue <node *> Q;
    Q.push(root);
    
   /* Do something like normal level order traversal order. Following are the
    differences with normal level order traversal
    1) Instead of printing a node, we push the node to stack
    2) Right subtree is visited before left subtree
    */
     while (Q.empty() == false)
    {
        /* Dequeue node and make it root */
        root = Q.front();
        Q.pop();
        S.push(root);
 
  
        if (root->right)
            Q.push(root->right); // NOTE: RIGHT CHILD IS ENQUEUED BEFORE LEFT
 
        if (root->left)
            Q.push(root->left);
    }
 
 
    while (S.empty()==false)
    {
        root = S.top();
        cout << root->data << " ";
        S.pop();
    }
}
 


void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
     node* temp = q.front();
     q.pop();


     if(temp == NULL){//here use seperator for printing level wise.
        cout<< endl;

        if(!q.empty()){
            q.push(NULL);
        }
        
     }
     else{
       
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
         cout<<temp->data <<" ";
     }

    }
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
    cout<< "Printing the level order traversal output: "<<endl;
    levelOrderTraversal(root);
      cout<< "Printing the reverse level order traversal output: "<<endl;
    reverseLevelOrder(root);
    return 0;
}
