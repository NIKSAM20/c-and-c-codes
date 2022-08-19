#include <stdio.h>
#include <stdlib.h>

struct node {
  int item;
  struct node* left;
  struct node* right;
};

// Inorder traversal
void inorderTraversal(struct node* root) {
  if (root == NULL) return;
  inorderTraversal(root->left);
  printf("%d ", root->item);
  inorderTraversal(root->right);
}

// Preorder traversal
void preorderTraversal(struct node* root) {
  if (root == NULL) return;
  printf("%d ", root->item);
  preorderTraversal(root->left);
  preorderTraversal(root->right);
}

// Postorder traversal
void postorderTraversal(struct node* root) {
  if (root == NULL) return;
  postorderTraversal(root->left);
  postorderTraversal(root->right);
  printf("%d ", root->item);
}

// Create a new Node
struct node* newnode(int value) {
  struct node* new1 = malloc(sizeof(struct node));
  new1->item = value;
  new1->left = NULL;
  new1->right = NULL;

  return new1;
}

// Insert on the left of the node
struct node* insertLeft(struct node* root, int value) {
  root->left = newnode(value);
  return root->left;
}

// Insert on the right of the node
struct node* insertRight(struct node* root, int value) {
  root->right = newnode(value);
  return root->right;
}

int main() {
     int ch;
     struct node* root = newnode(1);
     insertLeft(root, 2);
     insertRight(root, 3);
     insertLeft(root->left, 4);
     insertRight(root->left, 5);
     insertLeft(root->right, 6);
     insertRight(root->right, 7);
     
     
     while(1){
        printf("1. Inorder \n2. pre-order  \n3. post-order traversal\n");
        scanf("%d", &ch);
        switch(ch){
             case 1:
                    
                    inorderTraversal(root);
                    printf("\n");
                    break;
            case 2:
                    preorderTraversal(root);
                    printf("\n");
                    break;
            case 3:
                    postorderTraversal(root);
                    printf("\n");
                    break;
            default:
                    exit(0);
         
         }
    }
    return 0;
}

