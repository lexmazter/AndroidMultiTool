#ifndef DIALOGSCREENSHOT_H
#define DIALOGSCREENSHOT_H

#include <QDialog>
#include <QDir>
#include <QDesktopServices>
#include <QUrl>
#include <QMessageBox>
#include <QDirIterator>
#include <QFileDialog>
#include <QProcess>
#include <QCloseEvent>
#include <QDate>

namespace Ui {
class DialogScreenshot;
}

class DialogScreenshot : public QDialog
{
    Q_OBJECT

public:
    explicit DialogScreenshot(QWidget *parent = 0);
    ~DialogScreenshot();

private slots:
    void processFinished(int exitCode);

    void on_exploreButton_clicked();

    void on_getScreenButton_clicked();

private:
    Ui::DialogScreenshot *ui;
    bool *busy;
    void closeEvent(QCloseEvent *event);
    void getFiles();
};

#endif // DIALOGSCREENSHOT_H
