#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> vi;
    for(int i=0;i<100;i++)
    {
        vi.push_back("abc" + to_string(i));
    }

    if (vi.begin() != vi.end())
    {
        auto it = vi.begin();
        cout << "vi.begin:"<<*it <<endl;
    }

    for (auto it=vi.cbegin();it!=vi.cend();it++)
    {
        if(!(*it).empty())
        {
            cout << *it << endl;
            cout << it->c_str() << endl;
        }
    }

    std::cout << "Hello world" << std::endl;

    return 0;
}

