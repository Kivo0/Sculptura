/****************************************************************************
** Meta object code from reading C++ file 'camerapreview.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../camerapreview.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'camerapreview.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_CameraPreview_t {
    QByteArrayData data[8];
    char stringdata0[86];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CameraPreview_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CameraPreview_t qt_meta_stringdata_CameraPreview = {
    {
QT_MOC_LITERAL(0, 0, 13), // "CameraPreview"
QT_MOC_LITERAL(1, 14, 10), // "frameReady"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 5), // "frame"
QT_MOC_LITERAL(4, 32, 19), // "depthAndColorsReady"
QT_MOC_LITERAL(5, 52, 20), // "std::vector<cv::Mat>"
QT_MOC_LITERAL(6, 73, 5), // "depth"
QT_MOC_LITERAL(7, 79, 6) // "colors"

    },
    "CameraPreview\0frameReady\0\0frame\0"
    "depthAndColorsReady\0std::vector<cv::Mat>\0"
    "depth\0colors"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CameraPreview[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,
       4,    2,   27,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QImage,    3,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,

       0        // eod
};

void CameraPreview::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        CameraPreview *_t = static_cast<CameraPreview *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->frameReady((*reinterpret_cast< const QImage(*)>(_a[1]))); break;
        case 1: _t->depthAndColorsReady((*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[1])),(*reinterpret_cast< std::vector<cv::Mat>(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (CameraPreview::*_t)(const QImage & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraPreview::frameReady)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (CameraPreview::*_t)(std::vector<cv::Mat> , std::vector<cv::Mat> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&CameraPreview::depthAndColorsReady)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject CameraPreview::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_CameraPreview.data,
      qt_meta_data_CameraPreview,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *CameraPreview::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CameraPreview::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_CameraPreview.stringdata0))
        return static_cast<void*>(const_cast< CameraPreview*>(this));
    return QThread::qt_metacast(_clname);
}

int CameraPreview::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void CameraPreview::frameReady(const QImage & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CameraPreview::depthAndColorsReady(std::vector<cv::Mat> _t1, std::vector<cv::Mat> _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
