#include "utils.h"

#include <chrono>
using namespace std::chrono_literals;

namespace utils {
int fps() {
  static auto start = std::chrono::steady_clock::now();
  static int frame = 0;
  static int fps;

  frame++;
  auto end = std::chrono::steady_clock::now();
  if (end - start > 1s) {
    start = end;
    fps = frame;
    frame = 0;
  }

  return fps;
}
}  // namespace utils