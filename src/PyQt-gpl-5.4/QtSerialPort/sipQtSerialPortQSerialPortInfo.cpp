/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:22 2015
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

#include "sipAPIQtSerialPort.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtSerialPort/qserialportinfo.sip"
#include <qserialportinfo.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSerialPort/sipQtSerialPortQSerialPortInfo.cpp"

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtSerialPort/qserialport.sip"
#include <qserialport.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSerialPort/sipQtSerialPortQSerialPortInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSerialPort/sipQtSerialPortQSerialPortInfo.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSerialPort/sipQtSerialPortQSerialPortInfo.cpp"
#line 629 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSerialPort/sipQtSerialPortQSerialPortInfo.cpp"


PyDoc_STRVAR(doc_QSerialPortInfo_swap, "QSerialPortInfo.swap(QSerialPortInfo)");

extern "C" {static PyObject *meth_QSerialPortInfo_swap(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSerialPortInfo* a0;
        QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSerialPortInfo, &sipCpp, sipType_QSerialPortInfo, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_swap, doc_QSerialPortInfo_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_portName, "QSerialPortInfo.portName() -> str");

extern "C" {static PyObject *meth_QSerialPortInfo_portName(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_portName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->portName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_portName, doc_QSerialPortInfo_portName);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_systemLocation, "QSerialPortInfo.systemLocation() -> str");

extern "C" {static PyObject *meth_QSerialPortInfo_systemLocation(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_systemLocation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->systemLocation());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_systemLocation, doc_QSerialPortInfo_systemLocation);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_description, "QSerialPortInfo.description() -> str");

extern "C" {static PyObject *meth_QSerialPortInfo_description(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_description, doc_QSerialPortInfo_description);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_manufacturer, "QSerialPortInfo.manufacturer() -> str");

extern "C" {static PyObject *meth_QSerialPortInfo_manufacturer(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_manufacturer(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->manufacturer());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_manufacturer, doc_QSerialPortInfo_manufacturer);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_vendorIdentifier, "QSerialPortInfo.vendorIdentifier() -> int");

extern "C" {static PyObject *meth_QSerialPortInfo_vendorIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_vendorIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->vendorIdentifier();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_vendorIdentifier, doc_QSerialPortInfo_vendorIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_productIdentifier, "QSerialPortInfo.productIdentifier() -> int");

extern "C" {static PyObject *meth_QSerialPortInfo_productIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_productIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            quint16 sipRes;

            sipRes = sipCpp->productIdentifier();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_productIdentifier, doc_QSerialPortInfo_productIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_hasVendorIdentifier, "QSerialPortInfo.hasVendorIdentifier() -> bool");

extern "C" {static PyObject *meth_QSerialPortInfo_hasVendorIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_hasVendorIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasVendorIdentifier();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_hasVendorIdentifier, doc_QSerialPortInfo_hasVendorIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_hasProductIdentifier, "QSerialPortInfo.hasProductIdentifier() -> bool");

extern "C" {static PyObject *meth_QSerialPortInfo_hasProductIdentifier(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_hasProductIdentifier(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasProductIdentifier();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_hasProductIdentifier, doc_QSerialPortInfo_hasProductIdentifier);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_isBusy, "QSerialPortInfo.isBusy() -> bool");

extern "C" {static PyObject *meth_QSerialPortInfo_isBusy(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_isBusy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isBusy();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_isBusy, doc_QSerialPortInfo_isBusy);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_isValid, "QSerialPortInfo.isValid() -> bool");

extern "C" {static PyObject *meth_QSerialPortInfo_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_isValid, doc_QSerialPortInfo_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_standardBaudRates, "QSerialPortInfo.standardBaudRates() -> list-of-int");

extern "C" {static PyObject *meth_QSerialPortInfo_standardBaudRates(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_standardBaudRates(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<int>*sipRes;

            sipRes = new QList<int>(QSerialPortInfo::standardBaudRates());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_standardBaudRates, doc_QSerialPortInfo_standardBaudRates);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_availablePorts, "QSerialPortInfo.availablePorts() -> list-of-QSerialPortInfo");

extern "C" {static PyObject *meth_QSerialPortInfo_availablePorts(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_availablePorts(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QSerialPortInfo>*sipRes;

            sipRes = new QList<QSerialPortInfo>(QSerialPortInfo::availablePorts());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSerialPortInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_availablePorts, doc_QSerialPortInfo_availablePorts);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_isNull, "QSerialPortInfo.isNull() -> bool");

extern "C" {static PyObject *meth_QSerialPortInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_isNull, doc_QSerialPortInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSerialPortInfo_serialNumber, "QSerialPortInfo.serialNumber() -> str");

extern "C" {static PyObject *meth_QSerialPortInfo_serialNumber(PyObject *, PyObject *);}
static PyObject *meth_QSerialPortInfo_serialNumber(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSerialPortInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSerialPortInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->serialNumber());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSerialPortInfo, sipName_serialNumber, doc_QSerialPortInfo_serialNumber);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSerialPortInfo(void *, const sipTypeDef *);}
static void *cast_QSerialPortInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSerialPortInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSerialPortInfo(void *, int);}
static void release_QSerialPortInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QSerialPortInfo *>(sipCppV);
}


extern "C" {static void assign_QSerialPortInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QSerialPortInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSerialPortInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSerialPortInfo *>(sipSrc);
}


extern "C" {static void *array_QSerialPortInfo(SIP_SSIZE_T);}
static void *array_QSerialPortInfo(SIP_SSIZE_T sipNrElem)
{
    return new QSerialPortInfo[sipNrElem];
}


extern "C" {static void *copy_QSerialPortInfo(const void *, SIP_SSIZE_T);}
static void *copy_QSerialPortInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSerialPortInfo(reinterpret_cast<const QSerialPortInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSerialPortInfo(sipSimpleWrapper *);}
static void dealloc_QSerialPortInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSerialPortInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSerialPortInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSerialPortInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSerialPortInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSerialPortInfo();

            return sipCpp;
        }
    }

    {
        const QSerialPort* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSerialPort, &a0))
        {
            sipCpp = new QSerialPortInfo(*a0);

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QSerialPortInfo(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QSerialPortInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSerialPortInfo, &a0))
        {
            sipCpp = new QSerialPortInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSerialPortInfo[] = {
    {SIP_MLNAME_CAST(sipName_availablePorts), meth_QSerialPortInfo_availablePorts, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_availablePorts)},
    {SIP_MLNAME_CAST(sipName_description), meth_QSerialPortInfo_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_description)},
    {SIP_MLNAME_CAST(sipName_hasProductIdentifier), meth_QSerialPortInfo_hasProductIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_hasProductIdentifier)},
    {SIP_MLNAME_CAST(sipName_hasVendorIdentifier), meth_QSerialPortInfo_hasVendorIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_hasVendorIdentifier)},
    {SIP_MLNAME_CAST(sipName_isBusy), meth_QSerialPortInfo_isBusy, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_isBusy)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSerialPortInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSerialPortInfo_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_isValid)},
    {SIP_MLNAME_CAST(sipName_manufacturer), meth_QSerialPortInfo_manufacturer, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_manufacturer)},
    {SIP_MLNAME_CAST(sipName_portName), meth_QSerialPortInfo_portName, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_portName)},
    {SIP_MLNAME_CAST(sipName_productIdentifier), meth_QSerialPortInfo_productIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_productIdentifier)},
    {SIP_MLNAME_CAST(sipName_serialNumber), meth_QSerialPortInfo_serialNumber, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_serialNumber)},
    {SIP_MLNAME_CAST(sipName_standardBaudRates), meth_QSerialPortInfo_standardBaudRates, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_standardBaudRates)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QSerialPortInfo_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_swap)},
    {SIP_MLNAME_CAST(sipName_systemLocation), meth_QSerialPortInfo_systemLocation, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_systemLocation)},
    {SIP_MLNAME_CAST(sipName_vendorIdentifier), meth_QSerialPortInfo_vendorIdentifier, METH_VARARGS, SIP_MLDOC_CAST(doc_QSerialPortInfo_vendorIdentifier)}
};

PyDoc_STRVAR(doc_QSerialPortInfo, "\1QSerialPortInfo()\n"
    "QSerialPortInfo(QSerialPort)\n"
    "QSerialPortInfo(str)\n"
    "QSerialPortInfo(QSerialPortInfo)");


pyqt5ClassTypeDef sipTypeDef_QtSerialPort_QSerialPortInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSerialPortInfo,
        {0}
    },
    {
        sipNameNr_QSerialPortInfo,
        {0, 0, 1},
        15, methods_QSerialPortInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSerialPortInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QSerialPortInfo,
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
    dealloc_QSerialPortInfo,
    assign_QSerialPortInfo,
    array_QSerialPortInfo,
    copy_QSerialPortInfo,
    release_QSerialPortInfo,
    cast_QSerialPortInfo,
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
