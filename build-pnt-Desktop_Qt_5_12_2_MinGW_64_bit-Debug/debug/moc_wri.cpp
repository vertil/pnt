/****************************************************************************
** Meta object code from reading C++ file 'wri.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../pnt/wri.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wri.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Scribbleare_t {
    QByteArrayData data[14];
    char stringdata0[262];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Scribbleare_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Scribbleare_t qt_meta_stringdata_Scribbleare = {
    {
QT_MOC_LITERAL(0, 0, 11), // "Scribbleare"
QT_MOC_LITERAL(1, 12, 6), // "offall"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(4, 42, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(5, 66, 20), // "on_dial_valueChanged"
QT_MOC_LITERAL(6, 87, 5), // "value"
QT_MOC_LITERAL(7, 93, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(8, 117, 22), // "on_dial_3_valueChanged"
QT_MOC_LITERAL(9, 140, 22), // "on_dial_4_valueChanged"
QT_MOC_LITERAL(10, 163, 22), // "on_dial_2_valueChanged"
QT_MOC_LITERAL(11, 186, 23), // "on_pushButton_4_clicked"
QT_MOC_LITERAL(12, 210, 23), // "on_pushButton_5_clicked"
QT_MOC_LITERAL(13, 234, 27) // "on_actionOpenfile_triggered"

    },
    "Scribbleare\0offall\0\0on_pushButton_clicked\0"
    "on_pushButton_2_clicked\0on_dial_valueChanged\0"
    "value\0on_pushButton_3_clicked\0"
    "on_dial_3_valueChanged\0on_dial_4_valueChanged\0"
    "on_dial_2_valueChanged\0on_pushButton_4_clicked\0"
    "on_pushButton_5_clicked\0"
    "on_actionOpenfile_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Scribbleare[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x08 /* Private */,
       3,    0,   70,    2, 0x08 /* Private */,
       4,    0,   71,    2, 0x08 /* Private */,
       5,    1,   72,    2, 0x08 /* Private */,
       7,    0,   75,    2, 0x08 /* Private */,
       8,    1,   76,    2, 0x08 /* Private */,
       9,    1,   79,    2, 0x08 /* Private */,
      10,    1,   82,    2, 0x08 /* Private */,
      11,    0,   85,    2, 0x08 /* Private */,
      12,    0,   86,    2, 0x08 /* Private */,
      13,    0,   87,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Scribbleare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Scribbleare *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->offall(); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->on_pushButton_2_clicked(); break;
        case 3: _t->on_dial_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_pushButton_3_clicked(); break;
        case 5: _t->on_dial_3_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_dial_4_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_dial_2_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->on_pushButton_4_clicked(); break;
        case 9: _t->on_pushButton_5_clicked(); break;
        case 10: _t->on_actionOpenfile_triggered(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Scribbleare::staticMetaObject = { {
    &QLabel::staticMetaObject,
    qt_meta_stringdata_Scribbleare.data,
    qt_meta_data_Scribbleare,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Scribbleare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Scribbleare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Scribbleare.stringdata0))
        return static_cast<void*>(this);
    return QLabel::qt_metacast(_clname);
}

int Scribbleare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
