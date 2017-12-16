
#ifndef LANGTON_S_ANT_ANT_H
#define LANGTON_S_ANT_ANT_H

#include "config.hpp"

class Ant {
private:
    int xPos, yPos, previousXPos, previousYPos, angle;//0 : top, 1 : right, 2 : bot, 3 : left
    bool alive;

    void moveForward();
    void goRight();
    void goLeft();
    void dies();
    void readAngle(int [WIDTH_CELL_NUMBER][HEIGHT_CELL_NUMBER]);
    int nextColor(int);
public:
    Ant(int, int);

    int getPreviousXPos();
    int getPreviousYPos();
    void move(int [WIDTH_CELL_NUMBER][HEIGHT_CELL_NUMBER]);
};


#endif //LANGTON_S_ANT_ANT_H
