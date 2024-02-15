#ifndef FILEIO_H
#define FILEIO_H

#include <string>

using namespace std;

class Fileio
{
    Fileio();

    void open(string filename);
    void write(string filename);
    void read(string filename);
};

#endif