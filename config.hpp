#include <iostream>
#include <SFML/Graphics.hpp>
#include <ctime>

const int FRAME_WIDTH = 1500;
const int FRAME_HEIGHT = 720;

const int CELL_SIZE = 2;

const int INIT_X = (FRAME_WIDTH / (2 * CELL_SIZE)) - 50;
const int INIT_Y = (FRAME_HEIGHT / (2 * CELL_SIZE)) + 20;

const int WIDTH_CELL_NUMBER = FRAME_WIDTH / CELL_SIZE;
const int HEIGHT_CELL_NUMBER = FRAME_HEIGHT / CELL_SIZE;

const clock_t REST_TIME = 0;
const int SIMULTANEOUS_MOVES = 100000;

/*//RL
const int VARIABLES_COUNT = 2;
const sf::Color COLORS[VARIABLES_COUNT] = {sf::Color::White, sf::Color::Black};
const bool DIRECTIONS[VARIABLES_COUNT] = {true, false};//False : left, True : right

*/
//LLRR
const int VARIABLES_COUNT = 4;
const sf::Color COLORS[VARIABLES_COUNT] = {sf::Color::White, sf::Color::Green, sf::Color::Blue, sf::Color::Black};
const bool DIRECTIONS[VARIABLES_COUNT] = {false, false, true, true};//False : left, True : right
/*
//RRLLLRLLLRRR
const int VARIABLES_COUNT = 12;
const sf::Color COLORS[VARIABLES_COUNT] = {sf::Color::White, sf::Color::Red, sf::Color::Green, sf::Color::Cyan,
                                           sf::Color::Yellow, sf::Color::Magenta, sf::Color::Blue, sf::Color::Black,
                                           sf::Color(224, 135, 33), sf::Color(234, 53, 117), sf::Color(1, 66, 11),
                                           sf::Color(66, 11, 1)};
const bool DIRECTIONS[VARIABLES_COUNT] = {true, true, false, false, false, true, false, false,
                                          false, true, true, true};//False : left, True : right
/*
//LLRRRLRLRLLR
const int VARIABLES_COUNT = 12;
const sf::Color COLORS[VARIABLES_COUNT] = {sf::Color::White, sf::Color::Red, sf::Color::Green, sf::Color::Cyan,
                                           sf::Color::Yellow, sf::Color::Magenta, sf::Color::Blue, sf::Color::Black,
                                           sf::Color(224, 135, 33), sf::Color(234, 53, 117), sf::Color(1, 66, 11),
                                           sf::Color(66, 11, 1)};
const bool DIRECTIONS[VARIABLES_COUNT] = {false, false, true, true, true, false, true, false,
                                          true, false, false, true};//False : left, True : right

*/