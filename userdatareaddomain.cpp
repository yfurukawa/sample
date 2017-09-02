//#include <iostream>
#include "userdatareaddomain.h"
#include "parserfactory.h"
#include "parser.h"
#include "userdata.h"
#include "userdatalist.h"

UserDataReadDomain::UserDataReadDomain() :
    factory_(nullptr),
    parser_(nullptr),
    readDomain_(nullptr),
    dataList_(nullptr)

{
    factory_ = new ParserFactory();
}

UserDataReadDomain::~UserDataReadDomain()
{
    delete factory_;
}

void UserDataReadDomain::setEmployee()
{
    factory_->setEmployee();
}

void UserDataReadDomain::setCustomer()
{
    factory_->setCustomer();
}

void UserDataReadDomain::read(FileManagementDomain* readDomain, UserDataList* dataList)
{
    readDomain_ = readDomain;
    dataList_ = dataList;
    parser_ = factory_->getParser();
    parser_->parse();
}

void UserDataReadDomain::addUserData(QString account, QString userName)
{
    UserData* userData(new UserData(account, userName));
    dataList_->add(userData);
}
