
#include "dinfotabla.h"
#include <QDebug>
#include <QTimer>
DInfoTabla::DInfoTabla(QVector <Bola*>*bolasPasadas, QWidget *parent): QDialog(parent){
		setupUi(this);
		modelo = new ModeloTabla(bolasPasadas);
		tablaBolas->setModel(modelo);
		tablaBolas->setItemDelegate(new SpinBoxDelegate);
		QTimer *temporizador;
		temporizador = new QTimer();
		temporizador->setInterval(500);
		temporizador->setSingleShot(false);
		temporizador->start();
		connect(temporizador,SIGNAL(timeout()),
			this,SLOT(slotTemporizador()));
}

void DInfoTabla::slotTemporizador(){
	//tablaBolas->reset();
	modelo->actualizaDatos();
}
void DInfoTabla::slotEjemplo(){

}
ModeloTabla::ModeloTabla(QVector<Bola*>*bolasPasadas){
	lasBolas = bolasPasadas;
}
int ModeloTabla::columnCount(const QModelIndex &)const{
	return 4;
}

int ModeloTabla::rowCount(const QModelIndex &)const{
	return lasBolas->size();

}
QVariant ModeloTabla::data(const QModelIndex &index, int role)const{
	int row = index.row();
	int col = index.column();
	if(role ==Qt::BackgroundRole){
		return QVariant(lasBolas->at(row)->color);
	}
	if(role !=Qt::DisplayRole) return QVariant();

	QString cadena("");
	
	
	
	switch(col){
		case 0:
			cadena = QString::number(lasBolas->at(row)->posX);
			break;

		case 1:
			cadena = QString::number(lasBolas->at(row)->posY);
			break;

		case 2:
			cadena = QString::number(lasBolas->at(row)->velX);
			break;

		case 3:
			cadena = QString::number(lasBolas->at(row)->velY);
			break;

	
	}
	return QVariant(cadena);
	
	

}
Qt::ItemFlags ModeloTabla::flags(const QModelIndex &index) const{
	Qt::ItemFlags flagsDefecto = QAbstractTableModel::flags(index);
	return Qt::ItemIsEditable | flagsDefecto;


}
bool ModeloTabla::setData(const QModelIndex &index, const QVariant &value,int role){
	qDebug()<<value.toString();
	int nBola = index.row();
	bool conversionOk;
	QString cadena = value.toString();
	float floatValue = value.toFloat(&conversionOk);
	if(!conversionOk) return false;
	switch(index.column()){
	
			case 0:
				lasBolas->at(nBola)->posX=floatValue;
				break;
			case 1:
				lasBolas->at(nBola)->posY=floatValue;
				break;
			case 2:
				lasBolas->at(nBola)->velX=floatValue;
				break;
			case 3:
				lasBolas->at(nBola)->velY=floatValue;
				break;
	}
				return true;
}
void ModeloTabla::actualizaDatos(){
	emit layoutChanged();

}
QVariant ModeloTabla::headerData(int section,Qt::Orientation orientation, int role)const{
		if(role !=Qt::DisplayRole)return QVariant();
		if(orientation == Qt::Horizontal){
			switch(section){
				case 0: return QString("Posicion X");
				case 1: return QString("Posicion Y");
				case 2: return QString("Velocidad X");
				case 3: return QString("Velocidad Y");
			}
		}
		QString cadena("Bola ");
		if(orientation==Qt::Vertical){
		return QVariant(QString(lasBolas->at(section)->nombre));
		
		}
		return QVariant();
}
SpinBoxDelegate::SpinBoxDelegate(QObject *parent ):
	QStyledItemDelegate(parent){
		
	
	
}
QWidget *SpinBoxDelegate::createEditor(QWidget *parent,const QStyleOptionViewItem &option, const QModelIndex &index)const {

	QDoubleSpinBox *spb = new QDoubleSpinBox(parent);
	spb->setMinimum(-5);
	spb->setMaximum(1000);
	spb->setFrame(true);
	spb->setValue(2.2);

	return spb;

}

void SpinBoxDelegate::updateEditorGeometry(QWidget *editor,
	const QStyleOptionViewItem &option, const QModelIndex &) const{
	
	editor->setGeometry(option.rect);
	
	
}
void SpinBoxDelegate::setEditorData(QWidget *editor, const QModelIndex &index) const{
						QDoubleSpinBox *spb;
						spb = qobject_cast<QDoubleSpinBox*>(editor);
						const QAbstractItemModel *model = index.model();
						QVariant valor= model->data(index,Qt::DisplayRole);
						spb->setValue(valor.toFloat());
						
}
void SpinBoxDelegate::setModelData(QWidget *editor, QAbstractItemModel *model, const QModelIndex &index) const {
	QDoubleSpinBox *spb;
	spb = qobject_cast<QDoubleSpinBox*> (editor);
	float valor = spb->value();
	QVariant valorVariant(valor);
	
	model->setData(index,valorVariant,Qt::EditRole);



}








