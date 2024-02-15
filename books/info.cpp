#include "info.h"

using namespace std;

info::info()
{
    this->count;
    this->book_id[100];
    this->book_name[100];
    this->book_author[100];
    this->book_publisher[100];
}

void info::input_book()
{
    info infoInput;
    char options;
    do
    {
        cout << "Enter book's ID: ";
        cin >> this->book_id[count];

        cout << "Enter book's name: ";
        cin >> this->book_name[count];

        cout << "Enter book's author: ";
        cin >> this->book_author[count];

        cout << "Enter book's publisher: ";
        cin >> this->book_publisher[count];

        cout << "\n\n";
        cout << "Do want to add more book? (Y/N) ";
        cin >> options;
        // getchar();
        
        this->count++;

    } while (options == 'y' || options == 'Y');
}

void info::output_book()
{
    for (int i = 0; i < this->count; i++)
    {
        cout << i << endl;
        cout << "Book ID: " << this->book_id[i] << endl;
        cout << "Book Name: " << this->book_name[i] << endl;
        cout << "Book Author: " << this->book_author[i] << endl;
        cout << "Book Publisher: " << this->book_publisher[i] << endl;
        cout << "\n\n";
    }
}