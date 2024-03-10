#include "common.h"

ListNode::ListNode(int val) : m_val(val), m_next(nullptr) {
}

ListNode::ListNode(int val, ListNode *next) : m_val(val), m_next(next) {
}

TreeNode::TreeNode(int val) : m_val(val), m_left(nullptr), m_right(nullptr) {
}

TreeNode::TreeNode(int val, TreeNode *left, TreeNode *right) : m_val(val), m_left(left), m_right(right) {
}