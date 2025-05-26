/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:44 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:45 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0) {
        std::cout << "Invalid number of zombies." << std::endl;
        return (nullptr);
    }
    Zombie *zombieHorde = new Zombie[N];
    for (int i = 0; i < N; i++) {
        zombieHorde[i].setName(name);
    }
    return (zombieHorde);
}