#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::cout << "Hello world" << std::endl;
    string a;
    vector<string> vs;
    while(cin >>a)
    {
        vs.push_back(a);
    }

    for(auto i :vs)
    {
        transform(i.begin(), i.end(), i.begin(), ::toupper);
        cout << i << endl;
    }
    return 0;
}

