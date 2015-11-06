#ifndef DIALOGKERNEL_H
#define DIALOGKERNEL_H

#include <QDialog>
#include <QDirIterator>
#include <QMessageBox>
#include <QProcess>
#include <QPushButton>
#include <QListWidgetItem>
#include <QCloseEvent>
#include <QDebug>
#include <QDesktopServices>

namespace Ui {
class DialogKernel;
}

class DialogKernel : public QDialog
{
    Q_OBJECT

public:
    explicit DialogKernel(QWidget *parent = 0);
    ~DialogKernel();

private slots:
    void processOutput();

    void processFinished(int exitCode);

    void on_flashButton_clicked();

    void on_exploreButton_clicked();

    void on_tableWidget_itemClicked();

private:
    Ui::DialogKernel *ui;
    bool *busy;
    void closeEvent(QCloseEvent *event);
};

#endif // DIALOGKERNEL_H
