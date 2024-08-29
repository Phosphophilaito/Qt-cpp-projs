#include <QApplication>
#include <QPushButton>

int main(int argc, char **argv)
{
    QApplication app (argc, argv);

    QWidget window;
    window.setFixedSize(320,150);

    QFont font ("Courier");

    QPushButton buttonParent ("Click here for free Iphone", &window);
    buttonParent.setText("Click here for free Iphone");
    buttonParent.setToolTip("Just joking ùwú");
    buttonParent.setFont(font);
    buttonParent.setGeometry(10,10,300,100);

    QPushButton buttonChild1 ("real button for iphone", &buttonParent);


    window.show();

    return app.exec();
}
