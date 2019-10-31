#include <iostream>
#include <stack>

class MinStack {
private:
  std::stack<int> s1;
  std::stack<int> s2;

public:
  void push(int x) {
    s1.push(x);
    if (s2.empty() || x <= getMin())
      s2.push(x);
  }
  void pop() {
    if (s1.top() == getMin())
      s2.pop();
    s1.pop();
  }
  int top() { return s1.top(); }
  int getMin() { return s2.top(); }
};

class Solution {
public:
  void test() {}
};
