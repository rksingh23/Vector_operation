#include "src/lib/solution.h"
#include <iostream>
#include<vector>

int main() {
  CPPLib s;
  std::vector<int> input{};
  int k=6;
  
  for(auto n:s.kthPeek(input,k))
  {
    std::cout<<n<<std::endl;
  }


  return 0;
}