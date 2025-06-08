#ifndef BST_MILEAGE_H
#define BST_MILEAGE_H

typedef struct Node {
    int price;
    char model[50];
    int mileage;
    struct Node* left;
    struct Node* right;
} Node;

Node* insertByMileage(Node* root, int price, char* model, int mileage);
void printMileageTree(Node* root);

#endif
