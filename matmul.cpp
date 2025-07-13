#include <vector>
#include <iostream>
#include <cassert>
#include <cmath>

using namespace std;

template <typename T>
void matmul_square(const vector<T>& a, const vector<T>& b, vector<T>& c){
/*
square matrix multiplications of row-ordered matrix of abritrary size, N. 
*/
    assert(a.size() == b.size());
    int N = sqrt(a.size());
    int i, j, k = 0;

    for(i=0; i<N; i++){
        for(j=0;j<N;j++){
            T acc{}; 
            for(k=0; k<N; k++){
                acc += a.at((i*N)+k) * b.at((k*N)+j);

            }
            c[(i*N)+j] = acc;
        }
    }
    return;
}

template <typename T>
void print_matrix(const vector<T>& mat){
    // check if matrix is square
    float dim = sqrt(static_cast<int>(mat.size()));
    float fractional;
    float f = std::modf(dim, &fractional);
    if (f != 0.0F){
        std::cerr << "Trying to print a non square matrix" << std::endl;
        return;
    } 

    // Print matrix  in a readable format to stdout
    int N = static_cast<int>(dim);
    int i = 0;
    cout << std::endl << std::endl;
    for(int i =0; i<mat.size(); i++){
        if (i%N == 0 && i != 0){
            std::cout << std::endl;
        }
        std::cout.width(8);
        std::cout << mat.at(i);
    }
    cout << std::endl << std::endl;
    // go to a new line every upon each row
}

template <typename T>
void element_wise_transform(vector<T>& a, T (*func)(T)){
    /*
    Performs a user-defined function on each element of a vector (or row-ordered matrix) and updates vector a
    */
   
   // function declaration checks that vector and function pointer are of the same datatype, T

    for(auto it = a.begin(); it < a.end(); it++){
        (*it) = func((*it));
    }
    return;
}

template <typename T>
T dot_prod(const vector<T>& a, const vector<T>& b){
    /*
    Returns dot product of either 2 vectors or 2 square matrices
    */
    assert(a.size() == b.size());
    T acc{};
    for(int i =0; i<a.size(); i++){
        acc += a.at(i) * b.at(i);
    }
    return acc;
}

template void matmul_square(const vector<int>& a, const vector<int>& b, vector<int>& c);
template void matmul_square(const vector<float>& a, const vector<float>& b, vector<float>& c);
template void matmul_square(const vector<uint8_t>& a, const vector<uint8_t>& b, vector<uint8_t>& c);
//template void matmul_square(const vector<unsigned char>& a, const vector<unsigned char>& b, vector<unsigned char>& c);
template void print_matrix(const vector<int>& mat);
template void print_matrix(const vector<float>& mat);
template void print_matrix(const vector<uint8_t>& mat);
// Element-wise transformation function
template void element_wise_transform(vector<int>& a, int (*func)(int));
template void element_wise_transform(vector<float>& a, float (*func)(float));
template void element_wise_transform(vector<uint8_t>& a, uint8_t (*func)(uint8_t));
// Dot product of 2 vectors
template int dot_prod(const vector<int>& a, const vector<int>& b);
template float dot_prod(const vector<float>& a, const vector<float>& b);
template uint8_t dot_prod(const vector<uint8_t>& a, const vector<uint8_t>& b);