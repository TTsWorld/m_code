#include <iostream>
#include <map>

using namespace std;
void solution01()
{
    int target = 9;
    int arr[] = {1,5,2,7,4,3,7};
    for(int idx=0; idx<=sizeof(arr)/sizeof(arr[0]);idx++) 
    {
        for(int idx2=0;idx2<=sizeof(arr)/sizeof(arr[0]);idx2++)
        {
            if(arr[idx] + arr[idx2] == target)
            {
                std::cout << "idx is bef:[" << idx << "], end:[" << idx2 << "]"<< std::endl;
                std::cout << "value is bef:" << arr[idx] << ", end:" << arr[idx2]<< ""<< std::endl;
            }
        }
    }
 
}
//
void solution02()
{
    int target = 10;
    int arr[] = {1,5,2,7,4,3,7};
    int delta = 0;
    for(int idx=0; idx<=sizeof(arr)/sizeof(arr[0]);idx++)
    {
        map<int,int>  deltaMap;  
        delta = target - arr[idx];
        if(deltaMap.find(delta) != deltaMap.end())
        {
            std::out << "index :" << idx << "value:" <<arr[idx] << std::endl ;
        }
        deltaMap[arr[idx]] = idx;
    }

}
int main()
{
    solution02();
}

