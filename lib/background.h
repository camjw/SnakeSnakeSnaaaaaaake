#ifndef BACKGROUND_H
#define BACKGROUND_H
#include <SDL2/SDL.h>
#include <SDL2/SDL_ttf.h>
#include <string>
#include "renderer.h"

class Background : public Renderer {
  public:
    Background(const Renderer &renderer, int width, int height, int stride);
    virtual void draw(int score, int highScore);
    virtual ~Background();

  private:
    void drawBorder();
    void drawBackground();
    void drawScore(int score);
    void drawTitle();
    void drawInstructions();
    void drawHighScore(int highScore);
    void renderText(const char* text, int x, int y, int w, int h);
    char const * getScoreChars(int score);
    int _width, _height, _stride;
    SDL_Color White = {255, 255, 255};
    TTF_Font* gameFont;
};

#endif
