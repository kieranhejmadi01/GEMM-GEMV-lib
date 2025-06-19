#include <iostream>
#include <functional>

using namespace std;


int main(){
  /*int i, j = 0;
  for (i=0; i<10; i++){
    auto show = [i]() {
        cout << "Number: " << i << "\n";
      };
      show();
    for (j=0;j<10; j++){
    }
  }*/

  int k = 42;
  cout << k << endl;
  auto foo = [&k](){
    k = 50;
  };
  foo();
  cout << k << endl;



  return 0;
}