#include "solution.h"
#include "util.h"
#include <unordered_set>
#include <numeric>
#include <iterator>
#include <unordered_map>
#include <queue>
#include <string>
#include <sstream>
#include <algorithm>
using namespace sol929;
using namespace std;

/*takeaways
  - exhaust all permutations to find the max time
*/
string Solution::maxTime(vector<int> &A)
{
  string time;
  for (auto i = 0; i < 4; i++)
    for (auto j = 0; j < 4; j++)
      for (auto k = 0; k < 4; k++)
      {
        /* exclude the cases where the same
           positions are picked
        */
        if (i == j || j == k || i == k)
          continue;
        /* l has no choice but to pick the leftover position
           if i = 0, j =1, k=2, then l has to be 3 for example
        */
        auto l = 6 - i - j - k;
        string hour = to_string(A[i]) + to_string(A[j]);
        string minute = to_string(A[k]) + to_string(A[l]);

        if (hour > "23" || minute > "59")
          continue;
        time = max(time, hour + ":" + minute);
      }

  return time;
}