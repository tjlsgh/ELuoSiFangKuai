#include <chrono>
#include <iostream>
#include <ostream>
#include <thread>

#include "draw.h"
#include "utils.h"

using namespace std::chrono_literals;

void init() { elsfk::hideCursor(); }

void updateFrame() {
  elsfk::moveCursor(1, 1);
  std::cout << "FPS: " << utils::fps();
}

void draw(int& i) {
  elsfk::moveCursor(i++ % 20, 10);
  elsfk::setBackGroundColor(214);
  std::cout << "  ";
  elsfk::reset();
  std::cout << std::flush;
}

void loop() {
  int i = 1;
  while (true) {
    elsfk::clear();
    updateFrame();
    draw(i);
    std::this_thread::sleep_for(100ms);
  }
}

void exit() {}

int main() {
  init();
  loop();
  exit();
  return 0;
}