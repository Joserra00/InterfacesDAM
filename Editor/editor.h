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
#include <QVector>
#include <QFileInfo>

class Editor : public QMainWindow{
Q_OBJECT
public:
	Editor(QWidget *parent = nullptr);
	QTextEdit *editorCentral;
	QMenu *menuArchivo;
	QMenu *menuContextual;
	QToolBar *barraHerramientas;
	QAction *accionSalir;
	QAction *accionAbrir;
	QAction *accionGuardar;
	QAction *accionGuardarComo;
	bool modificado;
	QString rutaArchivo;
	QVector <QAction*> acciones;
	
	
private:
	void hacerMenus();
	void closeEvent(QCloseEvent *event);
	void anyadirArchivoMenu(QString ruta);
	
public slots:
	void slotAbrirReciente();
	void slotSalir();
	void slotAbrir();
	bool slotGuardar();
	bool slotGuardarComo();
	void modificarBool();
	bool guardarFichero(QString ruta);


	
};
#endif
