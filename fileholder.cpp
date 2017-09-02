#include <iostream>
#include "fileholder.h"

FileHolder::FileHolder() :
    inputFolder_(""),
    outputFolder_("")
{

}

FileHolder::~FileHolder()
{

}

void FileHolder::setInputFileNames(QStringList inputFiles)
{
    inputFiles_ = inputFiles;
}

void FileHolder::setInputFolder(QString inputFlder)
{
    inputFolder_ = inputFlder;
}

void FileHolder::setOutputFolder(QString outputFolder)
{
    outputFolder_ = outputFolder;
}

QString FileHolder::getInputFiles()
{
    return inputFiles_.join(", ");
}

QString FileHolder::getOutputFolder()
{
    return outputFolder_;
}
