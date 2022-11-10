#ifndef _EDITOR_H
#define _EDITOR_H
#include <QMainWindow>
#include <QTextEdit>
#include <QMenu>
#include <QAction>
#include <QToolBar>
#include <QString>
#include <QDebug>
#include <QCloseEvent>

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
	QString rutaArchivo;
	
	
private:
	void hacerMenus();
	void closeEvent(QCloseEvent *event);
	
public slots:
	void slotSalir();
	void slotAbrir();
	bool slotGuardar();
	bool slotGuardarComo();
	void modificarBool();
	bool guardarFichero(QString ruta);


	
};
#endif
