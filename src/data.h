//
// Created by 杜铁生 on 2020/11/20.
//

#ifndef LEETCODE_DATA_H
#define LEETCODE_DATA_H

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}

    ListNode(std::initializer_list<int> il) {
        if (il.size() == 0) return;
        if (il.size() == 1){
            val = *il.begin();
            return;
        }
        val = *il.begin();
        auto *cur = this;
        for (auto it = il.begin() + 1; it != il.end(); ++it) {
            cur->next = new ListNode(*it);
            cur = cur->next;
        }
    }
};

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct Node {
    int val;
    Node *left;
    Node *right;
    Node *next;
};

#endif //LEETCODE_DATA_H
