#include <iostream>
#include <vector>
#include <algorithm>

/*
Complexity Analysis:
Time Complexity: O(NlogN)
Space Complexity: O(1)
*/
std::vector<int> sortedSquaresOne(std::vector<int>& A) {
  for(int i=0; i<A.size(); ++i) {
    A[i] = A[i] * A[i];
  }

  std::sort(A.begin(), A.end());
  return A;
}
/*
Complexity Analysis:
Time Complexity: O(N)
Space Complexity: O(N)
*/
std::vector<int> sortedSquaresTwo(std::vector<int>& A) {
  std::vector<int> result(A.size());
  int l = 0;
  int r = A.size() - 1;
  int p = A.size() - 1;

  while(l <= r) {
    int x = A[l] * A[l];
    int y = A[r] * A[r];

    if(x > y) {
      result[p] = x;
      ++l;
      --p;
    }
    else {
      result[p] = y;
      --r;
      --p;
    }
  }

  return result;
}

int main() {

  std::vector<int> example = {-7, -3, 2, 3, 11};
  std::cout << "Input: [";
  for(int i=0; i<example.size(); ++i) {
    std::cout << example[i];
    if(i + 1 != example.size()) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";

  std::vector<int> answer = sortedSquaresTwo(example);
  std::cout << "Output: [";
  for(int i=0; i<answer.size(); ++i) {
    std::cout << answer[i];
    if(i + 1 != answer.size()) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";

  return 0;
}
