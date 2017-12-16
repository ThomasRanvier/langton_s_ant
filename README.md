# Langton's ant

This is a c++ implementation of the Langtons's ant.

You can change the main settings in the config file : cells and window size, number of simultaneous movements, etc...

You can change the rules in the config file :
- a const int VARIABLES_COUNT, it will be the count of the rules.
- a const sf::Color COLORS[VARIABLES_COUNT], an array of SFML colors, one for each rule.
- a const bool DIRECTIONS[VARIABLES_COUNT], an array of booleans. They symbolize the direction in which the ant will go when it passes on the corresponding color : false for left, and true for right.
