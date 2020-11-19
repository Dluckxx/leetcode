#include <climits>
//
// Created by 杜铁生 on 2020/7/3.
//

#ifndef LEETCODE_SOLUTION_H
#define LEETCODE_SOLUTION_H

#include <sstream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <stack>
#include <unordered_map>
#include <list>
#include <array>
#include <iostream>
#include <iomanip>
#include "output.h"

using namespace std;

struct __unused ListNode {
    __unused int val;
    __unused ListNode *next;

    __unused explicit ListNode(int x) : val(x), next(nullptr) {}
};

struct __unused TreeNode {
    __unused int val;
    __unused TreeNode *left;
    __unused TreeNode *right;

    __unused explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

struct __unused Node {
    __unused int val;
    __unused Node *left;
    __unused  Node *right;
    __unused Node *next;
};

class Solution {
public:
#define example fun // 修改宏中的名称（example）和函数名一致

    int example(int parm) {
        // 此处编写题解代码
        return parm;
    }

    void operator()();

    friend ostream &operator<<(ostream &os, const Solution &solution);

private:
// 测试用例参数，请勿删除多余参数，需要时直接赋值即可
    int i1{1};
    int i2;
    int i3;
    int i4;
    int i5;
    int i6;
// 需要设置的变量
    // 返回值注意类型和函数类型返回一致
    int _ret;
    // 参数数量
    int _numberOfParm = 1;
};

void Solution::operator()() {
    // 运行
    clock_t start, end;
    start = clock();
    for (int i = 0; i < 1000; ++i)
        _ret = fun(i1); // 此处注意修改参数数量
    end = clock();
    // 输出结果
    cout << *this;
    cout << "Time usage : " << (double) (end - start) / CLOCKS_PER_SEC << "ms" << endl;
}

ostream &operator<<(ostream &os, const Solution &solution) {
    Output out(solution._numberOfParm);
    os << "    -------- output --------    " << endl;
    out.printParm(solution.i1, solution.i2, solution.i3, solution.i4, solution.i5, solution.i6);
    // result
    os << "result : ";
    out.printRet(solution._ret);
    os << "    -------- output --------    " << endl;
    return os;
}

#endif //LEETCODE_SOLUTION_H
