#include <iostream>
#include <vector>
#include <string>
#include <tuple>
#include <unordered_map>
#include "solution.h"
#include "util.h"

using namespace std;
using namespace sol929;

/*
Input: [1,2,3,4]
Output: "23:41"
*/
tuple<vector<int>, string>
testFixture1()
{
  auto A = vector<int>{1, 2, 3, 4};
  return make_tuple(A, "23:41");
}

/*
Input: [5,5,5,5]
Output: ""
*/
tuple<vector<int>, string>
testFixture2()
{
  auto A = vector<int>{5, 5, 5, 5};
  return make_tuple(A, "");
}

void test1()
{
  auto f = testFixture1();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.maxTime(get<0>(f)) << endl;
}

void test2()
{
  auto f = testFixture2();
  Solution sol;
  cout << "Expect to see " << get<1>(f)
       << ": " << sol.maxTime(get<0>(f)) << endl;
}

main()
{
  test1();
  test2();
  return 0;
}