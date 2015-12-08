#ifndef TEXTFILE_HPP
#define TEXTFILE_HPP

#include "File.hpp"
#include "SafeArray.hpp"
#include <string>

class TextFile : public File{
public:
	TextFile ( );

	TextFile (std::string fileName);
	
	int getSize ( ) const override;

	int getCharCount ( ) const;
private:
	SafeArray<int> charList;
	int charCount;
};

#endif //TEXTFILE_HPP

