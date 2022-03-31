#include <QApplication>
#include <QPushButton>



int main(int argc, char **argv)
{
 QApplication app (argc, argv);

 QPushButton button;
 button.setText("My text");
 button.setToolTip("A tooltip");
 button.show();

 //font of text
 QFont font ("Helvetica");
 font.setBold(25);
 button.setFont(font);



//icon
button.setIcon(QIcon::fromTheme("face-smile"));

 return app.exec();
}
