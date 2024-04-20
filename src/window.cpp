#include "window.h"

#include <iostream>

#include "draw.h"

namespace wd {

void renderTop(int width, int r, int c) {
  elsfk::moveCursor(r, c);
  std::cout << " ©°";
  for (int i = 0; i < width; i++) {
    std::cout << "©¤©¤";
  }
  std::cout << "©´";
}
void renderBottom(int width, int r, int c) {
  elsfk::moveCursor(r, c);
  std::cout << " ©¸";
  for (int i = 0; i < width; i++) {
    std::cout << "©¤©¤";
  }
  std::cout << "©¼";
}
void renderLeft(int height, int r, int c) {
  elsfk::moveCursor(r, c);
  for (int i = 0; i < height; i++) {
    elsfk::moveCursor(r + i, c);
    std::cout << " ©¦";
  }
}
void renderRight(int height, int r, int c) {
  elsfk::moveCursor(r, c);
  for (int i = 0; i < height; i++) {
    elsfk::moveCursor(r + i, c);
    std::cout << " ©¦";
  }
}
void render(int width, int height, int top, int left, std::string name) {
  left = left * 2 - 1;
  renderTop(width, top, left);
  renderBottom(width, top + height, left);
  renderLeft(height - 1, top + 1, left);
  renderRight(height - 1, top + 1, left + width * 2 + 1);
}
}  // namespace wd