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
	std::string oldString = getOldString();
	std::string newString = getNewString();

	std::string newFilePath = filePath + ".replace";

	std::ifstream infile(filePath.c_str());
	if (!infile.is_open()) {
		std::cerr << "Error opening file: " << filePath << std::endl;
		return;
	}

	std::ofstream outfile(newFilePath.c_str());
	if (!outfile.is_open()) {
		std::cerr << "Error opening file: " << newFilePath << std::endl;
		return;
	}

	std::string fileContent;
	std::string newFileContent;
	std::string line;
	while (std::getline(infile, line)) {
		fileContent += line + "\n";
	}
	infile.close();

	size_t posContent = 0;
	size_t posString = 0;
	if (fileContent.find(oldString, posString) != std::string::npos) {
		while (posString != std::string::npos) {
			posString = fileContent.find(oldString, posString);
			if (posString != std::string::npos) {
				newFileContent += fileContent.substr(posContent, posString);
				newFileContent += newString;
				posString += oldString.size();
				posContent = posString;

			}
		}
		newFileContent += fileContent.substr(posContent);
	} else {
		newFileContent = fileContent;
	}
	outfile << newFileContent;
	outfile.close();
}