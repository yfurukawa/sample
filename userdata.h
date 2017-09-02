#ifndef USERDATA_H
#define USERDATA_H

#include "QString"

class UserData
{
public:
    UserData(QString account, QString userName);
    virtual ~UserData();

private:
    UserData();
    QString account_;
    QString userName_;
    QString defaultPassword_;
};

#endif // USERDATA_H
