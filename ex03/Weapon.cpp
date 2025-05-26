/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:09:13 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:09:14 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {};

Weapon::Weapon(std::string type) : type(type) {};

Weapon::~Weapon() {};

const std::string& Weapon::getType() const {
    return (this->type);
}

void Weapon::setType(std::string type) {
    this->type = type;
}