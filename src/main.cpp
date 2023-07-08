#include "../target/cxxbridge/cpprust/src/lib.rs.h"
#include <iostream>

int main(){
  std::cout << "starting from C++\n";
  rust_from_cpp();
  std::cout << "finishing with C++\n";
  return 0;
}
