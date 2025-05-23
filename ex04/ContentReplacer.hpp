#ifndef CONTENTREPLACER_HPP
#define CONTENTREPLACER_HPP

#include <iostream>
#include <string>

class ContentReplacer {
private:
	std::string filePath;
	std::string oldContent;
	std::string newContent;
public:
	ContentReplacer(const std::string& filePath, const std::string& oldContent, const std::string& newContent);
	~ContentReplacer();
	std::string getFilePath() const;
	std::string getOldContent() const;
	std::string getNewContent() const;
	void replaceContentInFile(const std::string& filePath, const std::string& oldContent, const std::string& newContent);
};

#endif