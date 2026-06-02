#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node*left,*right,*parent;
};
struct node *root=NULL;

void insert(int val){
    struct node *newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=val;
    newnode->left=NULL;
    newnode->right=NULL;
    newnode->parent=NULL;
    if(root==NULL){
        root=newnode;
    }
    else{
        struct node*temp=root;
        while(temp!=NULL){
            int cur=temp->data;
            if(cur>val){
                if(temp->left==NULL){
                    temp->left=newnode;
                    newnode->parent=temp;
                    break;
                }
                temp=temp->left;
            }
            else{
                if(temp->right==NULL){
                    temp->right=newnode;
                    newnode->parent=temp;
                    break;
                }
                temp=temp->right;
            }
        }
    }
   
}
void search(int val){
    struct node *temp=root;
    while(temp!=NULL){
        if(temp->data==val){
            printf("Found\n");
            return;
        }
        else if(temp->data>val){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    printf("Not Found\n");
    
}
void maximum(){
    struct node *temp=root;
    while(temp->right!=NULL){
        temp = temp->right;
    }
    printf("%d",temp->data);
}
void min(){
    struct node *temp=root;
    while(temp->left!=NULL){
        temp = temp->left;
    }
    printf("%d",temp->data);
}

struct node* findNode(int val){
    struct node *temp=root;
    while(temp!=NULL){
        if(temp->data==val){
            
            return temp;
        }
        else if(temp->data>val){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
    }
    return NULL;
    
}
struct node *successor (struct node*temp){
    temp=temp->right;
    while (temp->left!=NULL){
        temp=temp->left;
    }
    return temp;
}
struct node*predisisor(struct node * temp){
    temp=temp->left;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp;
}

void deleteNode1c(struct node* temp){
    struct node*par=temp->parent;
    struct node*child;
    if(temp->left!=NULL){
        child=temp->left;
        
    }
    else{
        child=temp->right;
    }
    if(par==NULL){
        root=child;
        free(temp);
        root->parent=NULL;
        return;
    }
    if(par->data>temp->data){
        par->left=child;
        child->parent=par;
    }
    else{
        par->right=child;
        child->parent=par;
    }
    free(temp);
    
}
void deleteNode0c(struct node* temp){
   struct node* par=temp->parent;
   if(par==NULL){
    root=NULL;
    free(temp);
   }
   else{
        if(par->data >temp->data){
        par->left=NULL;
        }
        else{
        par->right=NULL;
        }
        free(temp);
    }

}
void deleteNode2c(struct node* temp){
    struct node* succ= successor(temp);
    temp->data =succ->data;
    if(succ->right==NULL){
        deleteNode0c(succ);
    }
    else {
    deleteNode1c(succ);
    }

}


void delete(int val){
    struct node * temp=findNode(val);
    if (temp==NULL){
        printf("node not found");
    }
    else {
        if(temp->left!=NULL&&temp->right!=NULL){
            //two child
            deleteNode2c(temp);
        }
        else if(temp->left!=NULL||temp->right!=NULL){
            //1 child
            deleteNode1c(temp);
        }
        else {
            //0 child
            deleteNode0c(temp);
        }
    }
}


void inorder(struct node *cu){
    
    if(cu==NULL) return;
    inorder(cu->left);
    printf("%d ",cu->data);

    inorder(cu->right);

}
int main(){
    insert(44);
    insert(17);
    insert(88);
    insert(32);
    insert(65);
    insert(97);
    insert(28);
    insert(54);
    insert(82);
    insert(29);
    insert(76);
    insert(80);
    insert(50);
    inorder(root);
    printf("\n");
   
    //search(5);
   // maximum();
    //printf("\n");
   // min();
    //delete(44);
    //inorder(root);
    
}

