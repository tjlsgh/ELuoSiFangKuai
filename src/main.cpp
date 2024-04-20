#include <chrono>
#include <iostream>
#include <ostream>
#include <thread>

#include "draw.h"
#include "utils.h"
#include "window.h"

using namespace std::chrono_literals;

void init() {
  elsfk::hideCursor();
  elsfk::clear();
  wd::render(9, 6, 1, 1, "Now");
  wd::render(12, 22, 1, 10, "Ground");
  wd::render(9, 16, 7, 1, "Nexts");
  wd::render(8, 4, 19, 22, "Info");
  wd::render(8, 18, 1, 22, "Other");
}

void updateFrame() {
  elsfk::moveCursor(1, 1);
  std::cout << "fps: " << utils::fps();
}

void draw(int& i) {
  // elsfk::moveCursor(i++ % 20, 10);
  // elsfk::setBackGroundColor(214);
  // std::cout << "  ";
  // elsfk::reset();
  std::cout << std::flush;
}

void loop() {
  int i = 1;
  while (true) {
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