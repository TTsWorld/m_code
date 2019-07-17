#include <iostream>
#include <vector>
#include <string>


using namespace std;

int main()
{
    //vector initiion
    vector<int> v1;  //默认初始化
    vector<string> v2; 
    vector<int> v3 = v1; //拷贝构造初始化
    vector<int> v4(4,3); //v4 由3个4构成
    vector<int> v5{1,2,3,4,5}; // 列表初始化
    vector<int> v6 = {1,2,3,4,5}; //列表初始化2

    // function
    cout << "function test" << endl;
    int a;
    while(cin >>a)
    {
        v1.push_back(a);
    }

    cout << a << endl;
    for( int i : v1)  //在范围for循环中，不能修改vector
    {
        cout << i <<endl;
    }

    cout << "v5.size():" << v5.size() <<endl;
    cout << "v5.empty():" << v5.empty() <<endl;
    cout << "v5[3]:" << v5.empty() <<endl;
    cout << "v5[3]:" << v5.empty() <<endl;

    cout << "Hello world" << std::endl;
    return 0;
}

