#ifndef INFO_H
#define INFO_H

#include <iostream>

using namespace std;

class info
{
public:
    int count = 0;
    string book_id[100];
    string book_name[100];
    string book_publisher[100];
    string book_author[100];

    info();

    void input_book();
    void output_book();
};

#endif