#include <stdexcept>
#include <list>
#include "common.h"

using namespace std;

TreeNode *constructTree(const int nums[], int size) {
    if (size == 0) return nullptr;
    if (size == 1) {
        if(nums[0] == EMPTY_NODE) {
            throw invalid_argument("Cannot have one single empty node as input");
        }
    }

    vector<TreeNode *> tree;
    for(int i = 0 ; i < size ; i ++) {
        TreeNode *node = nums[i] == EMPTY_NODE ? nullptr : new TreeNode(nums[i]);
        tree.push_back(node);
    }

    int index = 0, search = 1;
    while(search < tree.size()) {
        TreeNode *node = tree.at(index);
        if(node != nullptr) {
            node->m_left = tree.at(search++);
            if(search < tree.size()) {
                node->m_right = tree.at(search++);
            }
        }
        index ++;
    }

    return tree.at(0);
}

void deleteTree(TreeNode *tree) {
    if(tree->m_left != nullptr) deleteTree(tree->m_left);
    if(tree->m_right != nullptr) deleteTree(tree->m_right);
    delete tree;
}

bool compareTree(TreeNode *tree1, TreeNode *tree2) {
    if(tree1 == nullptr && tree2 == nullptr) return true;
    if(tree1 != nullptr && tree2 != nullptr) {
        return (tree1->m_val == tree2->m_val) &&
                compareTree(tree1->m_left, tree2->m_left) &&
                compareTree(tree1->m_right, tree2->m_right);
    }
    return false;
}