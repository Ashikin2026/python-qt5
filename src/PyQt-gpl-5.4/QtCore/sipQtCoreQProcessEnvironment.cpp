/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:22 2015
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtCore.h"

#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qprocess.sip"
#include <qprocess.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQProcessEnvironment.cpp"

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQProcessEnvironment.cpp"
#line 27 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQProcessEnvironment.cpp"


PyDoc_STRVAR(doc_QProcessEnvironment_isEmpty, "QProcessEnvironment.isEmpty() -> bool");

extern "C" {static PyObject *meth_QProcessEnvironment_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_isEmpty, doc_QProcessEnvironment_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_clear, "QProcessEnvironment.clear()");

extern "C" {static PyObject *meth_QProcessEnvironment_clear(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_clear, doc_QProcessEnvironment_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_contains, "QProcessEnvironment.contains(str) -> bool");

extern "C" {static PyObject *meth_QProcessEnvironment_contains(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_contains(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->contains(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_contains, doc_QProcessEnvironment_contains);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_insert, "QProcessEnvironment.insert(str, str)\n"
    "QProcessEnvironment.insert(QProcessEnvironment)");

extern "C" {static PyObject *meth_QProcessEnvironment_insert(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_insert(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            sipCpp->insert(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QProcessEnvironment* a0;
        QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QProcessEnvironment, &a0))
        {
            sipCpp->insert(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_insert, doc_QProcessEnvironment_insert);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_remove, "QProcessEnvironment.remove(str)");

extern "C" {static PyObject *meth_QProcessEnvironment_remove(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_remove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->remove(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_remove, doc_QProcessEnvironment_remove);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_value, "QProcessEnvironment.value(str, str defaultValue='') -> str");

extern "C" {static PyObject *meth_QProcessEnvironment_value(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_value(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QProcessEnvironment *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|J1", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->value(*a0,*a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_value, doc_QProcessEnvironment_value);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_toStringList, "QProcessEnvironment.toStringList() -> list-of-str");

extern "C" {static PyObject *meth_QProcessEnvironment_toStringList(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_toStringList(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->toStringList());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_toStringList, doc_QProcessEnvironment_toStringList);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_systemEnvironment, "QProcessEnvironment.systemEnvironment() -> QProcessEnvironment");

extern "C" {static PyObject *meth_QProcessEnvironment_systemEnvironment(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_systemEnvironment(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QProcessEnvironment*sipRes;

            sipRes = new QProcessEnvironment(QProcessEnvironment::systemEnvironment());

            return sipConvertFromNewType(sipRes,sipType_QProcessEnvironment,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_systemEnvironment, doc_QProcessEnvironment_systemEnvironment);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_keys, "QProcessEnvironment.keys() -> list-of-str");

extern "C" {static PyObject *meth_QProcessEnvironment_keys(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_keys(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QProcessEnvironment, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->keys());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_keys, doc_QProcessEnvironment_keys);

    return NULL;
}


PyDoc_STRVAR(doc_QProcessEnvironment_swap, "QProcessEnvironment.swap(QProcessEnvironment)");

extern "C" {static PyObject *meth_QProcessEnvironment_swap(PyObject *, PyObject *);}
static PyObject *meth_QProcessEnvironment_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QProcessEnvironment* a0;
        QProcessEnvironment *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QProcessEnvironment, &sipCpp, sipType_QProcessEnvironment, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QProcessEnvironment, sipName_swap, doc_QProcessEnvironment_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QProcessEnvironment___ne__(PyObject *,PyObject *);}
static PyObject *slot_QProcessEnvironment___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QProcessEnvironment *sipCpp = reinterpret_cast<QProcessEnvironment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QProcessEnvironment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QProcessEnvironment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QProcessEnvironment, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QProcessEnvironment::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QProcessEnvironment,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QProcessEnvironment___eq__(PyObject *,PyObject *);}
static PyObject *slot_QProcessEnvironment___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QProcessEnvironment *sipCpp = reinterpret_cast<QProcessEnvironment *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QProcessEnvironment));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QProcessEnvironment* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QProcessEnvironment, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QProcessEnvironment::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QProcessEnvironment,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QProcessEnvironment(void *, const sipTypeDef *);}
static void *cast_QProcessEnvironment(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QProcessEnvironment)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QProcessEnvironment(void *, int);}
static void release_QProcessEnvironment(void *sipCppV,int)
{
    delete reinterpret_cast<QProcessEnvironment *>(sipCppV);
}


extern "C" {static void assign_QProcessEnvironment(void *, SIP_SSIZE_T, const void *);}
static void assign_QProcessEnvironment(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QProcessEnvironment *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QProcessEnvironment *>(sipSrc);
}


extern "C" {static void *array_QProcessEnvironment(SIP_SSIZE_T);}
static void *array_QProcessEnvironment(SIP_SSIZE_T sipNrElem)
{
    return new QProcessEnvironment[sipNrElem];
}


extern "C" {static void *copy_QProcessEnvironment(const void *, SIP_SSIZE_T);}
static void *copy_QProcessEnvironment(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QProcessEnvironment(reinterpret_cast<const QProcessEnvironment *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QProcessEnvironment(sipSimpleWrapper *);}
static void dealloc_QProcessEnvironment(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QProcessEnvironment(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QProcessEnvironment(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QProcessEnvironment(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QProcessEnvironment *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QProcessEnvironment();

            return sipCpp;
        }
    }

    {
        const QProcessEnvironment* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QProcessEnvironment, &a0))
        {
            sipCpp = new QProcessEnvironment(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QProcessEnvironment[] = {
    {(void *)slot_QProcessEnvironment___ne__, ne_slot},
    {(void *)slot_QProcessEnvironment___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QProcessEnvironment[] = {
    {SIP_MLNAME_CAST(sipName_clear), meth_QProcessEnvironment_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_clear)},
    {SIP_MLNAME_CAST(sipName_contains), meth_QProcessEnvironment_contains, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_contains)},
    {SIP_MLNAME_CAST(sipName_insert), meth_QProcessEnvironment_insert, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_insert)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QProcessEnvironment_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_isEmpty)},
    {SIP_MLNAME_CAST(sipName_keys), meth_QProcessEnvironment_keys, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_keys)},
    {SIP_MLNAME_CAST(sipName_remove), meth_QProcessEnvironment_remove, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_remove)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QProcessEnvironment_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_swap)},
    {SIP_MLNAME_CAST(sipName_systemEnvironment), meth_QProcessEnvironment_systemEnvironment, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_systemEnvironment)},
    {SIP_MLNAME_CAST(sipName_toStringList), meth_QProcessEnvironment_toStringList, METH_VARARGS, SIP_MLDOC_CAST(doc_QProcessEnvironment_toStringList)},
    {SIP_MLNAME_CAST(sipName_value), (PyCFunction)meth_QProcessEnvironment_value, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QProcessEnvironment_value)}
};

PyDoc_STRVAR(doc_QProcessEnvironment, "\1QProcessEnvironment()\n"
    "QProcessEnvironment(QProcessEnvironment)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QProcessEnvironment = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QProcessEnvironment,
        {0}
    },
    {
        sipNameNr_QProcessEnvironment,
        {0, 0, 1},
        10, methods_QProcessEnvironment,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QProcessEnvironment,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QProcessEnvironment,
    init_type_QProcessEnvironment,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QProcessEnvironment,
    assign_QProcessEnvironment,
    array_QProcessEnvironment,
    copy_QProcessEnvironment,
    release_QProcessEnvironment,
    cast_QProcessEnvironment,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
