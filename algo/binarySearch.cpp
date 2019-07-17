#include <iostream>
#include <vector>
#include<algorithm>

using namespace std;
int main()
{
    vector<int> vi = {5,1,5,1,6,3,2,11,6,7,2,3,542,512};
    sort(vi.begin(), vi.end());
    
    int target = 6;
    auto begin= vi.begin(), end = vi.end();
    auto mid = vi.begin() + (end-begin)/2;
    while( *mid != *end && *mid > *begin)
    {
        if(target < *mid)
        {
            end =  mid; 
            mid = 
            continue;
        }
        if(target > *mid)
        {
            begin = mid +1;
            continue;
        }
        cout << target;
        break;
    }

    std::cout << "Hello world" << std::endl;
    return 0;
}

