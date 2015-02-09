/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:23 2015
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

#include "sipAPIQtBluetooth.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtBluetooth/qbluetoothhostinfo.sip"
#include <qbluetoothhostinfo.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtBluetooth/sipQtBluetoothQBluetoothHostInfo.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtBluetooth/sipQtBluetoothQBluetoothHostInfo.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtBluetooth/qbluetoothaddress.sip"
#include <qbluetoothaddress.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtBluetooth/sipQtBluetoothQBluetoothHostInfo.cpp"


PyDoc_STRVAR(doc_QBluetoothHostInfo_address, "QBluetoothHostInfo.address() -> QBluetoothAddress");

extern "C" {static PyObject *meth_QBluetoothHostInfo_address(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothHostInfo_address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothHostInfo, &sipCpp))
        {
            QBluetoothAddress*sipRes;

            sipRes = new QBluetoothAddress(sipCpp->address());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothHostInfo, sipName_address, doc_QBluetoothHostInfo_address);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothHostInfo_setAddress, "QBluetoothHostInfo.setAddress(QBluetoothAddress)");

extern "C" {static PyObject *meth_QBluetoothHostInfo_setAddress(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothHostInfo_setAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothAddress* a0;
        QBluetoothHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QBluetoothHostInfo, &sipCpp, sipType_QBluetoothAddress, &a0))
        {
            sipCpp->setAddress(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothHostInfo, sipName_setAddress, doc_QBluetoothHostInfo_setAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothHostInfo_name, "QBluetoothHostInfo.name() -> str");

extern "C" {static PyObject *meth_QBluetoothHostInfo_name(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothHostInfo_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothHostInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothHostInfo, sipName_name, doc_QBluetoothHostInfo_name);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothHostInfo_setName, "QBluetoothHostInfo.setName(str)");

extern "C" {static PyObject *meth_QBluetoothHostInfo_setName(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothHostInfo_setName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QBluetoothHostInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QBluetoothHostInfo, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothHostInfo, sipName_setName, doc_QBluetoothHostInfo_setName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBluetoothHostInfo(void *, const sipTypeDef *);}
static void *cast_QBluetoothHostInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBluetoothHostInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothHostInfo(void *, int);}
static void release_QBluetoothHostInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetoothHostInfo *>(sipCppV);
}


extern "C" {static void assign_QBluetoothHostInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetoothHostInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetoothHostInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetoothHostInfo *>(sipSrc);
}


extern "C" {static void *array_QBluetoothHostInfo(SIP_SSIZE_T);}
static void *array_QBluetoothHostInfo(SIP_SSIZE_T sipNrElem)
{
    return new QBluetoothHostInfo[sipNrElem];
}


extern "C" {static void *copy_QBluetoothHostInfo(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothHostInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetoothHostInfo(reinterpret_cast<const QBluetoothHostInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothHostInfo(sipSimpleWrapper *);}
static void dealloc_QBluetoothHostInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothHostInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetoothHostInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothHostInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetoothHostInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBluetoothHostInfo();

            return sipCpp;
        }
    }

    {
        const QBluetoothHostInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBluetoothHostInfo, &a0))
        {
            sipCpp = new QBluetoothHostInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QBluetoothHostInfo[] = {
    {SIP_MLNAME_CAST(sipName_address), meth_QBluetoothHostInfo_address, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothHostInfo_address)},
    {SIP_MLNAME_CAST(sipName_name), meth_QBluetoothHostInfo_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothHostInfo_name)},
    {SIP_MLNAME_CAST(sipName_setAddress), meth_QBluetoothHostInfo_setAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothHostInfo_setAddress)},
    {SIP_MLNAME_CAST(sipName_setName), meth_QBluetoothHostInfo_setName, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothHostInfo_setName)}
};

PyDoc_STRVAR(doc_QBluetoothHostInfo, "\1QBluetoothHostInfo()\n"
    "QBluetoothHostInfo(QBluetoothHostInfo)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothHostInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothHostInfo,
        {0}
    },
    {
        sipNameNr_QBluetoothHostInfo,
        {0, 0, 1},
        4, methods_QBluetoothHostInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothHostInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QBluetoothHostInfo,
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
    dealloc_QBluetoothHostInfo,
    assign_QBluetoothHostInfo,
    array_QBluetoothHostInfo,
    copy_QBluetoothHostInfo,
    release_QBluetoothHostInfo,
    cast_QBluetoothHostInfo,
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