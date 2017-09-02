#ifndef USERDATALIST_H
#define USERDATALIST_H

#include "QList"

class UserData;

class UserDataList
{
public:
    UserDataList();
    virtual ~UserDataList();
    void add(UserData* userData);

private:
    QList<UserData*> userData_;
};

#endif // USERDATALIST_H
