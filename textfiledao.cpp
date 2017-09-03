
#include "textfiledao.h"

TextFileDao::TextFileDao() :
    fileHandler_(nullptr),
    inputStream_(nullptr)
{

}

TextFileDao::~TextFileDao()
{

}

void TextFileDao::open(QString fileName)
{
    fileHandler_ = new QFile(fileName);
    if(!fileHandler_->open((QIODevice::ReadOnly)))
    {
        throw fileHandler_->errorString();
    }
    codec_ = QTextCodec::codecForName("UTF-8");
    inputStream_ = new QTextStream(fileHandler_);
    inputStream_->setCodec(codec_);
}

QString TextFileDao::readLine()
{
    QString readLine;

    if(!inputStream_->atEnd())
    {
        readLine = inputStream_->readLine();
    }

    return readLine;
}

void TextFileDao::close()
{
    fileHandler_->close();
}
