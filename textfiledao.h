#ifndef TEXTFILEDAO_H
#define TEXTFILEDAO_H

#include <QString>
#include <QFile>
#include <QTextStream>
#include <QTextCodec>

class TextFileDao
{
public:
    TextFileDao();
    virtual ~TextFileDao();
    void open(QString fileName);
    QString readLine();
    void close();

protected:
    QFile* fileHandler_;
    QTextStream* inputStream_;
    QTextCodec* codec_;
};

#endif // TEXTFILEDAO_H
