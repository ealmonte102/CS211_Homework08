// TextFile.cpp
// Created by Evan Almonte
//
#include "TextFile.hpp"

TextFile::TextFile( ) : charList(SafeArray<int>(0)), charCount(0) { }

TextFile::TextFile(std::string fileName) : charList(SafeArray<int>(0)), charCount(0) { }

TextFile::TextFile(std::string fileName, SafeArray<int> charList) : File(fileName, ".txt"), charList(charList), charCount(charList.length()) {}

int TextFile::getSize( ) const {
	return charCount / 8;
}

int TextFile::getCharCount( ) const {
	return charCount;
}
