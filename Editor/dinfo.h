#ifndef _DINFO_H
#define _DINFO_H

#include <QDialog>
#include "ui_dinfo.h"
#include <QTextDocument>
#include <QShowEvent>
#include <QFocusEvent>

class DInfo : public QDialog, public Ui::DInfo{
Q_OBJECT
	public:
		DInfo(QTextDocument* ,QWidget *parent = NULL);
		QTextDocument *documento;
		void showEvent(QShowEvent *event);
		void focusInEvent(QFocusEvent *event);
		
	public slots:
		void slotActualizar();
	
	signals:
	
	public:
	
	
	
};

#endif 
