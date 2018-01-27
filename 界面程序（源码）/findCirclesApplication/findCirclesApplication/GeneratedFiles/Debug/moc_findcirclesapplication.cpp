/****************************************************************************
** Meta object code from reading C++ file 'findcirclesapplication.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../findcirclesapplication.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'findcirclesapplication.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_findCirclesApplication_t {
    QByteArrayData data[9];
    char stringdata0[203];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_findCirclesApplication_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_findCirclesApplication_t qt_meta_stringdata_findCirclesApplication = {
    {
QT_MOC_LITERAL(0, 0, 22), // "findCirclesApplication"
QT_MOC_LITERAL(1, 23, 21), // "on_bthSetPath_clicked"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 21), // "on_btnReadImg_clicked"
QT_MOC_LITERAL(4, 68, 21), // "on_btnNextImg_clicked"
QT_MOC_LITERAL(5, 90, 31), // "on_btnSetThresholdValue_clicked"
QT_MOC_LITERAL(6, 122, 32), // "on_btnToDetectSampleImgs_clicked"
QT_MOC_LITERAL(7, 155, 28), // "on_btnPixelThreshold_clicked"
QT_MOC_LITERAL(8, 184, 18) // "on_btnExit_clicked"

    },
    "findCirclesApplication\0on_bthSetPath_clicked\0"
    "\0on_btnReadImg_clicked\0on_btnNextImg_clicked\0"
    "on_btnSetThresholdValue_clicked\0"
    "on_btnToDetectSampleImgs_clicked\0"
    "on_btnPixelThreshold_clicked\0"
    "on_btnExit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_findCirclesApplication[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void findCirclesApplication::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        findCirclesApplication *_t = static_cast<findCirclesApplication *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_bthSetPath_clicked(); break;
        case 1: _t->on_btnReadImg_clicked(); break;
        case 2: _t->on_btnNextImg_clicked(); break;
        case 3: _t->on_btnSetThresholdValue_clicked(); break;
        case 4: _t->on_btnToDetectSampleImgs_clicked(); break;
        case 5: _t->on_btnPixelThreshold_clicked(); break;
        case 6: _t->on_btnExit_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject findCirclesApplication::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_findCirclesApplication.data,
      qt_meta_data_findCirclesApplication,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *findCirclesApplication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *findCirclesApplication::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_findCirclesApplication.stringdata0))
        return static_cast<void*>(const_cast< findCirclesApplication*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int findCirclesApplication::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
