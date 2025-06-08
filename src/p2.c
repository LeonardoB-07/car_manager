#include "list.h"
#include "mil_tree.h"

void buildMileageTree(List* carList) {
    MileageTree* root = NULL;
    Node* current = carList->head;
    while (current != NULL) {
        root = insertNode(root, current->car->mileage, current->car);
        current = current->next;
    }

    printf("Árvore de quilometragem criada.\n");

    freeTree(root);
}
