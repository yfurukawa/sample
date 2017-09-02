#-------------------------------------------------
#
# Project created by QtCreator 2017-08-26T22:18:33
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ResistrationUserDataConverter
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += main.cpp\
        mainwindow.cpp \
    converterconductor.cpp \
    fileholder.cpp \
    parser.cpp \
    empolyeeparser.cpp \
    customerparser.cpp \
    userdatareaddomain.cpp \
    resistationdatacreatedomain.cpp \
    textfiledao.cpp \
    stringhelper.cpp \
    filepathstringhelper.cpp \
    filemanagementdomain.cpp \
    parserfactory.cpp \
    userdatalist.cpp \
    userdata.cpp

HEADERS  += mainwindow.h \
    converterconductor.h \
    fileholder.h \
    parser.h \
    empolyeeparser.h \
    customerparser.h \
    userdatareaddomain.h \
    resistationdatacreatedomain.h \
    textfiledao.h \
    stringhelper.h \
    filepathstringhelper.h \
    filemanagementdomain.h \
    parserfactory.h \
    userdatalist.h \
    userdata.h

FORMS    += mainwindow.ui
