#include <iostream>
#include <functional>

using namespace std;

void bar(function<void()>func){
  func();
  func();
  return;
}

int main(){
  int i = 0;
  for (i=0;i<10;i++){
    auto foo = [](int i){
      int j = i*i;
      cout << j << endl;
    };
    foo(i);
  }
  cout << i;

/*
  auto foo = [](){
    cout << "Hello World" << endl;
  };

  foo();
  bar(foo);
*/
  return 0;
}