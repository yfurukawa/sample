#ifndef CONVERTERCONDUCTOR_H
#define CONVERTERCONDUCTOR_H

class FileManagementDomain;
class UserDataReadDomain;
class UserDataList;

class ConverterConductor
{
public:
    ConverterConductor();
    virtual ~ConverterConductor();

    void convert(FileManagementDomain* filemanager);
    void setEmployee();
    void setCustomer();

private:
    UserDataReadDomain* readDomain_;
    UserDataList* userDataList_;
};

#endif // CONVERTERCONDUCTOR_H
