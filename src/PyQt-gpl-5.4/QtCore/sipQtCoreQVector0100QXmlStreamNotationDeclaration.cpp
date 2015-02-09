/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:21 2015
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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"

#line 257 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qxmlstream.sip"
#include <qxmlstream.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"


extern "C" {static void assign_QVector_0100QXmlStreamNotationDeclaration(void *, SIP_SSIZE_T, const void *);}
static void assign_QVector_0100QXmlStreamNotationDeclaration(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QVector<QXmlStreamNotationDeclaration> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QVector<QXmlStreamNotationDeclaration> *>(sipSrc);
}


extern "C" {static void *array_QVector_0100QXmlStreamNotationDeclaration(SIP_SSIZE_T);}
static void *array_QVector_0100QXmlStreamNotationDeclaration(SIP_SSIZE_T sipNrElem)
{
    return new QVector<QXmlStreamNotationDeclaration>[sipNrElem];
}


extern "C" {static void *copy_QVector_0100QXmlStreamNotationDeclaration(const void *, SIP_SSIZE_T);}
static void *copy_QVector_0100QXmlStreamNotationDeclaration(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QVector<QXmlStreamNotationDeclaration>(reinterpret_cast<const QVector<QXmlStreamNotationDeclaration> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QVector_0100QXmlStreamNotationDeclaration(void *, int);}
static void release_QVector_0100QXmlStreamNotationDeclaration(void *ptr, int)
{
    delete reinterpret_cast<QVector<QXmlStreamNotationDeclaration> *>(ptr);
}



extern "C" {static int convertTo_QVector_0100QXmlStreamNotationDeclaration(PyObject *, void **, int *, PyObject *);}
static int convertTo_QVector_0100QXmlStreamNotationDeclaration(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QVector<QXmlStreamNotationDeclaration> **sipCppPtr = reinterpret_cast<QVector<QXmlStreamNotationDeclaration> **>(sipCppPtrV);

#line 56 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qpycore_qvector.sip"
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

    QVector<QXmlStreamNotationDeclaration> *qv = new QVector<QXmlStreamNotationDeclaration>;
 
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
        QXmlStreamNotationDeclaration *t = reinterpret_cast<QXmlStreamNotationDeclaration *>(
                sipForceConvertToType(itm, sipType_QXmlStreamNotationDeclaration, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QXmlStreamNotationDeclaration' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete qv;
            Py_DECREF(iter);

            return 0;
        }

        qv->append(*t);

        sipReleaseType(t, sipType_QXmlStreamNotationDeclaration, state);
        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = qv;
 
    return sipGetState(sipTransferObj);
#line 142 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"
}


extern "C" {static PyObject *convertFrom_QVector_0100QXmlStreamNotationDeclaration(void *, PyObject *);}
static PyObject *convertFrom_QVector_0100QXmlStreamNotationDeclaration(void *sipCppV, PyObject *sipTransferObj)
{
   QVector<QXmlStreamNotationDeclaration> *sipCpp = reinterpret_cast<QVector<QXmlStreamNotationDeclaration> *>(sipCppV);

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qpycore_qvector.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QXmlStreamNotationDeclaration *t = new QXmlStreamNotationDeclaration(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QXmlStreamNotationDeclaration,
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
#line 175 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQVector0100QXmlStreamNotationDeclaration.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QVector_0100QXmlStreamNotationDeclaration = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_255,
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
    assign_QVector_0100QXmlStreamNotationDeclaration,
    array_QVector_0100QXmlStreamNotationDeclaration,
    copy_QVector_0100QXmlStreamNotationDeclaration,
    release_QVector_0100QXmlStreamNotationDeclaration,
    convertTo_QVector_0100QXmlStreamNotationDeclaration,
    convertFrom_QVector_0100QXmlStreamNotationDeclaration
};
