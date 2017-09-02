#include <iostream>
#include "converterconductor.h"
#include "filemanagementdomain.h"
#include "userdatareaddomain.h"
#include "userdatalist.h"

ConverterConductor::ConverterConductor() :
    readDomain_(nullptr),
    userDataList_(nullptr)
{
    readDomain_ = new UserDataReadDomain();
    userDataList_ = new UserDataList();
}

ConverterConductor::~ConverterConductor()
{
    delete userDataList_;
    delete readDomain_;
}

void ConverterConductor::convert(FileManagementDomain* filemanager)
{
    std::cout << "Convert" << std::endl;
    readDomain_->read(filemanager, userDataList_);
}

void ConverterConductor::setEmployee()
{
    readDomain_->setEmployee();
}

void ConverterConductor::setCustomer()
{
    readDomain_->setCustomer();
}
