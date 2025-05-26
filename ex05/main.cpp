/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:09:54 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:09:55 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main() { 
	Harl harl;
	std::cout << "--------------------------------" << std::endl;
	harl.complain("DEBUG");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("INFO");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("WARNING");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("ERROR");
	std::cout << "--------------------------------" << std::endl;
	harl.complain("OTHER");
	std::cout << "--------------------------------" << std::endl;
	return (0);
}