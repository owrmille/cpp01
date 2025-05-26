/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   StringReplacer.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iatopchu <iatopchu@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 15:09:31 by iatopchu          #+#    #+#             */
/*   Updated: 2025/05/26 15:09:32 by iatopchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "StringReplacer.hpp"

StringReplacer::StringReplacer(const std::string& filePath, const std::string& oldString, const std::string& newString) 
	: filePath(filePath), oldString(oldString), newString(newString) {
	std::cout << "StringReplacer constructor was called." << std::endl;
};

StringReplacer::~StringReplacer() {
	std::cout << "StringReplacer destructor was called." << std::endl;
};

std::string StringReplacer::getFilePath() const {
	return filePath;
};

std::string StringReplacer::getOldString() const {
	return oldString;
};

std::string StringReplacer::getNewString() const {
	return newString;
};

void StringReplacer::setFilePath(const std::string& filePath) {
	this->filePath = filePath;
}

void StringReplacer::setOldString(const std::string& oldString) {
	this->oldString = oldString;
}

void StringReplacer::setNewString(const std::string& newString) {
	this->newString = newString;
}

void StringReplacer::replaceString() {
	std::string filePath = getFilePath();
	std::string newFilePath = filePath + ".replace";

	std::string oldString = getOldString();
	std::string newString = getNewString();

	// check for empty string
	if (oldString.empty()) {
		std::cerr << "Error: old string cannot be empty" << std::endl;
		return;
	}

	// check if input file exists
	std::ifstream checkFile(filePath.c_str());
	if (!checkFile.good()) {
		std::cerr << "Error: file does not exist or cannot be accessed: " << filePath << std::endl;
		return;
	}
	checkFile.close();


	std::ifstream infile(filePath.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error: problem with opening input file: " << filePath << std::endl;
		return;
	}

	// check if input file is empty
	infile.seekg(0, std::ios::end);
	if (infile.tellg() == 0) {
		std::cerr << "Error: input file is empty" << std::endl;
		infile.close();
		return;
	}
	infile.seekg(0, std::ios::beg);

	// try to open output file
	std::ofstream outfile(newFilePath.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error: problem with opening output file: " << newFilePath << std::endl;
		infile.close();
		return;
	}

	try {
		std::string fileContent;
		std::string newFileContent;
		std::string line;
		bool firstLine = true;
		while (std::getline(infile, line)) {
			if (!firstLine) {
				fileContent += "\n";
			}
			fileContent += line;
			firstLine = false;
		}
		infile.close();

		size_t posContent = 0;
		size_t posString = 0;
		while ((posString = fileContent.find(oldString, posString)) != std::string::npos) {
			newFileContent += fileContent.substr(posContent, posString - posContent);
			newFileContent += newString;
			posString += oldString.length();
			posContent = posString;
		}
		newFileContent += fileContent.substr(posContent);
		
		if (!outfile.good()) {
			throw std::ios_base::failure("Error: problem with writing to output file");
		}
		outfile << newFileContent;
		outfile.close();
	} catch (const std::exception& e) {
		std::cerr << "Error: problem during string replacement: " << e.what() << std::endl;
		infile.close();
		outfile.close();
		return;
	}
}