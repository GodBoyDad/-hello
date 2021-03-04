#include <iostream>
using namespace std;

string* foo() {
    string* hello = 0;
    hello = new string("Hello World!");
    return hello;
}

int main()
{
    string* hello = foo();
    cout << *hello << endl;

    delete hello;

    return 0;
}