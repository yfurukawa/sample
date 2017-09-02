#include <iostream>
#include "filemanagementdomain.h"
#include "fileholder.h"

FileManagementDomain::FileManagementDomain() :
    fileHolder_(nullptr)
{
    fileHolder_ = new FileHolder();
}

FileManagementDomain::~FileManagementDomain()
{
    delete fileHolder_;
}

void FileManagementDomain::setInputFileNames(QStringList inputFiles)
{
    fileHolder_->setInputFileNames(inputFiles);
}

void FileManagementDomain::setInputFolder(QString inputFolder)
{
    fileHolder_->setInputFolder(inputFolder);
}

void FileManagementDomain::setOutputFolder(QString outputFolder)
{
    fileHolder_->setOutputFolder(outputFolder);
}

QString FileManagementDomain::getInputFiles()
{
    return fileHolder_->getInputFiles();
}

QString FileManagementDomain::getOutputFolder()
{
    return fileHolder_->getOutputFolder();
}
