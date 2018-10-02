/****************************************************************************
** Meta object code from reading C++ file 'Welcome.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Views/Welcome.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Welcome.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Welcome_t {
    QByteArrayData data[9];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Welcome_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Welcome_t qt_meta_stringdata_Welcome = {
    {
QT_MOC_LITERAL(0, 0, 7), // "Welcome"
QT_MOC_LITERAL(1, 8, 10), // "BtnClicked"
QT_MOC_LITERAL(2, 19, 14), // "eWelcomeButton"
QT_MOC_LITERAL(3, 34, 0), // ""
QT_MOC_LITERAL(4, 35, 3), // "btn"
QT_MOC_LITERAL(5, 39, 26), // "on_pBtSinglePlayer_clicked"
QT_MOC_LITERAL(6, 66, 23), // "on_pBtTwoPlayer_clicked"
QT_MOC_LITERAL(7, 90, 24), // "on_pBtPlayOnline_clicked"
QT_MOC_LITERAL(8, 115, 24) // "on_pBtReplayMode_clicked"

    },
    "Welcome\0BtnClicked\0eWelcomeButton\0\0"
    "btn\0on_pBtSinglePlayer_clicked\0"
    "on_pBtTwoPlayer_clicked\0"
    "on_pBtPlayOnline_clicked\0"
    "on_pBtReplayMode_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Welcome[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   42,    3, 0x08 /* Private */,
       6,    0,   43,    3, 0x08 /* Private */,
       7,    0,   44,    3, 0x08 /* Private */,
       8,    0,   45,    3, 0x08 /* Private */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 2,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Welcome::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Welcome *_t = static_cast<Welcome *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { eWelcomeButton _r = _t->BtnClicked((*reinterpret_cast< eWelcomeButton(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< eWelcomeButton*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pBtSinglePlayer_clicked(); break;
        case 2: _t->on_pBtTwoPlayer_clicked(); break;
        case 3: _t->on_pBtPlayOnline_clicked(); break;
        case 4: _t->on_pBtReplayMode_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef eWelcomeButton (Welcome::*_t)(eWelcomeButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Welcome::BtnClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject Welcome::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Welcome.data,
      qt_meta_data_Welcome,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Welcome::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Welcome::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Welcome.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Welcome::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
eWelcomeButton Welcome::BtnClicked(eWelcomeButton _t1)
{
    eWelcomeButton _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
