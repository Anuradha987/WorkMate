/****************************************************************************
** Meta object code from reading C++ file 'employeehomescreen.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../tms3/employeehomescreen.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'employeehomescreen.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_employeehomescreen_t {
    QByteArrayData data[13];
    char stringdata0[276];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_employeehomescreen_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_employeehomescreen_t qt_meta_stringdata_employeehomescreen = {
    {
QT_MOC_LITERAL(0, 0, 18), // "employeehomescreen"
QT_MOC_LITERAL(1, 19, 18), // "on_btnHome_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 26), // "on_btnViewProjects_clicked"
QT_MOC_LITERAL(4, 66, 22), // "on_tableView_activated"
QT_MOC_LITERAL(5, 89, 11), // "QModelIndex"
QT_MOC_LITERAL(6, 101, 5), // "index"
QT_MOC_LITERAL(7, 107, 26), // "on_btnStartProjcet_clicked"
QT_MOC_LITERAL(8, 134, 31), // "on_dgAssignedProjects_activated"
QT_MOC_LITERAL(9, 166, 30), // "on_dgCurrentProjects_activated"
QT_MOC_LITERAL(10, 197, 29), // "on_btnCompleteProject_clicked"
QT_MOC_LITERAL(11, 227, 20), // "on_btnLogout_clicked"
QT_MOC_LITERAL(12, 248, 27) // "on_tabWidget_currentChanged"

    },
    "employeehomescreen\0on_btnHome_clicked\0"
    "\0on_btnViewProjects_clicked\0"
    "on_tableView_activated\0QModelIndex\0"
    "index\0on_btnStartProjcet_clicked\0"
    "on_dgAssignedProjects_activated\0"
    "on_dgCurrentProjects_activated\0"
    "on_btnCompleteProject_clicked\0"
    "on_btnLogout_clicked\0on_tabWidget_currentChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_employeehomescreen[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    1,   61,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    1,   65,    2, 0x08 /* Private */,
       9,    1,   68,    2, 0x08 /* Private */,
      10,    0,   71,    2, 0x08 /* Private */,
      11,    0,   72,    2, 0x08 /* Private */,
      12,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,

       0        // eod
};

void employeehomescreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<employeehomescreen *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_btnHome_clicked(); break;
        case 1: _t->on_btnViewProjects_clicked(); break;
        case 2: _t->on_tableView_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 3: _t->on_btnStartProjcet_clicked(); break;
        case 4: _t->on_dgAssignedProjects_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 5: _t->on_dgCurrentProjects_activated((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        case 6: _t->on_btnCompleteProject_clicked(); break;
        case 7: _t->on_btnLogout_clicked(); break;
        case 8: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject employeehomescreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_employeehomescreen.data,
    qt_meta_data_employeehomescreen,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *employeehomescreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *employeehomescreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_employeehomescreen.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int employeehomescreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
