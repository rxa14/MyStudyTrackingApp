/****************************************************************************
** Meta object code from reading C++ file 'todo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../src/core/todo/todo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'todo.h' doesn't include <QObject>."
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
struct qt_meta_tag_ZN8TodoItemE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN8TodoItemE = QtMocHelpers::stringData(
    "TodoItem",
    "titleChanged",
    "",
    "descriptionChanged",
    "dueDateChanged",
    "completedChanged",
    "priorityChanged",
    "idChanged",
    "title",
    "description",
    "dueDate",
    "completed",
    "priority",
    "Priority",
    "id",
    "Low",
    "Medium",
    "High"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN8TodoItemE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       6,   56, // properties
       1,   86, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    8 /* Public */,
       3,    0,   51,    2, 0x06,    9 /* Public */,
       4,    0,   52,    2, 0x06,   10 /* Public */,
       5,    0,   53,    2, 0x06,   11 /* Public */,
       6,    0,   54,    2, 0x06,   12 /* Public */,
       7,    0,   55,    2, 0x06,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015103, uint(0), 0,
       9, QMetaType::QString, 0x00015103, uint(1), 0,
      10, QMetaType::QDateTime, 0x00015103, uint(2), 0,
      11, QMetaType::Bool, 0x00015103, uint(3), 0,
      12, 0x80000000 | 13, 0x0001510b, uint(4), 0,
      14, QMetaType::Int, 0x00015103, uint(5), 0,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   91,

 // enum data: key, value
      15, uint(TodoItem::Low),
      16, uint(TodoItem::Medium),
      17, uint(TodoItem::High),

       0        // eod
};

Q_CONSTINIT const QMetaObject TodoItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN8TodoItemE.offsetsAndSizes,
    qt_meta_data_ZN8TodoItemE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN8TodoItemE_t,
        // property 'title'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'description'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'dueDate'
        QtPrivate::TypeAndForceComplete<QDateTime, std::true_type>,
        // property 'completed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'priority'
        QtPrivate::TypeAndForceComplete<Priority, std::true_type>,
        // property 'id'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // enum 'Priority'
        QtPrivate::TypeAndForceComplete<TodoItem::Priority, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TodoItem, std::true_type>,
        // method 'titleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'descriptionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dueDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'completedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'priorityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'idChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TodoItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<TodoItem *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->titleChanged(); break;
        case 1: _t->descriptionChanged(); break;
        case 2: _t->dueDateChanged(); break;
        case 3: _t->completedChanged(); break;
        case 4: _t->priorityChanged(); break;
        case 5: _t->idChanged(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::titleChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::descriptionChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::dueDateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::completedChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::priorityChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (TodoItem::*)();
            if (_q_method_type _q_method = &TodoItem::idChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->title(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->description(); break;
        case 2: *reinterpret_cast< QDateTime*>(_v) = _t->dueDate(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->completed(); break;
        case 4: *reinterpret_cast< Priority*>(_v) = _t->priority(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->id(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTitle(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setDescription(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setDueDate(*reinterpret_cast< QDateTime*>(_v)); break;
        case 3: _t->setCompleted(*reinterpret_cast< bool*>(_v)); break;
        case 4: _t->setPriority(*reinterpret_cast< Priority*>(_v)); break;
        case 5: _t->setId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *TodoItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TodoItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN8TodoItemE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int TodoItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TodoItem::titleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TodoItem::descriptionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TodoItem::dueDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void TodoItem::completedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void TodoItem::priorityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void TodoItem::idChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
