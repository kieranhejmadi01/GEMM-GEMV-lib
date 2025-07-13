#pragma once
#include <vector>
#include <cassert>

using namespace std;

template <typename T>
void matmul_square(const vector<T>& a, const vector<T>& b, vector<T>& c);

template <typename T>
void print_matrix(const vector<T>& mat);

template <typename T>
void element_wise_transform(vector<T>& a, T (*func)(T));

template <typename T>
T dot_prod(const vector<T>& a, const vector<T>& b);