/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:09:34 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:09:35 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRINGREPLACER_HPP
#define STRINGREPLACER_HPP

#include <fstream>
#include <iostream>
#include <string>

class StringReplacer {
private:
	std::string filePath;
	std::string oldString;
	std::string newString;
public:
	StringReplacer(const std::string& filePath, const std::string& oldString, const std::string& newString);
	~StringReplacer();
	std::string getFilePath() const;
	std::string getOldString() const;
	std::string getNewString() const;
	void setFilePath(const std::string& filePath);
	void setOldString(const std::string& oldString);
	void setNewString(const std::string& newString);
	void replaceString();
};

#endif