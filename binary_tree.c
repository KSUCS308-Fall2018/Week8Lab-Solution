//
//  binary_tree.c 
//  Week 8 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#include <stdlib.h>

#include "binary_tree.h"

BinaryTree * BinaryTree_make(int value, BinaryTree * left, BinaryTree * right) {
    BinaryTree * t = malloc(sizeof(BinaryTree));

    t->value = value;
    t->left = left;
    t->right = right;

    return t;
}

void BinaryTree_free(BinaryTree * t) {
    if (t == NULL) {
        return;
    }
    
    BinaryTree_free(t->left);
    BinaryTree_free(t->right);

    free(t);
}
