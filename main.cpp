#include <vector>
#include <iostream>
#include "matmul.hpp"

using namespace std;


int multiply_by_two(int a){
    return (a*2);
}

int main(){

/*
    vector<int> a(144,3);
    vector<int> b(144,3);
    vector<int> c(144,3);

    // floating point test
    vector<float> a_f(144,3.4F);
    vector<float> b_f(144,3.5F);
    vector<float> c_f(144,0.0);
    // 8-bit integer test
    vector<uint8_t> a_8(144,3);
    vector<uint8_t> b_8(144,3);
    vector<uint8_t> c_8(144,3);


    matmul_square(a_f, b_f, c_f);
    matmul_square(a, b, c);
    matmul_square(a_8, b_8, c_8);

    print_matrix(c);
    print_matrix(c_f);
    print_matrix(c_8);
*/
     // Function pointer
    int (*pfunc)(int) = multiply_by_two;

    vector<int> a(144,5);
    vector<int> b(144,8);
    element_wise_transform(a, pfunc);
    print_matrix(a);
    std::cout << dot_prod(a, b);
    


    return 0;
}