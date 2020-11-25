//
// Created by 杜铁生 on 2020/11/20.
//

#ifndef LEETCODE_DATA_H
#define LEETCODE_DATA_H

using namespace std;

struct ListNode {
    int val;
    ListNode *next;

    explicit ListNode(int x) : val(x), next(nullptr) {}

    ListNode(std::initializer_list<int> il) {
        if (il.size() == 0) return;
        if (il.size() == 1) {
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
    int val{};
    TreeNode *left{};
    TreeNode *right{};

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}

    TreeNode(initializer_list<int> il) {
        *this = TreeNode(vector<int>(il.begin(), il.end()));
    }

    explicit TreeNode(vector<int> vec) {
        this->val = vec.front();
        vector<int> l, r;
        auto it = vec.begin() + 1;
        for (int i = 1; i < vec.size(); i *= 2) {
            for (int j = 0; j < i; ++j) {
                if (it == vec.end()) break;
                l.push_back(*it);
                it++;
            }
            for (int j = 0; j < i; ++j) {
                if (it == vec.end()) break;
                r.push_back(*it);
                it++;
            }
        }
        if (!l.empty()) this->left = new TreeNode(l);
        else this->left = nullptr;
        if (!r.empty()) this->right = new TreeNode(r);
        else this->right = nullptr;
    }

    vector<string> toVector() {
        vector<string> ret;
        list<TreeNode *> nodes;
        nodes.push_back(this);
        while (!nodes.empty()) {
            TreeNode *node = nodes.front();
            nodes.pop_front();
            if (node != nullptr) {
                nodes.push_back(node->left);
                nodes.push_back(node->right);
                ret.push_back(to_string(node->val));
            }
        }
        return ret;
    }
};

struct Node {
    int val;
    Node *left;
    Node *right;
    Node *next;
};

#endif //LEETCODE_DATA_H
