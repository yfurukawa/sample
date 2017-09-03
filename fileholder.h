#ifndef FILEHOLDER_H
#define FILEHOLDER_H

#include "QStringList"
#include "QString"

class FileHolder
{
public:
    FileHolder();
    virtual ~FileHolder();

    void setInputFileNames(QStringList inputFiles);
    void setInputFolder(QString inputFolder);
    void setOutputFolder(QString outputFolder);
    QString getInputFiles();
    QString getOutputFolder();

protected:
    QString pickupFileName(QString filenameWithPath);
    QStringList inputFiles_;
    QString inputFolder_;
    QString outputFolder_;
};

#endif // FILEHOLDER_H
