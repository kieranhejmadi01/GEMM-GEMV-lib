#include <iostream>
#include <vector>


using namespace std;

int main(){

    vector<int> foo = {1,1,2,3,5,8,13};

    /*for (int var: foo){
        cout << var << endl;
        auto bar = [foo](){
            cout << foo.back() << "is the back element" << endl;
        };
        bar();
    }*/

    cout << foo.front();

    foo.push_back(10);
    foo.pop_back();
    cout << foo.back();

    for (int i = 0; i < foo.size(); i++){
        cout << foo.at(i) << endl;
    }




    return 0;
}