#include <iostream>

void frogy() {
    std::cout << "frogy";
    std::cout << "additional code\n";
}

int add(int a, int b) {
    std::cout << a << std::endl;
    return a + b;
}

void hi() {
}

void banana() {
	std::cout << "bananananana";
}

int main() {
    std::cout << "Hello World!";
    hi();
    banana();
    frogy();
}
