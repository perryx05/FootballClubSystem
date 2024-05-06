#ifndef NAVIGATOR_H
#define NAVIGATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Navigator;
}
QT_END_NAMESPACE

class Navigator : public QMainWindow
{
    Q_OBJECT

public:
    Navigator(QWidget *parent = nullptr);
    ~Navigator();

private:
    Ui::Navigator *ui;
};
#endif // NAVIGATOR_H
