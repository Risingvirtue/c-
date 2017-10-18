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
    int count;
    count = 0;
    while (pointer != NULL) {
        count++;
        pointer = pointer->next;
    }

    return count;
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
//must pass in pointer to pointer
struct node* addFirst(struct node* currNode, int a) {
    struct node* tempNode = newNode(a, currNode);
    currNode = tempNode;
    return currNode;

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

int removeFirst(struct node** currNode) {
    int answer = (*currNode)->body;
    *currNode = ((*currNode)->next);
    printf("%d", answer);
    return answer;
}

int removeIndex(struct node** currNode, int index) {
    int answer;
    if (index > size(*currNode) || index < 0) {
        return 0;
    }
    struct node* tempPoint = *currNode;
    if (index == 0) {
        *currNode = (*currNode)->next;
    }
    struct node* prevNode = tempPoint;
    int i;
    for (i = 0; i < index; i++) {
        prevNode = tempPoint;
        tempPoint = tempPoint->next;
    }
    answer = tempPoint->body;
    prevNode->next = tempPoint->next;
    return answer;
}

int peek(struct node* currNode) {
    return currNode->body;
}

array* toArray(struct node* currNode) {
    int numElle;
    numElle = size(currNode);
    int n[numElle];
    int i;

    for (i = 0; i < numElle; i++) {
        n[i] = currNode->body;
        currNode = currNode->next;
    }
    return &n;

}
int main() {
    struct node* newList = newNode(2, NULL);
   // printList(newList);
    add(newList, 3);
    //printList(newList);
    int sizeNode = size(newList);
    //printf("%d", sizeNode);
    newList = addFirst(newList, 14);
    printList(newList);
    printf("%d\n", removeIndex(&newList, 2));
    printList(newList);

    return 0;
}
