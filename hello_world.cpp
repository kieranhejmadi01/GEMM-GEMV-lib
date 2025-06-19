#include <iostream>
#include <string>

using namespace std;
/*
struct MyStruct{
    int a;
    string b;
} ;
*/
enum priority{
    LOW = 20,
    MEDIUM = 0,
    HIGH = -1
};

int main(){
    string foo = "pizza";
    string &meal = foo;
    cout << "\n" << &meal << "\n" << &foo; 

    string bar = "hamburger";
    string* ptr = &bar;
    cout << "\nAddress of bar = " << &bar << "\n ptr =" << &ptr;
    // both have the same address (i..e rather than a pointer)

/*
    enum priority test = HIGH;
    switch (test){
        case 0:
            cout << "\nYou are medium priority process\n";
            break;
        case 20:
            cout << "low prority\n";
            break;
        case -1:
            cout << "\nhigh priority\n";
            break;
        break;
    }
*/

    return 0;
}