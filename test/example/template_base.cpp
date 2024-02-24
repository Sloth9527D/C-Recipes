/**
 * @brief 模板基础使用
 * @author p479764650@gamil.com
 * @date 2024/2/24
 */

#include <iostream>
#include <vector>

using namespace std;
// this使用
template <typename T>
class Base
{
public:
    void run() { std::cout << "hhh" << std::endl; };
};

void run() { std::cout << "hhh11" << std::endl; };

template <typename T>
class Derived : Base<T>
{
public:
    void foo()
    {
        // 继承时需要显示使用this或Base<T>::限定
        Base<T>::run();
        this->run();
        run();
    }
};

// 模板模板参数,
template <typename T, typename CONT = std::vector<T>>
class MyStack
{
};
MyStack<int, vector<int>> a{};

// 此处只能使用class？
template <typename T, template <typename ELEM> class CONT = std::vector>
class MyStack1
{
};
MyStack1<int, vector> b{};