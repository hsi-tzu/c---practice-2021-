#include <iostream> 
#include <string> 
#include <stack>
using namespace std;
int main() {
  std::stack<int> myStack;  // 建立堆疊

  for (int i = 0; i < 5; ++i) {
    myStack.push(i);  // 放入元素
  }

  // 傳回最上方的元素
  std::cout << "Top: " << myStack.top() << std::endl;

  // 移除最上方的元素
  myStack.pop();

  // 傳回最上方的元素
  std::cout << "Top: " << myStack.top() << std::endl;

  return 0;
}