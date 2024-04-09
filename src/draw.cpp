#include "draw.h"

#include <iostream>
#include <string>

void elsfk::moveCursor(int row, int column) {
  std::cout << ESC << row << ";" << column << "H";
}
void elsfk::hideCursor() { std::cout << ESC << "?25l"; }
void elsfk::showCursor() { std::cout << ESC << "?25l"; }

void elsfk::setForeGroundColor(int color) {
  std::cout << ESC << 38 << ";" << 5 << ";" << color << "m";
}
void elsfk::setBackGroundColor(int color) {
  std::cout << ESC << 48 << ";" << 5 << ";" << color << "m";
}
void elsfk::setForeGroundColor(int r, int g, int b) {
  std::cout << ESC << 38 << ";" << 2 << ";" << r << ";" << g << ";"
            << "b"
            << "m";
}
void elsfk::setBackGroundColor(int r, int g, int b) {
  std::cout << ESC << 48 << ";" << 2 << ";" << r << ";" << g << ";"
            << "b"
            << "m";
}

void elsfk::clear() { std::cout << ESC << "2J"; }

void elsfk::reset() { std::cout << ESC << "0m"; }