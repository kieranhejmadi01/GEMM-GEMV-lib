#include <iostream>
#include <limits>

int globalvar = 0;
using namespace std;


void foo(){
    int localvar = 42;
    return;
}

int factorial_rec(int x){
    if(x == 0){
        return 0;
    } else if(x == 1)
    {
        return 1;
    }
    else{
        return x * factorial_rec(x-1);
    }
    
}

int main(){
    globalvar++;
    foo();
    cout << factorial_rec();
    return 0;
}