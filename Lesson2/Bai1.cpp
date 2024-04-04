#include <iostream>

using namespace std;

int main(){
    int IsHelloWorld;
    cin >> IsHelloWorld;
    if (IsHelloWorld != 0)
    {
        cout << "Hello world\n";
        cout << "This is value =" << IsHelloWorld << endl;
    }
    else
    {
        cout << "Nothing....\n";
        cout << "This is value =" << IsHelloWorld << endl;
    }
    return 0;
}
