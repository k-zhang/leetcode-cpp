#ifndef LEETCODE_CPP_COMMON_H
#define LEETCODE_CPP_COMMON_H

#define EMPTY_NODE 1000

struct ListNode {
    int m_val;
    ListNode *m_next;

    explicit ListNode(int val);
    ListNode(int val, ListNode *next);
};

struct TreeNode {
    int m_val;
    TreeNode *m_left;
    TreeNode *m_right;

    explicit TreeNode(int val);
    TreeNode(int val, TreeNode *left, TreeNode *right);
};

TreeNode *constructTree(const int nums[], int size);
void deleteTree(TreeNode *tree);
bool compareTree(TreeNode *tree1, TreeNode *tree2);

#endif //LEETCODE_CPP_COMMON_H
