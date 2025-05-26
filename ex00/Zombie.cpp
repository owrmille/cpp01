/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:19 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:20 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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