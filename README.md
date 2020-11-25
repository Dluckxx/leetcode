# LeetCode刷题模版

本项目意在使用C++方便的进行LeetCode刷题，使用者只需专注于解题函数的编辑而无需在意过多输入输出与调试与额外代码的编辑。

## 使用方法

1. 在`Solution.h`内编辑您的代码。复制力扣的函数到`example`函数内，并修改宏中的函数名和实际函数名一致。
2. 修改`private`区域的变量，`i1,i2...i6`为输入的参数，只需要定义需要数量的测试用例参数即可。多余的请勿修改。
3. 修改`\_ret`的类型为返回值类型，修改`_numberOfParm`的值为题解函数参数数目。
4. 修改`void Solution::operator()()`内`fun()`中的参数数目和对应的参数相同。
5. 在函数内编写，并运行验证代码。


## 项目解析
* `main.cpp`：主函数，无需任何改动。
* `Solution.h`：题解类，重载了调用运算符和输出运算符，可自适应参数数量和类型输出对应信息。
* `output.h`：负责输出的类，除标准库和内置类型外，目前适配完全二叉树和链表的输出。
* `data.h`：定义需要的数据结构的类。实现了链表和二叉树的列表初始化构造函数。注意二叉树必须是完全二叉树，后续多余的NULL在初始化时无需写进列表。