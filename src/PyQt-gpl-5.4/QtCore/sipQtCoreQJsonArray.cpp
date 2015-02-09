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

#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsonarray.sip"
#include <qjsonarray.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonArray.cpp"



extern "C" {static void assign_QJsonArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QJsonArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QJsonArray *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QJsonArray *>(sipSrc);
}


extern "C" {static void *array_QJsonArray(SIP_SSIZE_T);}
static void *array_QJsonArray(SIP_SSIZE_T sipNrElem)
{
    return new QJsonArray[sipNrElem];
}


extern "C" {static void *copy_QJsonArray(const void *, SIP_SSIZE_T);}
static void *copy_QJsonArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QJsonArray(reinterpret_cast<const QJsonArray *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QJsonArray(void *, int);}
static void release_QJsonArray(void *ptr, int)
{
    delete reinterpret_cast<QJsonArray *>(ptr);
}



extern "C" {static int convertTo_QJsonArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QJsonArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QJsonArray **sipCppPtr = reinterpret_cast<QJsonArray **>(sipCppPtrV);

#line 59 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsonarray.sip"
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

    QJsonArray *ql = new QJsonArray;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QJsonValue *t = reinterpret_cast<QJsonValue *>(
                sipForceConvertToType(itm, sipType_QJsonValue, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QJsonValue' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QJsonValue, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 139 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonArray.cpp"
}


extern "C" {static PyObject *convertFrom_QJsonArray(void *, PyObject *);}
static PyObject *convertFrom_QJsonArray(void *sipCppV, PyObject *sipTransferObj)
{
   QJsonArray *sipCpp = reinterpret_cast<QJsonArray *>(sipCppV);

#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsonarray.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QJsonValue *t = new QJsonValue(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QJsonValue,
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
#line 172 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QJsonArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_QJsonArray,
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
    assign_QJsonArray,
    array_QJsonArray,
    copy_QJsonArray,
    release_QJsonArray,
    convertTo_QJsonArray,
    convertFrom_QJsonArray
};
