//Name:Zisan Hasan
//Id:242014055


#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *left,*right;
} Node;

Node*createNode(int value){
    Node*newNode=(Node*)malloc(sizeof(Node));
    newNode->data=value;
    newNode->left=newNode->right=NULL;
    return newNode;
}

Node*insert(Node*root,int value){
    Node*newNode=createNode(value);
    Node*current=root,*parent=NULL;
    for(;current!=NULL;){
        parent=current;
        if(value<current->data){
               current=current->left;
        }
        else{
                current=current->right;
        }
    }
    if(parent==NULL){
            return newNode;
    }
    if(value<parent->data){
            parent->left=newNode;
    }
    else{
            parent->right=newNode;
    }
    return root;
}

void postorderTraversal(Node*root){
    if(root==NULL){
            return;
    }
    postorderTraversal(root->left);
    postorderTraversal(root->right);
    printf("%d ",root->data);
}

int main() {
    int n,value;
    Node*root=NULL;
    printf("Enter number of task codes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter task code %d: ",i+1);
        scanf("%d",&value);
        root=insert(root,value);
    }
    printf("Postorder traversal: ");
    postorderTraversal(root);
    printf("\n");
}
