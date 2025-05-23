#include "ContentReplacer.hpp"

ContentReplacer::ContentReplacer(const std::string& filePath, const std::string& oldContent, const std::string& newContent) 
	: filePath(filePath), oldContent(oldContent), newContent(newContent) {
	std::cout << "ContentReplacer constructor was called." << std::endl;
};

ContentReplacer::~ContentReplacer() {
	std::cout << "ContentReplacer destructor was called." << std::endl;
};

std::string ContentReplacer::getFilePath() const {
	return filePath;
};

std::string ContentReplacer::getOldContent() const {
	return oldContent;
};

std::string ContentReplacer::getNewContent() const {
	return newContent;
};

void ContentReplacer::replaceContentFile(const std::string& filePath, const std::string& oldContent, const std::string& newContent) {
	
}