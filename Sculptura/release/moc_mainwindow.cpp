/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[18];
    char stringdata0[326];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 11), // "renderFrame"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 5), // "frame"
QT_MOC_LITERAL(4, 30, 15), // "savePointClouds"
QT_MOC_LITERAL(5, 46, 29), // "std::vector<PointCloudT::Ptr>"
QT_MOC_LITERAL(6, 76, 11), // "pointClouds"
QT_MOC_LITERAL(7, 88, 20), // "saveDepthAndColorMat"
QT_MOC_LITERAL(8, 109, 20), // "std::vector<cv::Mat>"
QT_MOC_LITERAL(9, 130, 5), // "depth"
QT_MOC_LITERAL(10, 136, 6), // "colors"
QT_MOC_LITERAL(11, 143, 28), // "on_advanced_scanning_clicked"
QT_MOC_LITERAL(12, 172, 24), // "on_start_preview_clicked"
QT_MOC_LITERAL(13, 197, 25), // "on_start_scanning_clicked"
QT_MOC_LITERAL(14, 223, 35), // "on_actionOpen_PointClouds_tri..."
QT_MOC_LITERAL(15, 259, 27), // "on_deletePointCloud_clicked"
QT_MOC_LITERAL(16, 287, 32), // "on_listPointClouds_doubleClicked"
QT_MOC_LITERAL(17, 320, 5) // "index"

    },
    "MainWindow\0renderFrame\0\0frame\0"
    "savePointClouds\0std::vector<PointCloudT::Ptr>\0"
    "pointClouds\0saveDepthAndColorMat\0"
    "std::vector<cv::Mat>\0depth\0colors\0"
    "on_advanced_scanning_clicked\0"
    "on_start_preview_clicked\0"
    "on_start_scanning_clicked\0"
    "on_actionOpen_PointClouds_triggered\0"
    "on_deletePointCloud_clicked\0"
    "on_listPointClouds_doubleClicked\0index"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    1,   62,    2, 0x08 /* Private */,
       7,    2,   65,    2, 0x08 /* Private */,
      11,    0,   70,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,
      13,    0,   72,    2, 0x08 /* Private */,
      14,    0,   73,    2, 0x08 /* Private */,
      15,    0,   74,    2, 0x08 /* Private */,
      16,    1,   75,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8, 0x80000000 | 8,    9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QModelIndex,   17,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renderFrame((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 1: _t->savePointClouds((*reinterpret_cast< std::vector<PointCloudT::Ptr>(*)>(_a[1]))); break;
        case 2: _t->saveDepthAndColorMat((*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[1])),(*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[2]))); break;
        case 3: _t->on_advanced_scanning_clicked(); break;
        case 4: _t->on_start_preview_clicked(); break;
        case 5: _t->on_start_scanning_clicked(); break;
        case 6: _t->on_actionOpen_PointClouds_triggered(); break;
        case 7: _t->on_deletePointCloud_clicked(); break;
        case 8: _t->on_listPointClouds_doubleClicked((*reinterpret_cast< const QModelIndex(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(const_cast< MainWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
QT_END_MOC_NAMESPACE
