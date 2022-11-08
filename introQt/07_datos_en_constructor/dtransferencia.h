#ifndef _DTRANSFERENCIA_H
#define _DTRANSFERENCIA_H

#include <QDialog>
#include <QLabel>
#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QSlider>
#include <QString>
#include <QStringList>
#include <QRegularExpression>
#include <QRegularExpressionMatch>
#include <QComboBox>
class Dtransferencia : public QDialog{
Q_OBJECT
public:
	Dtransferencia(QStringList lista,QWidget *parent = nullptr);
	QLabel *cuenta;
	QLabel *cantidad;
	QLabel *interes;
	QHBoxLayout *principal;
	QHBoxLayout *cuentaH;
	QHBoxLayout *cantidadH;
	QHBoxLayout *interesH;
	QVBoxLayout *vertical1;
	QVBoxLayout *vertical2;
	QPushButton *aceptar;
	QPushButton *cancelar;
	QLineEdit *destino;
	QLineEdit *ecantidad;
	QComboBox *combobox;
	
public slots:
void slotActualizarBoton(const QString &);
void slotActualizarComision(const QString &);

};
#endif
