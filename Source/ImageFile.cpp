// ImageFile.cpp
// Created by Evan Almonte
//
#include "ImageFile.hpp"

ImageFile::ImageFile( ) : pixelMatrix(SafeMatrix<int>(0,0)), colorDepth(0) { }

ImageFile::ImageFile(std::string fileName, int height, int width, int cD) : 
	File(fileName, ".gif"), pixelMatrix(SafeMatrix<int>(height,width)), colorDepth(cD) { }

int ImageFile::getColorDepth() const {
	return colorDepth;
}

int ImageFile::getDimensionHeight( ) const {
	return pixelMatrix.length ( );
}

int ImageFile::getDimensionWidth() const {
	return pixelMatrix.width ( );
}

int ImageFile::getSize() const {
	return static_cast<double>(pixelMatrix.length ( ) * pixelMatrix.width ( ) * colorDepth) / 8;
}