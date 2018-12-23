#ifndef SNAKE_H
#define SNAKE_H
#include <vector>
#include <deque>
#include "window.h"

class Snake : public Window {
  public:
    Snake(const Window &window, int w, int h, int x, int y, int r, int g, int b, int a);
    virtual void draw();
    virtual void move();
    virtual void pollEvents(SDL_Event &event);
    std::vector<int> getLocation();
    std::deque<std::vector<int>> getLocationHistory();
    enum directions { UP, DOWN, LEFT, RIGHT };
    virtual void grow();

  private:
    virtual void updateLocationHistory();
    virtual void updateDirection(directions dir);
    std::deque<std::vector<int>> locationHistory;
    directions currentDir;
    bool acceptingMove = true;
    int _currentLength = 4;
    int _w, _h;
    int _x, _y;
    int _dx, _dy;
    int _r, _g, _b, _a;
};

#endif
