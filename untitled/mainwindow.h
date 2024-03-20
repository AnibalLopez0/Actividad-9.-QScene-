#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSpinBox>
#include <QLCDNumber>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_plainTextEdit_modificationChanged(bool arg1);

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

    void on_spinBox_valueChanged(int arg1);

    void on_plainTextEdit_ID_textChanged();

    void on_actionAbrir_archivo_triggered();

    void on_actionGuardar_triggered();

    void on_actionNuevo_Arcgivo_triggered();

    void on_actionGuardar_2_triggered();

    void BuscarNeurona();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::MainWindow *ui;
    QSpinBox* id_spinbox;
    QLCDNumber *lcdTotalNeuronas;
};
#endif // MAINWINDOW_H
