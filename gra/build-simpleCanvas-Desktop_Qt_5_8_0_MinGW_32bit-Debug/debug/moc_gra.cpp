/****************************************************************************
** Meta object code from reading C++ file 'gra.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../simpleCanvas/gra.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gra.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Gra_t {
    QByteArrayData data[8];
    char stringdata0[72];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Gra_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Gra_t qt_meta_stringdata_Gra = {
    {
QT_MOC_LITERAL(0, 0, 3), // "Gra"
QT_MOC_LITERAL(1, 4, 10), // "paintEvent"
QT_MOC_LITERAL(2, 15, 0), // ""
QT_MOC_LITERAL(3, 16, 12), // "QPaintEvent*"
QT_MOC_LITERAL(4, 29, 5), // "event"
QT_MOC_LITERAL(5, 35, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(6, 57, 12), // "handleButton"
QT_MOC_LITERAL(7, 70, 1) // "i"

    },
    "Gra\0paintEvent\0\0QPaintEvent*\0event\0"
    "on_pushButton_clicked\0handleButton\0i"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Gra[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x08 /* Private */,
       5,    0,   32,    2, 0x08 /* Private */,
       6,    1,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,

       0        // eod
};

void Gra::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Gra *_t = static_cast<Gra *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->paintEvent((*reinterpret_cast< QPaintEvent*(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->handleButton((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Gra::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Gra.data,
      qt_meta_data_Gra,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Gra::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Gra::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Gra.stringdata0))
        return static_cast<void*>(const_cast< Gra*>(this));
    return QDialog::qt_metacast(_clname);
}

int Gra::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
