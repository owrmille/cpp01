/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:09:02 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:09:03 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {
    std::cout << "HumanB constructor was called." << std::endl;
};

HumanB::~HumanB() {
    std::cout << "HumanB destructor was called." << std::endl;
}

void HumanB::attack() const {
    if (weapon) {
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has absolutely no weapon to attack with!" << std::endl;
    }
}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;
}