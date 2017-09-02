#include "userdata.h"

UserData::UserData() :
    account_(""),
    userName_(""),
    defaultPassword_("")
{

}

UserData::~UserData()
{

}

UserData::UserData(QString account, QString userName) :
    account_(account),
    userName_(userName),
    defaultPassword_("Qwer1234")
{

}
