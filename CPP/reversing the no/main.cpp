#include <iostream>

using namespace std;

int main()
{
    int num, n , rev=0 , r;
    cout << "Enter the number: ";
    cin >> num;
    n == num;
    while(num != 0){
        r = num % 10;
        num = num / 10;
        rev = (rev * 10) + r;
        }
    cout << "The Reverse of the number is " << rev << endl;
    return 0;
}
