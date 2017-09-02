#include <QFileDialog>

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "converterconductor.h"
#include "filemanagementdomain.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    conductor_(nullptr),
    fileManager_(nullptr)
{
    ui->setupUi(this);
    conductor_ = new ConverterConductor();
    fileManager_ = new FileManagementDomain();
}

MainWindow::~MainWindow()
{
    delete fileManager_;
    delete conductor_;
    delete ui;
}

void MainWindow::on_btn_FileSelect_clicked()
{
    QStringList selectFiles;
    selectFiles = QFileDialog::getOpenFileNames();
    fileManager_->setInputFileNames(selectFiles);
    ui->edit_POInputFile->setText(fileManager_->getInputFiles());
}

void MainWindow::on_btn_FolderSelect_clicked()
{
    QString dir;
    dir = QFileDialog::getExistingDirectory ();
    fileManager_->setOutputFolder(dir);
    ui->edit_OutputFolder->setText(fileManager_->getOutputFolder());
}

void MainWindow::on_btn_Convert_clicked()
{
    conductor_->convert(fileManager_);
}


void MainWindow::on_rdo_employee_clicked()
{
    conductor_->setEmployee();
}

void MainWindow::on_rdo_customer_clicked()
{
    conductor_->setCustomer();
}
