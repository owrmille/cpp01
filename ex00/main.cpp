/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:06 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:07 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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