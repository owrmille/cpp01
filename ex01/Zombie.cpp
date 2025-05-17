#include "Zombie.hpp"

Zombie::Zombie() {
    this->name = "Default";
    std::cout << "Default zombie was created." << std::endl;
};

Zombie::Zombie(std::string name) {
    this->name = name;
    std::cout << "Zombie " << name << " was created." << std::endl;
};

Zombie::~Zombie() {
    std::cout << "Zombie " << name << " was destroyed." << std::endl;
};

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName(std::string name) {
    this->name = name;
}