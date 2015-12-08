#ifndef IMAGEFILE_HPP
#define IMAGEFILE_HPP

#include "File.hpp"
#include "SafeMatrix.hpp"
#include <string>

class ImageFile : public File {
public:
	ImageFile( );

	ImageFile(std::string fileName, int height, int width, int colorDepth);

	int getColorDepth( ) const;

	int getDimensionHeight( ) const;

	int getDimensionWidth( ) const;

	int getSize( ) const;
private:
	SafeMatrix<int> pixelMatrix;
	int colorDepth;
};

#endif //IMAGEFILE_HPP
