#include <iostream>
#include <list>


using namespace std;

int main(){
    list<string> cars = {"Volvo", "BMW", "Ford", "Mazda"};

    cout << cars.front();

    return 0;
}