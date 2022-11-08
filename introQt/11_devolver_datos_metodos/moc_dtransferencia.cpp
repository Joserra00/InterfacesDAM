/****************************************************************************
** Meta object code from reading C++ file 'dtransferencia.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "dtransferencia.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'dtransferencia.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Dtransferencia_t {
    QByteArrayData data[8];
    char stringdata0[141];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Dtransferencia_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Dtransferencia_t qt_meta_stringdata_Dtransferencia = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Dtransferencia"
QT_MOC_LITERAL(1, 15, 27), // "senyalTransferenciaOrdenada"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 28), // "senyalTransferenciaOrdenada2"
QT_MOC_LITERAL(4, 73, 19), // "slotActualizarBoton"
QT_MOC_LITERAL(5, 93, 22), // "slotActualizarComision"
QT_MOC_LITERAL(6, 116, 11), // "slotAceptar"
QT_MOC_LITERAL(7, 128, 12) // "slotAceptar2"

    },
    "Dtransferencia\0senyalTransferenciaOrdenada\0"
    "\0senyalTransferenciaOrdenada2\0"
    "slotActualizarBoton\0slotActualizarComision\0"
    "slotAceptar\0slotAceptar2"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Dtransferencia[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       3,    2,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   52,    2, 0x0a /* Public */,
       5,    1,   55,    2, 0x0a /* Public */,
       6,    0,   58,    2, 0x0a /* Public */,
       7,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Dtransferencia::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Dtransferencia *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->senyalTransferenciaOrdenada((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->senyalTransferenciaOrdenada2((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->slotActualizarBoton((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->slotActualizarComision((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->slotAceptar(); break;
        case 5: _t->slotAceptar2(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Dtransferencia::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dtransferencia::senyalTransferenciaOrdenada)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Dtransferencia::*)(float , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Dtransferencia::senyalTransferenciaOrdenada2)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Dtransferencia::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_Dtransferencia.data,
    qt_meta_data_Dtransferencia,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Dtransferencia::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Dtransferencia::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Dtransferencia.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int Dtransferencia::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void Dtransferencia::senyalTransferenciaOrdenada(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Dtransferencia::senyalTransferenciaOrdenada2(float _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
