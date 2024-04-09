#define ESC "\033["
namespace elsfk {
void moveCursor(int row, int column);
void hideCursor();
void showCursor();

void setForeGroundColor(int color);
void setBackGroundColor(int color);
void setForeGroundColor(int r, int g, int b);
void setBackGroundColor(int r, int g, int b);

void clear();
void reset();
}  // namespace elsfk