#ifndef MY_EXCEPTION_H
#define MY_EXCEPTION_H
#include <iostream>
#include <exception>
#include <string>
#include <bitset>
class my_exception: public std::exception
{
    const char* what_arg;
public:
  my_exception(const char* what_arg) noexcept {
    this->what_arg = what_arg;
  }
  ~my_exception() noexcept {};

  const char* what() const noexcept {
    return this->what_arg;
  }
};

#endif // MY_EXCEPTION_H
