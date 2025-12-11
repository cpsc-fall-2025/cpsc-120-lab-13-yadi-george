#include <iostream>

int main() {
    int height{};
    std::cout << "Enter the height of the Christmas tree: ";
    std::cin >> height;

    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            std::cout << " ";
        }

        for (int k = 0; k < (2*i - 1); k++) {
            std::cout << "*";
        }
        std::cout << "\n";
    }

    for (int t = 0; t < 3; t++) {
        for (int l = 0; l < height - 2; l++) {
            std::cout << " ";
        }
        std::cout << "###\n";
    }
    return 0;
}
