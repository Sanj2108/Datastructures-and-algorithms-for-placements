#include<iostream>
#include<queue>
using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data=d;
        this->left=NULL;
        this->right=NULL;
    }
};

//inorder of bst is sorted
void inorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    inorder(root->left);
    cout << root-> data << " ";
    inorder(root->right);

}

void preorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    cout << root-> data << " ";
    preorder(root->left);
    preorder(root->right);

}

void postorder(Node* root) {
    //base case
    if(root == NULL) {
        return ;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root-> data << " ";

}

void levelOrderTraversal(Node* root) {
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}

Node* minimumInBst(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }

    return temp;
}

Node* maximumInBst(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }

    return temp;
}


Node* insertInBst(Node* root,int d){
    if(root==NULL){
        root=new Node(d);
        return root;
    }

    if(d>root->data){
        root->right=insertInBst(root->right,d);
    }
    else{
        root->left=insertInBst(root->left,d);
    }

    return root;
}

void takeInput(Node* &root){
    int data;
    cin>>data;
    while(data!=-1){
        root=insertInBst(root,data);
        cin>>data;
    }
}

Node* deleteFrombst(Node* root,int val){
    //base
    if(root==NULL){
        return root;
    }

    if(root->data==val){
        //0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //1 child
        //left child
        if(root->left!=NULL && root->right==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }

        //right child
         if(root->left==NULL && root->right!=NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        //2 child

        if(root->left!=NULL && root->right!=NULL){
            //ya toh right se min or left me se max ko replace and delete that
            int mini=minimumInBst(root->right)->data;
            root->data=mini;
            root->right=deleteFrombst(root->right,mini);
            return root;
        }

    }

    else if(root->data>val){
        root->left=deleteFrombst(root->left,val);
        return root;
    }
    else{
        root->right=deleteFrombst(root->right,val);
        return root;
    }
}

int main(){
    //for every node left subtree me chota aur rigth subtree me bada
    Node* root=NULL;
    cout<<"enter data for bst"<<endl;
    takeInput(root);
    cout<<"Printing bst"<<endl;
    levelOrderTraversal(root);
    return 0;
}