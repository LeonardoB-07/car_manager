#ifndef BST_PRICE_H
#define BST_PRICE_H

typedef struct Node {
    int price;
    char model[50];
    int mileage;
    struct Node* left;
    struct Node* right;
} Node;

Node* createNode(int price, char* model, int mileage);
Node* insertByPrice(Node* root, int price, char* model, int mileage);
void printPriceTree(Node* root);

#endif
