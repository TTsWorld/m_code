#include <iostream>

using namespace std;
int main()
{
    std::cout << "Hello world" << std::endl;
    //inition array
    int arr[10] = {}; //含有10个整形元素的数组  列表初始化，如果不初始化，就是脏值
    int *arr2[10]; //含有10个 整形指针元素的数组

    int (*parrsy)[10] = &arr; //parray 指向指向一个含有10个整数的数组
    int (&pref)[10] = arr; // pref 表示指向数组的引用

    cout << arr << endl;
    
    string nums[] = {"one", "two", "three"};
    string *p = &nums[0];
    cout << p << endl;
    cout << &nums<< endl;
    
    int a = 0 ;
    int &b = a;  //声明一个int类型的引用
    cout << b << endl;


    cout << "===============" << endl;
    for (auto i : pref)
    {
        cout << i << endl;
    }
    
    //访问数组元素
    //// 3.5.3指针和数组 
    //使用数组的时候，编译器一般会将数组转化为指针
    //指针运o算
    //指向数组的指针可以执行所有的迭代器支持的运算
    cout << "===============" << endl;
    int arr5[56] = {1,2,3,4,5};
    int *ip  = arr5;
    int *ip2 = ip + 2;
    cout << "a[2]:" << *ip2 << endl;
    
    
    //
    return 0;
}

