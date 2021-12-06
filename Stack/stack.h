#ifndef STACK_H_
#define STACK_H_

#include <cstdint>
#include "ostream"

#include "stack.h"

class Stack {
 public:
  Stack();

  void Push(int value);

  size_t Size() const;

  int Top() const;

  int Pop();

  friend std::ostream operator<<(std::ostream& stream, const Stack& stack);

  std::string ToString() const;

 private:
  void Enlarge();

  size_t size_{0};
  size_t capacity_;
  int* values_;
};

#endif //STACK_H_
