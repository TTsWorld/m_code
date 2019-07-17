#include <iostream>
#include <string>

using namespace std;
int main()
{
    // inition string
    string s;
    string s1("hello");
    string s2 = s1;
    string s3 = "world";
    string s4(10,'c');


//    cin >> s;
//    cout << s << endl;

    cout << "getline test" << endl ;
//while(getline(cin, s2))
//    {
//        if (!s2.empty())
//        {
//            cout << "size of s2: " <<s2.size();
//        }
//
//    }

    cout << "getline test over" << endl ;
    cout << "foreach test....." << endl ;

    for(auto c: "abcdefg")
    {
        cout << c <<endl;
    }
    
    cout << "foreach test over"<< endl ;

    cout << s2;

    std::cout << "Hello world" << std::endl;
    return 0;
}

