/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:24 2015
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

#include "sipAPIQtGui.h"

#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QTextLength.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QTextLength.cpp"


extern "C" {static void assign_QVector_0100QTextLength(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QTextLength(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QTextLength> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QTextLength> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QTextLength(SIP_SSIZE_T);}
static void *array_QVector_0100QTextLength(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QTextLength>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QTextLength(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QTextLength(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QTextLength>(reinterpret_cast<const QVector<QTextLength> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QTextLength(void *, int);}
static void release_QVector_0100QTextLength(void *ptr, int)
{
    delete reinterpret_cast<QVector<QTextLength> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QTextLength(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QTextLength(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QTextLength> **sipCppPtr = reinterpret_cast<QVector<QTextLength> **>(sipCppPtrV);

#line 56 "sip/QtCore/qpycore_qvector.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QVector<QTextLength> *qv = new QVector<QTextLength>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete qv;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QTextLength *t = reinterpret_cast<QTextLength *>(
                sipForceConvertToType(itm, sipType_QTextLength, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QTextLength' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QTextLength, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QTextLength.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QTextLength(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QTextLength(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QTextLength> *sipCpp = reinterpret_cast<QVector<QTextLength> *>(sipCppV);

#line 30 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QTextLength *t = new QTextLength(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QTextLength,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QTextLength.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QTextLength = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_9208,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QVector_0100QTextLength,
    array_QVector_0100QTextLength,
    copy_QVector_0100QTextLength,
    release_QVector_0100QTextLength,
    convertTo_QVector_0100QTextLength,
    convertFrom_QVector_0100QTextLength
};
