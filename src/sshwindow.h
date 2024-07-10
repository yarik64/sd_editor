// sshwindow.h

#ifndef SSHWINDOW_H
#define SSHWINDOW_H

#include <QMainWindow>

class SshWindow : public QMainWindow
{
    Q_OBJECT

public:
    SshWindow(QWidget *parent = nullptr);
    ~SshWindow();
};
#endif //SSHWINDOW_H
