/****************************************************************************
** Meta object code from reading C++ file 'darrastraimagen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "darrastraimagen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'darrastraimagen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DArrastraImagen_t {
    QByteArrayData data[3];
    char stringdata0[29];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DArrastraImagen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DArrastraImagen_t qt_meta_stringdata_DArrastraImagen = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DArrastraImagen"
QT_MOC_LITERAL(1, 16, 11), // "slotEjemplo"
QT_MOC_LITERAL(2, 28, 0) // ""

    },
    "DArrastraImagen\0slotEjemplo\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DArrastraImagen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void DArrastraImagen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DArrastraImagen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotEjemplo(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject DArrastraImagen::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_DArrastraImagen.data,
    qt_meta_data_DArrastraImagen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DArrastraImagen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DArrastraImagen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DArrastraImagen.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::DArrastraImagen"))
        return static_cast< Ui::DArrastraImagen*>(this);
    return QDialog::qt_metacast(_clname);
}

int DArrastraImagen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
