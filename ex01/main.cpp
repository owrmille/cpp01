/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:32 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:33 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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