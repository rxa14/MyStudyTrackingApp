/****************************************************************************
** Meta object code from reading C++ file 'streaksmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/streaks/streaksmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'streaksmanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN14streaksManagerE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN14streaksManagerE = QtMocHelpers::stringData(
    "streaksManager",
    "streakAdded",
    "",
    "streakRemoved",
    "streakUpdated",
    "totalStreaksChanged",
    "activeStreaksChanged",
    "closeStreaksView",
    "addStreak",
    "title",
    "removeStreak",
    "index",
    "incrementStreak",
    "resetStreak",
    "count",
    "killStreaksView",
    "totalStreaks",
    "activeStreaks"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN14streaksManagerE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       2,  106, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,    3 /* Public */,
       3,    0,   87,    2, 0x06,    4 /* Public */,
       4,    0,   88,    2, 0x06,    5 /* Public */,
       5,    0,   89,    2, 0x06,    6 /* Public */,
       6,    0,   90,    2, 0x06,    7 /* Public */,
       7,    0,   91,    2, 0x06,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   92,    2, 0x02,    9 /* Public */,
      10,    1,   95,    2, 0x02,   11 /* Public */,
      12,    1,   98,    2, 0x02,   13 /* Public */,
      13,    1,  101,    2, 0x02,   15 /* Public */,
      14,    0,  104,    2, 0x102,   17 /* Public | MethodIsConst  */,
      15,    0,  105,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Int,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      16, QMetaType::Int, 0x00015001, uint(3), 0,
      17, QMetaType::Int, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject streaksManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_ZN14streaksManagerE.offsetsAndSizes,
    qt_meta_data_ZN14streaksManagerE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN14streaksManagerE_t,
        // property 'totalStreaks'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'activeStreaks'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<streaksManager, std::true_type>,
        // method 'streakAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streakRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'streakUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalStreaksChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeStreaksChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeStreaksView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addStreak'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'removeStreak'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'incrementStreak'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resetStreak'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'count'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'killStreaksView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void streaksManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<streaksManager *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->streakAdded(); break;
        case 1: _t->streakRemoved(); break;
        case 2: _t->streakUpdated(); break;
        case 3: _t->totalStreaksChanged(); break;
        case 4: _t->activeStreaksChanged(); break;
        case 5: _t->closeStreaksView(); break;
        case 6: _t->addStreak((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->removeStreak((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->incrementStreak((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->resetStreak((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: { int _r = _t->count();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->killStreaksView(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::streakAdded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::streakRemoved; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::streakUpdated; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::totalStreaksChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::activeStreaksChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (streaksManager::*)();
            if (_q_method_type _q_method = &streaksManager::closeStreaksView; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->totalStreaks(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->activeStreaks(); break;
        default: break;
        }
    }
}

const QMetaObject *streaksManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *streaksManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN14streaksManagerE.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int streaksManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void streaksManager::streakAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void streaksManager::streakRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void streaksManager::streakUpdated()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void streaksManager::totalStreaksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void streaksManager::activeStreaksChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void streaksManager::closeStreaksView()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
