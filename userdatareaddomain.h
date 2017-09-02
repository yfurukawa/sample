#ifndef USERDATAREADDOMAIN_H
#define USERDATAREADDOMAIN_H

#include "QString"

class ParserFactory;
class Parser;
class FileManagementDomain;
class UserDataList;

class UserDataReadDomain
{
public:
    UserDataReadDomain();
    virtual ~UserDataReadDomain();

    void setEmployee();
    void setCustomer();
    void read(FileManagementDomain* readDomain, UserDataList* dataList);
    void addUserData(QString account, QString userName);

private:
    ParserFactory* factory_;
    Parser* parser_;
    FileManagementDomain* readDomain_;
    UserDataList* dataList_;

};

#endif // USERDATAREADDOMAIN_H
