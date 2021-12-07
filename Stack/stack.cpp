#include <algorithm>
#include <cstdint>

#include "stack.h"
size_t Stack::Size() const {
  return size_;
}

Stack::Stack() : capacity_(16), values_(new int[capacity_]) {}

void Stack::Push(int value) {
  if (size_ == capacity_) {
    Enlarge();
  }
  values_[size_] = value;
  size_++;
}

int Stack::Top() const {
  return values_[size_ - 1];
}
void Stack::Enlarge() {
  int new_capacity = capacity_ << 1;
  int* new_values = new int[new_capacity << 1];
  std::copy(values_, values_ + capacity_, new_values);
  delete[] values_;
  values_ = new_values;
  capacity_ = new_capacity;
}

int Stack::Pop() {
  --size_;
  return values_[size_];
}

std::string Stack::ToString() const {
  return std::string();
}
