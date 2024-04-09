#include <draw.h>

#include <chrono>
#include <iostream>
#include <ostream>
#include <thread>

using namespace std::chrono_literals;

int main() {
  elsfk::hideCursor();
  elsfk::reset();
  elsfk::clear();
  int i = 1;
  while (true) {
    elsfk::clear();
    elsfk::moveCursor(i++, 10);
    elsfk::setBackGroundColor(214);

    std::cout << "  ";
    elsfk::reset();
    std::cout << std::flush;

    std::this_thread::sleep_for(500ms);
  }
  return 0;
}