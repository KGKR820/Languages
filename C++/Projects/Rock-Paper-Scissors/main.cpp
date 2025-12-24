#include <iostream>
#include <cstdlib>
#include <ctime>

int result(char user) {
    char Comp[3] = {'r', 'p', 's'};
    int randIndex = std::rand() % 3;
    char comp = Comp[randIndex];
    std::cout << "Comp: " << comp << '\n';

    if (user == comp) {
        return 2; // Draw
    }
    if ((user == 'r' && comp == 's') ||
        (user == 'p' && comp == 'r') ||
        (user == 's' && comp == 'p')) {
        return 1; // User wins
    }
    return 0; // User loses
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr))); // Seed RNG
    char user;
    std::cout << "Choose (r/p/s)\nUser: ";
    std::cin >> user;
    int res = result(user);
    if (res == 1) {
        std::cout << "YOU WIN";
    } else if (res == 0) {
        std::cout << "YOU LOSE";
    } else {
        std::cout << "Draw";
    }
    return 0;
}