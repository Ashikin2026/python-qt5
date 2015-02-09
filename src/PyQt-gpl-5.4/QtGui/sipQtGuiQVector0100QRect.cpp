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
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QRect.cpp"

#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QRect.cpp"


extern "C" {static void assign_QVector_0100QRect(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QRect(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QRect> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QRect> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QRect(SIP_SSIZE_T);}
static void *array_QVector_0100QRect(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QRect>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QRect(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QRect(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QRect>(reinterpret_cast<const QVector<QRect> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QRect(void *, int);}
static void release_QVector_0100QRect(void *ptr, int)
{
    delete reinterpret_cast<QVector<QRect> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QRect(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QRect(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QRect> **sipCppPtr = reinterpret_cast<QVector<QRect> **>(sipCppPtrV);

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

    QVector<QRect> *qv = new QVector<QRect>;
 
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
        QRect *t = reinterpret_cast<QRect *>(
                sipForceConvertToType(itm, sipType_QRect, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QRect' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QRect, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QRect.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QRect(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QRect(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QRect> *sipCpp = reinterpret_cast<QVector<QRect> *>(sipCppV);

#line 30 "sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QRect *t = new QRect(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QRect,
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
#line 175 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQVector0100QRect.cpp"
}


sipMappedTypeDef sipTypeDef_QtGui_QVector_0100QRect = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_21989,
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
    assign_QVector_0100QRect,
    array_QVector_0100QRect,
    copy_QVector_0100QRect,
    release_QVector_0100QRect,
    convertTo_QVector_0100QRect,
    convertFrom_QVector_0100QRect
};
