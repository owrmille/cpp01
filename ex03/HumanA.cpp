/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:55 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:56 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon) {
    std::cout << "HumanA constructor was called." << std::endl;
};

HumanA::~HumanA() {
    std::cout << "HumanA destructor was called." << std::endl;
};

void HumanA::attack() const {
    std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}