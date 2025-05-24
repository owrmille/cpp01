#include "StringReplacer.hpp"

int main() { 

	StringReplacer stringReplacer("easy", "hello", "bye");
	stringReplacer.replaceString();

	stringReplacer.setFilePath("tests/empty");
	stringReplacer.replaceString();

	stringReplacer.setFilePath("tests/general_cases");
	stringReplacer.replaceString();

	stringReplacer.setFilePath("tests/multiLine");
	stringReplacer.replaceString();

	//TODO: check abscent file
    return (0);
}