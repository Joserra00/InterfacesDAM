#include <QApplication>
#include <QHBoxLayout>
#include <QSlider>
#include <QSpinBox>
#include <QLCDNumber>
#include <QPushButton>
#include <QlineEdit>
#include <QLabel>
  int main(int argc, char *argv[])
  {
      QApplication app(argc, argv);

      QWidget *window = new QWidget;
      window->setWindowTitle("Enter Your Age");

     QSpinBox *spinBox = new QSpinBox;
     QSlider *slider = new QSlider(Qt::Horizontal);
     QLCDNumber *number = new QLCDNumber();
     QPushButton *botonDecimal = new QPushButton("Decimal");
     QPushButton *botonHexadecimal = new QPushButton("Hexadecimal");
     QlineEdit *input = new QLineEdit();
     QLabel *label = new QLabel();
     spinBox->setRange(0, 130);
     slider->setRange(0, 130);

     QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                      slider, SLOT(setValue(int)));
     QObject::connect(slider, SIGNAL(valueChanged(int)),
                      spinBox, SLOT(setValue(int)));
     QObject::connect(spinBox, SIGNAL(valueChanged(int)),
                      number, SLOT(display(int)));
     QObject::connect(botonDecimal, SIGNAL(clicked()),
                      number, SLOT(setDecMode()));
     QObject::connect(botonHexadecimal, SIGNAL(clicked()),
                      number, SLOT(setHexMode()));
     
     spinBox->setValue(35);
	 QVBoxLayout *vlayout = new QVBoxLayout;
	 
	 QHBoxLayout *layout2 = new QHBoxLayout;
     QHBoxLayout *layout = new QHBoxLayout;
     QHBoxLayout *layout3 = new QHBoxLayout;
     layout->addWidget(spinBox);
     layout->addWidget(slider);
     vlayout->addLayout(layout);
     vlayout->addLayout(layout2);
     layout2->addWidget(number);
     layout3->addLayout(layout2);
     layout3->addWidget(botonDecimal);
     vlayout->addLayout(layout3);
     vlayout->addWidget(botonHexadecimal);
     
     window->setLayout(vlayout);

     window->show();

     return app.exec();
 }




