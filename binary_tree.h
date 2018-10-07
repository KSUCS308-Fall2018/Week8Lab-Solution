//
//  binary_tree.h
//  Week 8 
//
//  Created by Ashley Coleman on 7/5/18.
//  Copyright © 2018 Ashley Coleman. All rights reserved.
//

#ifndef tree_h
#define tree_h

typedef struct BinaryTree {
    int value;
    struct BinaryTree * left;
    struct BinaryTree * right;
} BinaryTree;

BinaryTree * BinaryTree_make(int, BinaryTree *, BinaryTree *);

void BinaryTree_free(BinaryTree *);

#endif /* core_h */
