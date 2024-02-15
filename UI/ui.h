#ifndef UI_H
#define UI_H

#include <iostream>

using namespace std;

class ui
{
public:
    int data;

    ui();
    void welcome_message();
    // this will be the admin part
    void register_menu();
    void login_menu();
    // this will be the user part
    void what_you_want();
};

#endif