//
// Created by 杜铁生 on 2020/11/18.
//

#ifndef LEETCODE_OUTPUT_H
#define LEETCODE_OUTPUT_H

#include <iostream>

using namespace std;

class Output {
public:
    explicit Output(int parmNum, int index = 0) : parmNum(parmNum), index(index) {};

    /**
     * 递归输出所有不同类型的参数
     * @tparam T 当前输出的变量类型
     * @tparam ArgsType 待输出的变量类型集合
     * @param t 目前前输出的变量
     * @param args 待输出的变量集合
     */
    template<typename T, typename...ArgsType>
    void printParm(const T &t, const ArgsType &...args);

    template<typename T>
    void printParm(const T &t);

    /**
     * 输出返回值
     * @tparam T
     * @param t
     */
    template<typename T>
    void printRet(const T &t);

    /**
     * 基础输出函数，本质上干活的函数
     * @tparam T
     * @param t
     */
    template<typename T>
    void print(const T &t);

    template<typename T>
    void print(const vector<T> &t);

    template<>
    void print(const bool &t);

private:
    int index;
    int parmNum;
};

template<typename T>
void Output::print(const T &t) {
    cout << t;
}

template<typename T, typename... Args>
void Output::printParm(const T &t, const Args &... args) {
    printParm(t);
    index++;
    if (index < parmNum)
        printParm(args...);
}

template<typename T>
void Output::printParm(const T &t) {
    cout << "input(" << index << ") : ";
    print(t);
    cout << endl;
}

template<typename T>
void Output::printRet(const T &t) {
    print(t);
    cout << endl;
}

template<typename T>
void Output::print(const vector<T> &t) {
    cout << "[";
    for (auto it = t.begin(); it != t.end(); ++it) {
        print(*it);
        if (it != t.end() - 1) cout << ",";
    }
    cout << "]";
}

template<>
void Output::print(const bool &t) {
    if (t) cout << "true";
    else cout << "false";
}

#endif //LEETCODE_OUTPUT_H
