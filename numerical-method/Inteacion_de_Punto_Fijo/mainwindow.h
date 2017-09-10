#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
      double funcion(double c);

private:
    Ui::MainWindow *ui;
public slots:

    void proceso(); //Slot que realiza el método de bisección
     void borrar(); //Slot que borra el contenido de los spinbox y el texto
};


#endif // MAINWINDOW_H
