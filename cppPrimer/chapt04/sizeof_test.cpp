#include <iostream>
#include <string>

using namespace std;
int main()
{
    //sizeof 运算符
    string s1 = "hello";
    int a;
    auto b = sizeof(s1);
    int *c = &a; // 对指针执行sizeof得到指针本身占用空间的大小
    int &d = a; //对引用执行sizeof得到被引用对象所占对大小
    int arr[] = {1,2,3}; //对数组sizeof=数组占用空间大小
    std::cout << b << std::endl;
    std::cout << sizeof(a) << std::endl;//4
    std::cout << sizeof(b) << std::endl;// 8
    std::cout << sizeof(c) << std::endl;//8
    std::cout << sizeof(d) << std::endl;//4
    std::cout << sizeof(arr) << std::endl;//4
    std::cout << sizeof(s1) << std::endl;//4
    
    std::cout << "Hello world" << std::endl;
    return 0;
}

