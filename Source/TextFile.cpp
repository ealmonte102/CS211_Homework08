// TextFile.cpp
// Created by Evan Almonte
//
#include "TextFile.hpp"

const std::string TextFile::extension = "txt";

TextFile::TextFile( ) : File(extension), charList(SafeArray<int>(0)), charCount(0) { }

TextFile::TextFile(std::string fileName) : File(fileName, extension), charList(SafeArray<int>(0)), charCount(0) { }

TextFile::TextFile(std::string fileName, SafeArray<int> charList) : File(fileName, extension), charList(charList), charCount(0) {
	int charListSz = charList.length ( );
	for (int i = 0; i < charListSz; ++i) {
		if (charList[i] != -1) {
			charCount++;
		}
	}
}

int TextFile::getSize( ) const {
	return charCount / 8;
}

int TextFile::getCharCount( ) const {
	return charCount;
}
