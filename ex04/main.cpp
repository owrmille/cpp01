#include "StringReplacer.hpp"

int main() { 
	StringReplacer stringReplacer("tests/oneLine_rep", "hello", "bye");

	std::cout << "\n=== Testing one line replacement ===" << std::endl;
	stringReplacer.replaceString();

	std::cout << "\n=== Testing general cases ===" << std::endl;
	stringReplacer.setFilePath("tests/general_cases");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing empty file ===" << std::endl;
	stringReplacer.setFilePath("tests/empty");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing one line no replacement ===" << std::endl;
	stringReplacer.setFilePath("tests/oneLine_noRep");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing multi line no replacement ===" << std::endl;
	stringReplacer.setFilePath("tests/multiLine_noRep");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing non-existent file ===" << std::endl;
	stringReplacer.setFilePath("tests/non_existent_file");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing empty old string ===" << std::endl;
	stringReplacer.setFilePath("tests/general_cases");
	stringReplacer.setOldString("");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing overlapping replacements ===" << std::endl;
	stringReplacer.setFilePath("tests/overlapping");
	stringReplacer.setOldString("hello");
	stringReplacer.setNewString("hellohello");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing special characters ===" << std::endl;
	stringReplacer.setFilePath("tests/special_chars");
	stringReplacer.setOldString("hello");
	stringReplacer.setNewString("h€llö");
	stringReplacer.replaceString();

	std::cout << "\n=== Testing very long strings ===" << std::endl;
	stringReplacer.setFilePath("tests/long_strings");
	stringReplacer.setOldString("hello");
	stringReplacer.setNewString(std::string(1000, 'x'));
	stringReplacer.replaceString();

	return (0);
}