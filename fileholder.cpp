#include <iostream>
#include <QStringList>
#include <QFileInfo>
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
    QStringList files;
    QStringListIterator itr(inputFiles_);

    while(itr.hasNext())
    {
        files.append(pickupFileName(itr.next()));
    }
    return files.join(", ");
}

QString FileHolder::getOutputFolder()
{
    return outputFolder_;
}

QString FileHolder::pickupFileName(QString filenameWithPath)
{
    return QFileInfo(filenameWithPath).fileName();
}
