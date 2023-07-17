#include "game_engine.h"

void Game::rotateI(bool cw) {
}

void Game::rotateO(bool cw) {
}

void Game::rotateS(bool cw) {
}

void Game::rotateZ(bool cw) {
}

void Game::rotateJ(bool cw) {
}

void Game::rotateL(bool cw) {
}

void Game::rotatePiece(bool cw) {
  switch(piece) {
    case I:
      rotateI(cw);
      break;
    case O:
      rotateO(cw);
      break;
    case S:
      rotateS(cw);
      break;
    case Z:
      rotateZ(cw);
      break;
    case J:
      rotateJ(cw);
      break;
    case L:
      rotateL(cw);
      break;
  }
}

void Game::moveLeft() {
}

void Game::moveRight() {
}

void Game::drop() {
}

void Game::pause() {
}

void Game::resume() {
}

game_state_t Game::getState() {
}
