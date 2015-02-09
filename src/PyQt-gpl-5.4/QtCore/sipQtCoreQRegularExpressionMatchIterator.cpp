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

#line 180 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"
#line 149 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQRegularExpressionMatchIterator.cpp"


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_swap, "QRegularExpressionMatchIterator.swap(QRegularExpressionMatchIterator)");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpressionMatchIterator* a0;
        QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp, sipType_QRegularExpressionMatchIterator, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_swap, doc_QRegularExpressionMatchIterator_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_isValid, "QRegularExpressionMatchIterator.isValid() -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_isValid, doc_QRegularExpressionMatchIterator_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_hasNext, "QRegularExpressionMatchIterator.hasNext() -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_hasNext(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_hasNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasNext();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_hasNext, doc_QRegularExpressionMatchIterator_hasNext);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_next, "QRegularExpressionMatchIterator.next() -> QRegularExpressionMatch");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_next(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_next(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            QRegularExpressionMatch*sipRes;

            sipRes = new QRegularExpressionMatch(sipCpp->next());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatch,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_next, doc_QRegularExpressionMatchIterator_next);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_peekNext, "QRegularExpressionMatchIterator.peekNext() -> QRegularExpressionMatch");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_peekNext(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_peekNext(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            QRegularExpressionMatch*sipRes;

            sipRes = new QRegularExpressionMatch(sipCpp->peekNext());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpressionMatch,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_peekNext, doc_QRegularExpressionMatchIterator_peekNext);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_regularExpression, "QRegularExpressionMatchIterator.regularExpression() -> QRegularExpression");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_regularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_regularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            QRegularExpression*sipRes;

            sipRes = new QRegularExpression(sipCpp->regularExpression());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_regularExpression, doc_QRegularExpressionMatchIterator_regularExpression);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_matchType, "QRegularExpressionMatchIterator.matchType() -> QRegularExpression.MatchType");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_matchType(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_matchType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            QRegularExpression::MatchType sipRes;

            sipRes = sipCpp->matchType();

            return sipConvertFromEnum(sipRes,sipType_QRegularExpression_MatchType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_matchType, doc_QRegularExpressionMatchIterator_matchType);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatchIterator_matchOptions, "QRegularExpressionMatchIterator.matchOptions() -> QRegularExpression.MatchOptions");

extern "C" {static PyObject *meth_QRegularExpressionMatchIterator_matchOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatchIterator_matchOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatchIterator *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatchIterator, &sipCpp))
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions(sipCpp->matchOptions());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatchIterator, sipName_matchOptions, doc_QRegularExpressionMatchIterator_matchOptions);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRegularExpressionMatchIterator(void *, const sipTypeDef *);}
static void *cast_QRegularExpressionMatchIterator(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QRegularExpressionMatchIterator)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpressionMatchIterator(void *, int);}
static void release_QRegularExpressionMatchIterator(void *sipCppV,int)
{
    delete reinterpret_cast<QRegularExpressionMatchIterator *>(sipCppV);
}


extern "C" {static void assign_QRegularExpressionMatchIterator(void *, SIP_SSIZE_T, const void *);}
static void assign_QRegularExpressionMatchIterator(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRegularExpressionMatchIterator *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRegularExpressionMatchIterator *>(sipSrc);
}


extern "C" {static void *array_QRegularExpressionMatchIterator(SIP_SSIZE_T);}
static void *array_QRegularExpressionMatchIterator(SIP_SSIZE_T sipNrElem)
{
    return new QRegularExpressionMatchIterator[sipNrElem];
}


extern "C" {static void *copy_QRegularExpressionMatchIterator(const void *, SIP_SSIZE_T);}
static void *copy_QRegularExpressionMatchIterator(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRegularExpressionMatchIterator(reinterpret_cast<const QRegularExpressionMatchIterator *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpressionMatchIterator(sipSimpleWrapper *);}
static void dealloc_QRegularExpressionMatchIterator(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRegularExpressionMatchIterator(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRegularExpressionMatchIterator(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpressionMatchIterator(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRegularExpressionMatchIterator *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QRegularExpressionMatchIterator();

            return sipCpp;
        }
    }

    {
        const QRegularExpressionMatchIterator* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegularExpressionMatchIterator, &a0))
        {
            sipCpp = new QRegularExpressionMatchIterator(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QRegularExpressionMatchIterator[] = {
    {SIP_MLNAME_CAST(sipName_hasNext), meth_QRegularExpressionMatchIterator_hasNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_hasNext)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QRegularExpressionMatchIterator_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_isValid)},
    {SIP_MLNAME_CAST(sipName_matchOptions), meth_QRegularExpressionMatchIterator_matchOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_matchOptions)},
    {SIP_MLNAME_CAST(sipName_matchType), meth_QRegularExpressionMatchIterator_matchType, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_matchType)},
    {SIP_MLNAME_CAST(sipName_next), meth_QRegularExpressionMatchIterator_next, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_next)},
    {SIP_MLNAME_CAST(sipName_peekNext), meth_QRegularExpressionMatchIterator_peekNext, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_peekNext)},
    {SIP_MLNAME_CAST(sipName_regularExpression), meth_QRegularExpressionMatchIterator_regularExpression, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_regularExpression)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRegularExpressionMatchIterator_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatchIterator_swap)}
};

PyDoc_STRVAR(doc_QRegularExpressionMatchIterator, "\1QRegularExpressionMatchIterator()\n"
    "QRegularExpressionMatchIterator(QRegularExpressionMatchIterator)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QRegularExpressionMatchIterator = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpressionMatchIterator,
        {0}
    },
    {
        sipNameNr_QRegularExpressionMatchIterator,
        {0, 0, 1},
        8, methods_QRegularExpressionMatchIterator,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpressionMatchIterator,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QRegularExpressionMatchIterator,
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
    dealloc_QRegularExpressionMatchIterator,
    assign_QRegularExpressionMatchIterator,
    array_QRegularExpressionMatchIterator,
    copy_QRegularExpressionMatchIterator,
    release_QRegularExpressionMatchIterator,
    cast_QRegularExpressionMatchIterator,
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
