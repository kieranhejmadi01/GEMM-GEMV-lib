#include <string>
#include <iostream>

using namespace std;

struct Var{
    int a;
    string name;
};

int bar(int &x, int &y){
    // since the intentifier 
    return (x * y);
}

int foo(int array[5], struct Var b){
    int i = 0, sum =0;
    for (i=0; i<5; ++i){
        sum += array[i];
    }
    cout <<  "\nVar value =  " << b.name << endl;

    return sum;
}

int foo_ref(struct Var& b){
    b.name = "Evil Kieran";
    return 0;
}

int foo_value(struct Var b){
    b.name = "Evil Kieran";
    return 0;
}

void overload_calc(int a, int b){
    cout << a * b + 10 << endl;
}

void overload_calc(float a, float b){
    cout << a * b + 10.0F << endl;
}



int main (){
    int x = 3, y = 5;
    Var my_var = {10, "Kieran"};
   

    Var my_var_two = {10, "Kieran"};

    cout << my_var.name << endl;
    cout << my_var_two.name << endl;
    foo_ref(my_var_two);
    foo_value(my_var);

    // since we passed by value my_var the name member is not updated.
    cout << my_var.name << endl;
    cout << my_var_two.name << endl;

    overload_calc(5,5);
    overload_calc(5.0F,3.5F);
    
/*
    int* ptrx  = &x;
    int* ptry  = &y;
    int arr[5] = {1,2,3,5,6};
    cout << "sum = " << foo(arr, my_var ) << endl;

    // can pass in the identifier rather than the value (not quite a pointer)
    cout << bar(x,y);
*/
    return 0;
}