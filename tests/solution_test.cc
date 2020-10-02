#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>


TEST(Q8_Student, TEST_with_input_stream) {
  CPPLib object1;
  std::vector<int> vect{637,231,123,69,43,900,10,7,21,99,0,500} ;
  int k=6;
  std::vector<int> vect1{0,7,10,21,43,69,900,637,500,231,123,99};

  std::vector<int> cmp;
  for (auto n:object1.kthPeek(vect,k))
  {
    cmp.push_back(n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

//Negative Tests

TEST(Q8_Student, HandlesCornerCase) {
  CPPLib object1;
  std::vector<int> vect{637,7,0};
  int k=6;
  std::vector<int> vect1{-1};

  std::vector<int> cmp;
  for (auto n:object1.kthPeek(vect,k))
  {
    cmp.push_back(n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}

TEST(Q8_Student, HandlesEmptyVector) {
  CPPLib object1;
  std::vector<int> vect{};
  int k=6;
  std::vector<int> vect1{-1};

  std::vector<int> cmp;
  for (auto n:object1.kthPeek(vect,k))
  {
    cmp.push_back(n);
  }
  ASSERT_EQ(cmp.size(), vect1.size()) << "Vectors x and y are of unequal length";
  for (int unsigned i = 0; i < vect1.size(); ++i){
    EXPECT_EQ(cmp[i],vect1[i]);
  } 
}