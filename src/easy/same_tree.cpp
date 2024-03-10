#include "common.h"

bool isSameTree(TreeNode *p, TreeNode *q) {
    if(p == nullptr && q == nullptr) return true;
    if(p == nullptr || q == nullptr || p->m_val != q-> m_val) return false;
    return isSameTree(p->m_left, q->m_left) && isSameTree(p->m_right, q->m_right);
}
