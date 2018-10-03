/****************************************************************************
** Meta object code from reading C++ file 'TwoPlayer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Views/TwoPlayer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TwoPlayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TwoPlayer_t {
    QByteArrayData data[10];
    char stringdata0[148];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TwoPlayer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TwoPlayer_t qt_meta_stringdata_TwoPlayer = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TwoPlayer"
QT_MOC_LITERAL(1, 10, 10), // "BtnClicked"
QT_MOC_LITERAL(2, 21, 16), // "eTwoPlayerButton"
QT_MOC_LITERAL(3, 38, 0), // ""
QT_MOC_LITERAL(4, 39, 3), // "btn"
QT_MOC_LITERAL(5, 43, 18), // "on_pBtBack_clicked"
QT_MOC_LITERAL(6, 62, 19), // "on_pBtLogin_clicked"
QT_MOC_LITERAL(7, 82, 20), // "on_pBtSignin_clicked"
QT_MOC_LITERAL(8, 103, 21), // "on_pBtLogin_2_clicked"
QT_MOC_LITERAL(9, 125, 22) // "on_pBtSignin_2_clicked"

    },
    "TwoPlayer\0BtnClicked\0eTwoPlayerButton\0"
    "\0btn\0on_pBtBack_clicked\0on_pBtLogin_clicked\0"
    "on_pBtSignin_clicked\0on_pBtLogin_2_clicked\0"
    "on_pBtSignin_2_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TwoPlayer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    3, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    3, 0x08 /* Private */,
       6,    0,   48,    3, 0x08 /* Private */,
       7,    0,   49,    3, 0x08 /* Private */,
       8,    0,   50,    3, 0x08 /* Private */,
       9,    0,   51,    3, 0x08 /* Private */,

 // signals: parameters
    0x80000000 | 2, 0x80000000 | 2,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TwoPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        TwoPlayer *_t = static_cast<TwoPlayer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { eTwoPlayerButton _r = _t->BtnClicked((*reinterpret_cast< eTwoPlayerButton(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< eTwoPlayerButton*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->on_pBtBack_clicked(); break;
        case 2: _t->on_pBtLogin_clicked(); break;
        case 3: _t->on_pBtSignin_clicked(); break;
        case 4: _t->on_pBtLogin_2_clicked(); break;
        case 5: _t->on_pBtSignin_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef eTwoPlayerButton (TwoPlayer::*_t)(eTwoPlayerButton );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TwoPlayer::BtnClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject TwoPlayer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_TwoPlayer.data,
      qt_meta_data_TwoPlayer,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *TwoPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TwoPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TwoPlayer.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TwoPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
eTwoPlayerButton TwoPlayer::BtnClicked(eTwoPlayerButton _t1)
{
    eTwoPlayerButton _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(&_t0)), const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
    return _t0;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
