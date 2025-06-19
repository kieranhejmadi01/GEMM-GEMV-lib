#include <iostream>
#include <string>

using namespace std;

int test_age();
void validate_input();

void validate_input(){

    int val;
    while (!(cin >> val)){
        cout << "Enter a valid number " << endl;
        cin.clear();
        cin.ignore(1000,'\n');

    }
}

void do_while(){
    int foo;
    do {
        cin >> foo;
        cin.clear();
        cin.ignore(100,'\n');
    } while (foo < 0 || foo > 18);
    return;
}


int main(){
    validate_input();
    do_while();
    return 0;
}

int test_age(){
    int age;
    cin >> age;

    try {
        if (age > 18){
        cout << "you are able to drive" << endl;
    } else {
        throw 42;
        }
    }
    catch(string val){
        cout << "String exception :/" << endl;
    }
    catch(...){
        cout << "Unknown exception :/" << endl;
    }

    return 0;
}