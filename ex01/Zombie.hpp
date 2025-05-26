/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:40 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:41 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <new>
#include <string>

class Zombie {
private:
    std::string name;
public:
    Zombie();
    Zombie(std::string name);
    ~Zombie();
    void announce() const;
    void setName(std::string name);
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);
Zombie* zombieHorde(int N, std::string name);

#endif