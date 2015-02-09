/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:44 2015
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

#include "sipAPIQtQml.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQml/qqmlerror.sip"
#include <qqmlerror.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlError.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlError.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlError.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQml/sipQtQmlQQmlError.cpp"


PyDoc_STRVAR(doc_QQmlError_isValid, "QQmlError.isValid() -> bool");

extern "C" {static PyObject *meth_QQmlError_isValid(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_isValid, doc_QQmlError_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_url, "QQmlError.url() -> QUrl");

extern "C" {static PyObject *meth_QQmlError_url(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_url, doc_QQmlError_url);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_setUrl, "QQmlError.setUrl(QUrl)");

extern "C" {static PyObject *meth_QQmlError_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QQmlError, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setUrl(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_setUrl, doc_QQmlError_setUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_description, "QQmlError.description() -> str");

extern "C" {static PyObject *meth_QQmlError_description(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_description, doc_QQmlError_description);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_setDescription, "QQmlError.setDescription(str)");

extern "C" {static PyObject *meth_QQmlError_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QQmlError, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDescription(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_setDescription, doc_QQmlError_setDescription);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_line, "QQmlError.line() -> int");

extern "C" {static PyObject *meth_QQmlError_line(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_line(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->line();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_line, doc_QQmlError_line);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_setLine, "QQmlError.setLine(int)");

extern "C" {static PyObject *meth_QQmlError_setLine(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_setLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QQmlError, &sipCpp, &a0))
        {
            sipCpp->setLine(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_setLine, doc_QQmlError_setLine);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_column, "QQmlError.column() -> int");

extern "C" {static PyObject *meth_QQmlError_column(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_column(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->column();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_column, doc_QQmlError_column);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_setColumn, "QQmlError.setColumn(int)");

extern "C" {static PyObject *meth_QQmlError_setColumn(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_setColumn(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QQmlError, &sipCpp, &a0))
        {
            sipCpp->setColumn(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_setColumn, doc_QQmlError_setColumn);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_toString, "QQmlError.toString() -> str");

extern "C" {static PyObject *meth_QQmlError_toString(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_toString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->toString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_toString, doc_QQmlError_toString);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_object, "QQmlError.object() -> QObject");

extern "C" {static PyObject *meth_QQmlError_object(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlError, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->object();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_object, doc_QQmlError_object);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlError_setObject, "QQmlError.setObject(QObject)");

extern "C" {static PyObject *meth_QQmlError_setObject(PyObject *, PyObject *);}
static PyObject *meth_QQmlError_setObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QObject* a0;
        QQmlError *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QQmlError, &sipCpp, sipType_QObject, &a0))
        {
            sipCpp->setObject(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlError, sipName_setObject, doc_QQmlError_setObject);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlError(void *, const sipTypeDef *);}
static void *cast_QQmlError(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlError)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlError(void *, int);}
static void release_QQmlError(void *sipCppV,int)
{
    delete reinterpret_cast<QQmlError *>(sipCppV);
}


extern "C" {static void assign_QQmlError(void *, SIP_SSIZE_T, const void *);}
static void assign_QQmlError(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QQmlError *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QQmlError *>(sipSrc);
}


extern "C" {static void *array_QQmlError(SIP_SSIZE_T);}
static void *array_QQmlError(SIP_SSIZE_T sipNrElem)
{
    return new QQmlError[sipNrElem];
}


extern "C" {static void *copy_QQmlError(const void *, SIP_SSIZE_T);}
static void *copy_QQmlError(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QQmlError(reinterpret_cast<const QQmlError *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QQmlError(sipSimpleWrapper *);}
static void dealloc_QQmlError(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlError(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QQmlError(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlError(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QQmlError *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QQmlError();

            return sipCpp;
        }
    }

    {
        const QQmlError* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlError, &a0))
        {
            sipCpp = new QQmlError(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlError[] = {
    {SIP_MLNAME_CAST(sipName_column), meth_QQmlError_column, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_column)},
    {SIP_MLNAME_CAST(sipName_description), meth_QQmlError_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_description)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QQmlError_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_isValid)},
    {SIP_MLNAME_CAST(sipName_line), meth_QQmlError_line, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_line)},
    {SIP_MLNAME_CAST(sipName_object), meth_QQmlError_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_object)},
    {SIP_MLNAME_CAST(sipName_setColumn), meth_QQmlError_setColumn, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_setColumn)},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QQmlError_setDescription, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_setDescription)},
    {SIP_MLNAME_CAST(sipName_setLine), meth_QQmlError_setLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_setLine)},
    {SIP_MLNAME_CAST(sipName_setObject), meth_QQmlError_setObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_setObject)},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QQmlError_setUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_setUrl)},
    {SIP_MLNAME_CAST(sipName_toString), meth_QQmlError_toString, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_toString)},
    {SIP_MLNAME_CAST(sipName_url), meth_QQmlError_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlError_url)}
};

PyDoc_STRVAR(doc_QQmlError, "\1QQmlError()\n"
    "QQmlError(QQmlError)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlError = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlError,
        {0}
    },
    {
        sipNameNr_QQmlError,
        {0, 0, 1},
        12, methods_QQmlError,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlError,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlError,
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
    dealloc_QQmlError,
    assign_QQmlError,
    array_QQmlError,
    copy_QQmlError,
    release_QQmlError,
    cast_QQmlError,
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
