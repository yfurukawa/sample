#include "userdatalist.h"

UserDataList::UserDataList()
{

}

UserDataList::~UserDataList()
{

}

void UserDataList::add(UserData* userData)
{
    userData_.append(userData);
}
