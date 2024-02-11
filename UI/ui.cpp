#include <iostream>
#include "ui.h"

using namespace std;

UI::UI()
{
}

void UI::welcome_message()
{
    int n;

    cout << "Welcome to Library Management" << endl;
    cout << "1. User" << endl;
    cout << "2. Admin" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter number: ";
    scanf("%d", &n);

    switch (n) {
        case 1:
            cout << "this is case 1";
            break;
        case 2:
            cout << "this is case 2";
            break;
        default:
            return;
    }
}