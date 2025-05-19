#include "Zombie.hpp"

int main() {
    Zombie* zombie;
    zombie = newZombie("NewZombieFoo");
    zombie->announce();
    delete zombie;
    std::cout << "--------------------------------" << std::endl;
    randomChump("RandomChumpFoo");
    return (0);
}