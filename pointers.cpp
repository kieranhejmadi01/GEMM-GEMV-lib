#include <iostream>
#include <string>


using namespace std;

int main(){
    
    string foo = "Hello World";
    string &foo_alias = foo;
    string* pfoo = &foo;

    cout << "-----------foo  ------------\n" << endl;
    cout << "foo = " << foo << endl;
    cout << "&foo = " << &foo << endl;

    cout << "-----------foo alias ------------\n" << endl;
    cout << "foo_alias = " << foo_alias << endl;
    cout << "&foo_alias = " << &foo_alias << endl;

    cout << "-----------pointer foo (pfoo) ------------\n" << endl;
    cout << "pfoo = " << pfoo << endl;
    // a pointer has its own address
    cout << "&pfoo = " << &pfoo << endl;
    cout << "*pfoo = " << *pfoo << endl;

    return 0;
}