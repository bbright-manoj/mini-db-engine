#include <iostream>

#include "minidb/database.h"

int main()

{
    Database database;

    database.addUsers();
    database.showUsers();

    return 0;
}