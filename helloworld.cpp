#include <iostream>

void frogy() {
    std::cout << "grape";
    std::cout << "additional code\n";
}

int add(int a, int b) {
    std::cout << a << std::endl;
    return a + b;
}

void hi() {
}

void banana() {
	std::cout << "banana";
}

int main() {
    std::cout << "Hello World!";
    hi();
    banana();
    frogy();
}
