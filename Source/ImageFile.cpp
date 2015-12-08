// ImageFile.cpp
// Created by Evan Almonte
//
#include "ImageFile.hpp"

ImageFile::ImageFile( ) : pixelMatrix(SafeMatrix<int>(0,0)), colorDepth(0) { }

ImageFile::ImageFile(std::string fileName, int height, int width, int cD) : 
	File(fileName, ".gif"), pixelMatrix(SafeMatrix<int>(height,width)), colorDepth(cD) { }
