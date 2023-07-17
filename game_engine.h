#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include "controls.h"

typedef unsigned char byte_t;
typedef unsigned char level_t;
typedef unsigned char lines_t;
typedef unsigned char score_t;

typedef enum {
  I,
  O,
  S,
  Z,
  J,
  L
} piece_t;

typedef enum {
  UP,
  DOWN,
  LEFT,
  RIGHT
} piece_orientation_t;

typedef enum {
  NEW,
  PAUSED,
  PLAYING,
  FINISHED
} game_state_t;

class Game {
private:
  game_state_t state;

  piece_t piece;
  piece_orientation_t piece_orientation;
  byte_t piece_row;
  byte_t piece_col;

  level_t level;
  lines_t lines;
  score_t score;

  piece_t held_piece;
  piece_orientation_t held_piece_orientation;

  void rotateI(bool cw);
  void rotateO(bool cw);
  void rotateS(bool cw);
  void rotateZ(bool cw);
  void rotateJ(bool cw);
  void rotateL(bool cw);

  /* cw - true to clockwise, or false to counterclockwise */
  void rotatePiece(bool cw);
  void moveLeft();
  void moveRight();
  void drop();
  void pause();
  void resume();
  game_state_t getState();

public:
  void update(controls_t controls);
};

#endif // GAME_ENGINE_H
