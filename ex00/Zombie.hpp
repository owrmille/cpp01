/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:08:23 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:08:24 by iatopchu         ###   ########.fr       */
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
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif