#include "solution.h"
#include <iostream>
#include <bits/stdc++.h>

std::vector<int> CPPLib::kthPeek(std::vector<int> &input, int k)
{    
  if ((input.size()<=k)||(input.size()==0))
  {
      return {-1};
  }
  std::vector<int> cmp;
  std::vector<int> cmp1;
  std::sort(input.begin(),input.end());
  //int target = input[k-1];
  for (unsigned i=k;i<input.size();i++)
  {
      cmp.push_back(input[i]);
  }
  sort(cmp.begin(), cmp.end(), std::greater<int>());
   for (auto i=0;i<k;i++)
   {
       cmp1.push_back(input[i]);
   }
  for (auto i=k-1;i>=0;i--)
  {
      cmp.insert(cmp.begin(),cmp1[i]);
  }
  return(cmp);
}