#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int body;
    struct node* next;
};

struct node* newNode(int body, struct node* next) {
    struct node* currNode = malloc(sizeof(struct node));
    if (currNode == NULL) {
        printf("Error\n");
        exit(0);
    } else {
        currNode->body  = body;
        currNode->next = next;
    }
    return currNode;
}


int size(struct node* n) {
    struct node* pointer = n;
    int counter;
    counter = 0;
    int* cp = &counter;
    while (pointer != NULL) {

        *cp = *cp + 1;
        pointer = pointer->next;
    }
    return counter;
}

int add(struct node* currNode, int a) {
    struct node* tempNode = newNode(a, NULL);
    printf("pass1\n");
    if (tempNode == NULL) {
        printf("could not make node");
        return 0;
    } else {
        printf("pass2\n");
        struct node* firstPointer = currNode;
        while (firstPointer->next != NULL) {
            firstPointer = firstPointer->next;
        }
        firstPointer->next = tempNode;
        return 1;
    }
}


void printList(struct node* n) {
    printf("(");
    struct node* tempPoint = n;
    while (tempPoint != NULL) {
        printf("%d", tempPoint->body);
        printf(",");
        tempPoint = tempPoint->next;
    }

    printf(")\n");

}

int main() {
    struct node* newList = newNode(2, NULL);
    printList(newList);
    add(newList, 3);
    printList(newList);
    int sizeNode = size(newList);
    printf(sizeNode);
    return 0;
}
