#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class ConverterConductor;
class FileManagementDomain;

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_FileSelect_clicked();

    void on_btn_FolderSelect_clicked();

    void on_btn_Convert_clicked();

    void on_rdo_employee_clicked();

    void on_rdo_customer_clicked();

private:
    Ui::MainWindow *ui;
    ConverterConductor* conductor_;
    FileManagementDomain* fileManager_;
};

#endif // MAINWINDOW_H
