#ifndef MINIDB_DATABASE_H
#define MINIDB_DATABASE_H


#include <vector>
#include "minidb/user.h"

class Database
{
  private:
    std::vector<User> users;

  public:
    void addUsers();
    void showUsers();  
};

#endif // MINIDB_DATABASE_H