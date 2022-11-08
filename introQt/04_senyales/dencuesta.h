#include <QDialog>
#include <QLabel>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
class DEncuesta : public QDialog{
Q_OBJECT
public:
	DEncuesta(QWidget *parent = nullptr);
	QLabel *ePregunta;
	QHBoxLayout *principal;
	QVBoxLayout *vertical1;
	QVBoxLayout *vertical2;
	QSlider *slider;
public slots:
void slotMierda();
void gustaAsignatura(int num);

};
