#include "Ant.h"

void sleep(clock_t ms) {
    clock_t end(clock() + 1000 * ms);
    while (clock() <= end);
}

int main() {
    sf::RenderWindow window(sf::VideoMode(FRAME_WIDTH, FRAME_HEIGHT), "Langton's ant");

    sf::RectangleShape background(sf::Vector2f(FRAME_WIDTH, FRAME_HEIGHT));
    background.setFillColor(sf::Color::White);

    int map[WIDTH_CELL_NUMBER][HEIGHT_CELL_NUMBER] = {0};

    Ant ant(INIT_X, INIT_Y);

    while (window.isOpen()) {
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        for (int i(0); i < SIMULTANEOUS_MOVES; i++) {
            ant.move(map);
        }

        window.clear();
        window.draw(background);

        for (int i = 0; i < WIDTH_CELL_NUMBER; i++) {
            for (int j = 0; j < HEIGHT_CELL_NUMBER; j++) {
                if (map[i][j] > 0) {
                    sf::RectangleShape cell(sf::Vector2f(CELL_SIZE, CELL_SIZE));
                    cell.setFillColor(COLORS[map[i][j]]);
                    cell.setPosition(i * CELL_SIZE, j * CELL_SIZE);
                    window.draw(cell);
                }
            }
        }

        window.display();
        sleep(REST_TIME);
    }
    return 0;
}