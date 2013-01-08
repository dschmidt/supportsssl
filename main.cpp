#include <QMessageBox>
#include <QSslSocket>
#include <QApplication>

int main(int argc, char **argv)
{
    QApplication a(argc, argv);
    QMessageBox::information(0, "Test", QString("SslSocket::supportsSsl(): %1").arg( QSslSocket::supportsSsl() ? "true" : "false" ) );

    return 0;
}