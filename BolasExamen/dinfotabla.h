
#ifndef DINFOTABLA_H
#define DINFOTABLA_H
#include "ui_dinfotabla.h"

#include <QVector>
#include <QDialog>
#include <QHBoxLayout>
#include <QAbstractTableModel>
#include <QModelIndex>
#include <QVariant>
#include "bola.h"
#include <QStyledItemDelegate>
#include <QStyleOptionViewItem>
#include <QDoubleSpinBox>


class SpinBoxDelegate: public QStyledItemDelegate{
Q_OBJECT
public:
	SpinBoxDelegate(QObject *parent = 0);
	void updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &) const override;
	QWidget *createEditor(QWidget *parent,const QStyleOptionViewItem &option, const QModelIndex &index)const override;
	void setEditorData(QWidget *editor,
						const QModelIndex &index) const override;
	void setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const override;

};


class ModeloTabla : public QAbstractTableModel{
Q_OBJECT
public:
	ModeloTabla(QVector <Bola*>*lasBolas);
	QVector <Bola*>*lasBolas;
	int columnCount(const QModelIndex & = QModelIndex())const;
	int rowCount(const QModelIndex & = QModelIndex())const;
	void actualizaDatos();
	QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;
	QVariant headerData(int section, 
							Qt::Orientation orientation,
							int role=Qt::DisplayRole)const;
	bool setData(const QModelIndex &index, const QVariant &value,int role = Qt::EditRole);
	Qt::ItemFlags flags(const QModelIndex &index)const;
	
};

class DInfoTabla : public QDialog, public Ui::DInfoTabla {
Q_OBJECT

public:
	DInfoTabla(QVector <Bola*>*bolasPasadas,QWidget *parent = NULL);
	DInfoTabla(QWidget *parent = NULL);
	ModeloTabla *modelo;
public slots:
	void slotEjemplo();
	void slotTemporizador();
};

#endif 
