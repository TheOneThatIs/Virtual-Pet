#include "..\..\Inc\Util\File.h"


File::File (std::string path) {
    filepath = path;
}

File::File () {}
File::~File () {}


void File::setFile (std::string path) {
    filepath = path;
}

void File::write (std::string data) {
    std::ofstream file;
    file.open (filepath.c_str);
    file.write (data.c_str);
}

void File::read (int position, std::string delimiter) {
    std::ifstream file;
    file.open (filepath.c_str (), std::ifstream::binary);
    file.seekg (position);

    std::stringstream stream;
}