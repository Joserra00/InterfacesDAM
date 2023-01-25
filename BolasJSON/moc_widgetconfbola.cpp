/****************************************************************************
** Meta object code from reading C++ file 'widgetconfbola.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "widgetconfbola.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widgetconfbola.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_WidgetConfBola_t {
    QByteArrayData data[9];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WidgetConfBola_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WidgetConfBola_t qt_meta_stringdata_WidgetConfBola = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WidgetConfBola"
QT_MOC_LITERAL(1, 15, 18), // "senyalAlgoCambiado"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 11), // "slotCirculo"
QT_MOC_LITERAL(4, 47, 10), // "slotPatron"
QT_MOC_LITERAL(5, 58, 9), // "slotColor"
QT_MOC_LITERAL(6, 68, 21), // "slotColorSeleccionado"
QT_MOC_LITERAL(7, 90, 5), // "color"
QT_MOC_LITERAL(8, 96, 10) // "slotImagen"

    },
    "WidgetConfBola\0senyalAlgoCambiado\0\0"
    "slotCirculo\0slotPatron\0slotColor\0"
    "slotColorSeleccionado\0color\0slotImagen"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WidgetConfBola[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    1,   48,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void,

       0        // eod
};

void WidgetConfBola::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WidgetConfBola *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->senyalAlgoCambiado(); break;
        case 1: _t->slotCirculo(); break;
        case 2: _t->slotPatron(); break;
        case 3: _t->slotColor(); break;
        case 4: _t->slotColorSeleccionado((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 5: _t->slotImagen(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WidgetConfBola::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&WidgetConfBola::senyalAlgoCambiado)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject WidgetConfBola::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_WidgetConfBola.data,
    qt_meta_data_WidgetConfBola,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *WidgetConfBola::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WidgetConfBola::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_WidgetConfBola.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::WidgetConfBola"))
        return static_cast< Ui::WidgetConfBola*>(this);
    return QWidget::qt_metacast(_clname);
}

int WidgetConfBola::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WidgetConfBola::senyalAlgoCambiado()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
