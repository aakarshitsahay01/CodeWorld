#include <iostream>

using namespace std;

int main()
{
    string str;
    cout << "May  I know your name ?";
    getline(cin,str);
    cout << "Hello Mr. "<<str<<endl;
    return 0;
}
