#ifndef PLAYERPOPUP_H
#define PLAYERPOPUP_H

#include <QDialog>

namespace Ui {
class playerPopup;
}

class playerPopup : public QDialog
{
    Q_OBJECT

public:
    explicit playerPopup(QWidget *parent = 0);
    ~playerPopup();
    void setEdits(int,int);
    void setTextureURL(QString);
    void closeEvent(QCloseEvent*);
    void keyPressEvent(QKeyEvent*);
    void setSize(int);

private slots:
    void on_LEFTButton_clicked();
    void on_UPButton_clicked();
    void on_RIGHTButton_clicked();
    void on_DOWNButton_clicked();
    void on_xEdit_editingFinished();
    void on_yEdit_editingFinished();
    void on_textureButton_clicked();

    void on_sizeBox_valueChanged(int arg1);

private:
    Ui::playerPopup *ui;

signals:
    void movePlayer(int);
    void xChanged(int);
    void yChanged(int);
    void textureChanged(QString);
    void sizeChanged(int);
};

#endif // PLAYERPOPUP_H
