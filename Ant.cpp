#include "Ant.h"

Ant::Ant(int x, int y) {
    this->angle = 0;
    this->xPos = this->previousXPos = x;
    this->yPos = this->previousYPos = y;
    this->alive = true;
}

void Ant::move(int map[WIDTH_CELL_NUMBER][HEIGHT_CELL_NUMBER]) {
    if (this->alive) {
        map[this->xPos][this->yPos] = nextColor(map[this->xPos][this->yPos]);
        this->previousXPos = this->xPos;
        this->previousYPos = this->yPos;
        this->moveForward();
        this->readAngle(map);
    }
}

void Ant::readAngle(int map[WIDTH_CELL_NUMBER][HEIGHT_CELL_NUMBER]) {
    if (this->alive) {
        DIRECTIONS[map[this->xPos][this->yPos]] ? this->goRight() : this->goLeft();
    }
}

void Ant::dies() {
    this->alive = false;
}

void Ant::moveForward() {
    switch (this->angle) {
        case 0 :
            if (this->yPos <= 0) {
                this->dies();
            } else {
                this->yPos--;
            }
            break;
        case 1 :
            if (this->xPos >= WIDTH_CELL_NUMBER - 1) {
                this->dies();
            } else {
                this->xPos++;
            }
            break;
        case 2 :
            if (this->yPos >= HEIGHT_CELL_NUMBER - 1) {
                this->dies();
            } else {
                this->yPos++;
            }
            break;
        case 3 :
            if (this->xPos <= 0) {
                this->dies();
            } else {
                this->xPos--;
            }
            break;
    }
}

void Ant::goRight() {
    this->angle = this->angle + 1 > 3 ? 0 : this->angle + 1;
}

void Ant::goLeft() {
    this->angle = this->angle - 1 < 0 ? 3 : this->angle - 1;
}

int Ant::nextColor(int index) {
    return index >= VARIABLES_COUNT - 1 ? 0 : ++index;
}
