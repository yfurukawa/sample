#ifndef FILEMANAGEMENTDOMAIN_H
#define FILEMANAGEMENTDOMAIN_H
#include "QString"
#include "QStringList"

class FileHolder;

class FileManagementDomain
{
public:
    FileManagementDomain();
    virtual ~FileManagementDomain();

    void setInputFileNames(QStringList inputFiles);
    void setInputFolder(QString inputFolder);
    void setOutputFolder(QString outputFolder);
    QString getInputFiles();
    QString getOutputFolder();

private:
    FileHolder* fileHolder_;
};

#endif // FILEMANAGEMENTDOMAIN_H
