#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;

    struct node* left;
    struct node* right;
};

struct node* newTree(int v) {
    struct node* currNode = malloc(sizeof(struct node));
    if (currNode == NULL) {
        printf("not enough space\n");
        exit(0);
    }
    currNode->value = v;
    currNode->left = NULL;
    currNode->right = NULL;
    return currNode;
}

void insert(struct node** treePoint, int v) {
    struct node* tree = *treePoint;
    if (tree == NULL) {
       *treePoint = newTree(v);

    }
    if (tree->value == v) {
        return;
    } else if (tree->value < v) {
        insert(&(tree->left), v);
    } else {
        insert(&(tree->right), v);
    }
}

void printTree(struct node* tree) {
    if (tree == NULL) {
        return;
    }
    printf("%d", tree->value);
    printTree(tree->left);
    printTree(tree->right);
}


/*
void levelOrder(struct node* tree, int level) {
    if (tree == NULL) {
        return;
    }
    if (level == tree->height) {
        printf("%d", tree->value);
    } else {
        printf("\n");
        levelOrder(tree->left, level + 1);
        levelOrder(tree->right, level + 1);
    }
}
*/


int main() {
    struct node* binarySearch = newTree(5);
   // binarySearch->right = newTree(6);

//    binarySearch->left = newTree(4);

    //printTree(binarySearch);

    insert(&binarySearch, 6);
    //printf("%d\n", binarySearch->value);
    printTree(binarySearch);

    return 0;
}
