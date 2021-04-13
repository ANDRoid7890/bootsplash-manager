#ifndef INSTALLDIALOG_H
#define INSTALLDIALOG_H

#include <QDialog>

namespace Ui {
class InstallDialog;
}

class InstallDialog : public QDialog
{
    Q_OBJECT

public:
    void refresh();
    explicit InstallDialog(QWidget *parent = nullptr);
    ~InstallDialog();

private slots:
    void on_pushButton_clicked();

    void on_listWidget_itemSelectionChanged();

private:
    Ui::InstallDialog *ui;
};

#endif // INSTALLDIALOG_H