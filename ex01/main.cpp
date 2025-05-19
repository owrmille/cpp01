#include "Zombie.hpp"

int main() {
    int N = 5;
    Zombie* zombie = zombieHorde(N, "Foo");
    std::cout << "--------------------------------" << std::endl;
    for (int i = 0; i < N; i++) {
        zombie[i].announce();
    }
    std::cout << "--------------------------------" << std::endl;
    delete[] zombie;
    return (0);
}