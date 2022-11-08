#ifndef _EDITOR_H
#define _EDITOR_H
#include <QMainWindow>
#include <QTextEdit>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QString>


class Editor : public QMainWindow{
Q_OBJECT
public:
	Editor(QWidget *parent = nullptr);
	QTextEdit *editorCentral;
	QMenu *menuArchivo;
	QToolBar *barraHerramientas;
	QAction *accionSalir;
	QAction *accionAbrir;
	QAction *accionGuardar;
	QAction *accionGuardarComo;
	bool modificado;
	QString ruta;
	
	
private:
	void hacerMenus();
	
public slots:
	void slotSalir();
	void slotAbrir();
	void slotGuardar();
	void slotGuardarComo();
	void modificarBool();
	bool guardarFichero(QString nombreFichero);
	void establecerFicheroActual(const QString &nombreFichero);
	QString nombreCorto(const QString &nombreCompleto);

	
};
#endif
