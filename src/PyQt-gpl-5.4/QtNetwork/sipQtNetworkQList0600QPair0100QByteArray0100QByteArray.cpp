/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:36 2015
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

#include "sipAPIQtNetwork.h"

#line 252 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp"

#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp"


extern "C" {static void assign_QList_0600QPair_0100QByteArray_0100QByteArray(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0600QPair_0100QByteArray_0100QByteArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QPair<QByteArray,QByteArray> > *>(sipSrc);
}


extern "C" {static void *array_QList_0600QPair_0100QByteArray_0100QByteArray(SIP_SSIZE_T);}
static void *array_QList_0600QPair_0100QByteArray_0100QByteArray(SIP_SSIZE_T sipNrElem)
{
    return new QList<QPair<QByteArray,QByteArray> >[sipNrElem];
}


extern "C" {static void *copy_QList_0600QPair_0100QByteArray_0100QByteArray(const void *, SIP_SSIZE_T);}
static void *copy_QList_0600QPair_0100QByteArray_0100QByteArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QPair<QByteArray,QByteArray> >(reinterpret_cast<const QList<QPair<QByteArray,QByteArray> > *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0600QPair_0100QByteArray_0100QByteArray(void *, int);}
static void release_QList_0600QPair_0100QByteArray_0100QByteArray(void *ptr, int)
{
    delete reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(ptr);
}



extern "C" {static int convertTo_QList_0600QPair_0100QByteArray_0100QByteArray(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0600QPair_0100QByteArray_0100QByteArray(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QPair<QByteArray,QByteArray> > **sipCppPtr = reinterpret_cast<QList<QPair<QByteArray,QByteArray> > **>(sipCppPtrV);

#line 286 "sip/QtCore/qpycore_qlist.sip"
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

    QList<QPair<QByteArray, QByteArray> > *ql = new QList<QPair<QByteArray, QByteArray> >;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *seq = PyIter_Next(iter);

        if (!seq)
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

        SIP_SSIZE_T sub_len;

        if (PySequence_Check(seq)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(seq)
#endif
                && !PyUnicode_Check(seq))
            sub_len = PySequence_Size(seq);
        else
            sub_len = -1;

        if (sub_len != 2)
        {
            if (sub_len < 0)
                PyErr_Format(PyExc_TypeError,
                        "index " SIP_SSIZE_T_FORMAT " has type '%s' but a 2 element non-string sequence is expected",
                        i, Py_TYPE(seq)->tp_name);
            else
                PyErr_Format(PyExc_TypeError,
                        "index " SIP_SSIZE_T_FORMAT " is a sequence of " SIP_SSIZE_T_FORMAT " sub-elements but 2 sub-elements are expected",
                        i, sub_len);

            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        PyObject *itm1 = PySequence_ITEM(seq, 0);

        if (!itm1)
        {
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        int state1;
        QByteArray *s1 = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(itm1, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &state1, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "the first sub-element of index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QByteArray' is expected",
                    i, Py_TYPE(itm1)->tp_name);

            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        PyObject *itm2 = PySequence_ITEM(seq, 1);

        if (!itm2)
        {
            sipReleaseType(s1, sipType_QByteArray, state1);
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);
            *sipIsErr = 1;

            return 0;
        }

        int state2;
        QByteArray *s2 = reinterpret_cast<QByteArray *>(
                sipForceConvertToType(itm2, sipType_QByteArray, sipTransferObj,
                        SIP_NOT_NONE, &state2, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "the second sub-element of index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QByteArray' is expected",
                    i, Py_TYPE(itm2)->tp_name);

            Py_DECREF(itm2);
            sipReleaseType(s1, sipType_QByteArray, state1);
            Py_DECREF(itm1);
            Py_DECREF(seq);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(QPair<QByteArray, QByteArray>(*s1, *s2));

        sipReleaseType(s2, sipType_QByteArray, state2);
        Py_DECREF(itm2);
        sipReleaseType(s1, sipType_QByteArray, state1);
        Py_DECREF(itm1);
        Py_DECREF(seq);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 224 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray(void *, PyObject *);}
static PyObject *convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QPair<QByteArray,QByteArray> > *sipCpp = reinterpret_cast<QList<QPair<QByteArray,QByteArray> > *>(sipCppV);

#line 257 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        const QPair<QByteArray, QByteArray> &p = sipCpp->at(i);
        QByteArray *s1 = new QByteArray(p.first);
        QByteArray *s2 = new QByteArray(p.second);
        PyObject *pobj = sipBuildResult(NULL, "(NN)", s1, sipType_QByteArray,
                sipTransferObj, s2, sipType_QByteArray, sipTransferObj);

        if (!pobj)
        {
            delete s1;
            delete s2;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, pobj);
    }

    return l;
#line 260 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQList0600QPair0100QByteArray0100QByteArray.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0600QPair_0100QByteArray_0100QByteArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_308,
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
    assign_QList_0600QPair_0100QByteArray_0100QByteArray,
    array_QList_0600QPair_0100QByteArray_0100QByteArray,
    copy_QList_0600QPair_0100QByteArray_0100QByteArray,
    release_QList_0600QPair_0100QByteArray_0100QByteArray,
    convertTo_QList_0600QPair_0100QByteArray_0100QByteArray,
    convertFrom_QList_0600QPair_0100QByteArray_0100QByteArray
};
