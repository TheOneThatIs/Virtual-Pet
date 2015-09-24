#pragma once

#include<fstream>
#include<sstream>
#include <string>

class File {
    std::string filepath;
public:
    File (std::string path);
    File ();
    ~File ();

   void setFile (std::string path);

   void write (std::string data);
   void read (int position, std::string delimiter);
};