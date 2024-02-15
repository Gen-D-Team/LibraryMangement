#include <iostream>

#include "UI/ui.h"
#include "books/info.h"

using namespace std;

int main(void)
{
    info info;
    info.input_book();
    system("cls");
    info.output_book();

    return 0;
}