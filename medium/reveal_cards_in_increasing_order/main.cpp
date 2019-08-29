#include <iostream>
#include <vector>
#include <deque>

std::vector<int> deckRevealedIncreasing(std::vector<int>& deck) {
  sort(deck.begin(), deck.end());
  std::vector<int> answer;
  std::deque<int> temp;
  for(int i=deck.size() - 1; i >= 0; --i) {
      if(!temp.empty()) {
          temp.push_front(temp.back());
          temp.pop_back();
      }
      temp.push_front(deck[i]);
  }

  for(int i=0; i<temp.size(); i++) {
      answer.push_back(temp[i]);
  }
  return answer;
}

int main() {
  std::vector<int> example = {17, 13, 11, 2, 3, 5, 7};
  std::cout << "Arranging: [";
  for(int i=0; i<example.size(); i++) {
    std::cout << example[i];
    if(i + 1 != example.size()) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";
  std::vector<int> answer = deckRevealedIncreasing(example);
  std::cout << "[";
  for(int i=0; i<answer.size(); i++) {
    std::cout << answer[i];
    if(i + 1 != answer.size()) {
      std::cout << ", ";
    }
  }
  std::cout << "]\n";
  return 0;
}
