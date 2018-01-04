/****************************************************************************
** Meta object code from reading C++ file 'read_point_clouds.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../read_point_clouds.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'read_point_clouds.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_ReadPointClouds_t {
    QByteArrayData data[5];
    char stringdata0[76];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadPointClouds_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadPointClouds_t qt_meta_stringdata_ReadPointClouds = {
    {
QT_MOC_LITERAL(0, 0, 15), // "ReadPointClouds"
QT_MOC_LITERAL(1, 16, 16), // "pointCloudsReady"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 29), // "std::vector<PointCloudT::Ptr>"
QT_MOC_LITERAL(4, 64, 11) // "pointClouds"

    },
    "ReadPointClouds\0pointCloudsReady\0\0"
    "std::vector<PointCloudT::Ptr>\0pointClouds"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadPointClouds[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void ReadPointClouds::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadPointClouds *_t = static_cast<ReadPointClouds *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->pointCloudsReady((*reinterpret_cast< std::vector<PointCloudT::Ptr>(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (ReadPointClouds::*_t)(std::vector<PointCloudT::Ptr> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&ReadPointClouds::pointCloudsReady)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject ReadPointClouds::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_ReadPointClouds.data,
      qt_meta_data_ReadPointClouds,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadPointClouds::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadPointClouds::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadPointClouds.stringdata0))
        return static_cast<void*>(const_cast< ReadPointClouds*>(this));
    return QThread::qt_metacast(_clname);
}

int ReadPointClouds::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void ReadPointClouds::pointCloudsReady(std::vector<PointCloudT::Ptr> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
