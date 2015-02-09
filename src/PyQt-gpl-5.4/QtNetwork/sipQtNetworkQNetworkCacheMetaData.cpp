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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtNetwork/qabstractnetworkcache.sip"
#include <qabstractnetworkcache.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtNetwork/qpynetwork_qhash.sip"
#include <qhash.h>
#include <qnetworkrequest.h>
#include <qvariant.h>
#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtNetwork/qnetworkrequest.sip"
#include <qnetworkrequest.h>
#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 41 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 299 "sip/QtCore/qdatetime.sip"
#include <qdatetime.h>
#line 44 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 252 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtNetwork/sipQtNetworkQNetworkCacheMetaData.cpp"


PyDoc_STRVAR(doc_QNetworkCacheMetaData_isValid, "QNetworkCacheMetaData.isValid() -> bool");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_isValid(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_isValid, doc_QNetworkCacheMetaData_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_url, "QNetworkCacheMetaData.url() -> QUrl");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_url(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_url(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->url());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_url, doc_QNetworkCacheMetaData_url);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setUrl, "QNetworkCacheMetaData.setUrl(QUrl)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setUrl(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setUrl(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setUrl, doc_QNetworkCacheMetaData_setUrl);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_rawHeaders, "QNetworkCacheMetaData.rawHeaders() -> list-of-tuple-of-QByteArray-QByteArray");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_rawHeaders(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_rawHeaders(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QNetworkCacheMetaData::RawHeaderList*sipRes;

            sipRes = new QNetworkCacheMetaData::RawHeaderList(sipCpp->rawHeaders());

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QByteArray_0100QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_rawHeaders, doc_QNetworkCacheMetaData_rawHeaders);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setRawHeaders, "QNetworkCacheMetaData.setRawHeaders(list-of-tuple-of-QByteArray-QByteArray)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setRawHeaders(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setRawHeaders(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData::RawHeaderList* a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QList_0600QPair_0100QByteArray_0100QByteArray,&a0, &a0State))
        {
            sipCpp->setRawHeaders(*a0);
            sipReleaseType(const_cast<QNetworkCacheMetaData::RawHeaderList *>(a0),sipType_QList_0600QPair_0100QByteArray_0100QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setRawHeaders, doc_QNetworkCacheMetaData_setRawHeaders);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_lastModified, "QNetworkCacheMetaData.lastModified() -> QDateTime");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_lastModified(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_lastModified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->lastModified());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_lastModified, doc_QNetworkCacheMetaData_lastModified);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setLastModified, "QNetworkCacheMetaData.setLastModified(QDateTime)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setLastModified(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setLastModified(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            sipCpp->setLastModified(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setLastModified, doc_QNetworkCacheMetaData_setLastModified);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_expirationDate, "QNetworkCacheMetaData.expirationDate() -> QDateTime");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_expirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_expirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QDateTime*sipRes;

            sipRes = new QDateTime(sipCpp->expirationDate());

            return sipConvertFromNewType(sipRes,sipType_QDateTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_expirationDate, doc_QNetworkCacheMetaData_expirationDate);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setExpirationDate, "QNetworkCacheMetaData.setExpirationDate(QDateTime)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setExpirationDate(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setExpirationDate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QDateTime* a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QDateTime, &a0, &a0State))
        {
            sipCpp->setExpirationDate(*a0);
            sipReleaseType(const_cast<QDateTime *>(a0),sipType_QDateTime,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setExpirationDate, doc_QNetworkCacheMetaData_setExpirationDate);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_saveToDisk, "QNetworkCacheMetaData.saveToDisk() -> bool");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_saveToDisk(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_saveToDisk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->saveToDisk();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_saveToDisk, doc_QNetworkCacheMetaData_saveToDisk);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setSaveToDisk, "QNetworkCacheMetaData.setSaveToDisk(bool)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setSaveToDisk(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setSaveToDisk(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, &a0))
        {
            sipCpp->setSaveToDisk(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setSaveToDisk, doc_QNetworkCacheMetaData_setSaveToDisk);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_attributes, "QNetworkCacheMetaData.attributes() -> dict-of-QNetworkRequest.Attribute-object");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_attributes(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp))
        {
            QNetworkCacheMetaData::AttributesMap*sipRes;

            sipRes = new QNetworkCacheMetaData::AttributesMap(sipCpp->attributes());

            return sipConvertFromNewType(sipRes,sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_attributes, doc_QNetworkCacheMetaData_attributes);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_setAttributes, "QNetworkCacheMetaData.setAttributes(dict-of-QNetworkRequest.Attribute-object)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_setAttributes(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_setAttributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData::AttributesMap* a0;
        int a0State = 0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,&a0, &a0State))
        {
            sipCpp->setAttributes(*a0);
            sipReleaseType(const_cast<QNetworkCacheMetaData::AttributesMap *>(a0),sipType_QHash_0100QNetworkRequest_Attribute_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_setAttributes, doc_QNetworkCacheMetaData_setAttributes);

    return NULL;
}


PyDoc_STRVAR(doc_QNetworkCacheMetaData_swap, "QNetworkCacheMetaData.swap(QNetworkCacheMetaData)");

extern "C" {static PyObject *meth_QNetworkCacheMetaData_swap(PyObject *, PyObject *);}
static PyObject *meth_QNetworkCacheMetaData_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QNetworkCacheMetaData* a0;
        QNetworkCacheMetaData *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QNetworkCacheMetaData, &sipCpp, sipType_QNetworkCacheMetaData, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QNetworkCacheMetaData, sipName_swap, doc_QNetworkCacheMetaData_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QNetworkCacheMetaData___ne__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkCacheMetaData___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCacheMetaData *sipCpp = reinterpret_cast<QNetworkCacheMetaData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCacheMetaData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCacheMetaData, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNetworkCacheMetaData::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,ne_slot,sipType_QNetworkCacheMetaData,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QNetworkCacheMetaData___eq__(PyObject *,PyObject *);}
static PyObject *slot_QNetworkCacheMetaData___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QNetworkCacheMetaData *sipCpp = reinterpret_cast<QNetworkCacheMetaData *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QNetworkCacheMetaData));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QNetworkCacheMetaData* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QNetworkCacheMetaData, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QNetworkCacheMetaData::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtNetwork,eq_slot,sipType_QNetworkCacheMetaData,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QNetworkCacheMetaData(void *, const sipTypeDef *);}
static void *cast_QNetworkCacheMetaData(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QNetworkCacheMetaData)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QNetworkCacheMetaData(void *, int);}
static void release_QNetworkCacheMetaData(void *sipCppV,int)
{
    delete reinterpret_cast<QNetworkCacheMetaData *>(sipCppV);
}


extern "C" {static void assign_QNetworkCacheMetaData(void *, SIP_SSIZE_T, const void *);}
static void assign_QNetworkCacheMetaData(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QNetworkCacheMetaData *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QNetworkCacheMetaData *>(sipSrc);
}


extern "C" {static void *array_QNetworkCacheMetaData(SIP_SSIZE_T);}
static void *array_QNetworkCacheMetaData(SIP_SSIZE_T sipNrElem)
{
    return new QNetworkCacheMetaData[sipNrElem];
}


extern "C" {static void *copy_QNetworkCacheMetaData(const void *, SIP_SSIZE_T);}
static void *copy_QNetworkCacheMetaData(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QNetworkCacheMetaData(reinterpret_cast<const QNetworkCacheMetaData *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QNetworkCacheMetaData(sipSimpleWrapper *);}
static void dealloc_QNetworkCacheMetaData(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QNetworkCacheMetaData(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QNetworkCacheMetaData(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QNetworkCacheMetaData(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QNetworkCacheMetaData *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QNetworkCacheMetaData();

            return sipCpp;
        }
    }

    {
        const QNetworkCacheMetaData* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QNetworkCacheMetaData, &a0))
        {
            sipCpp = new QNetworkCacheMetaData(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QNetworkCacheMetaData[] = {
    {(void *)slot_QNetworkCacheMetaData___ne__, ne_slot},
    {(void *)slot_QNetworkCacheMetaData___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QNetworkCacheMetaData[] = {
    {SIP_MLNAME_CAST(sipName_attributes), meth_QNetworkCacheMetaData_attributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_attributes)},
    {SIP_MLNAME_CAST(sipName_expirationDate), meth_QNetworkCacheMetaData_expirationDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_expirationDate)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QNetworkCacheMetaData_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_isValid)},
    {SIP_MLNAME_CAST(sipName_lastModified), meth_QNetworkCacheMetaData_lastModified, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_lastModified)},
    {SIP_MLNAME_CAST(sipName_rawHeaders), meth_QNetworkCacheMetaData_rawHeaders, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_rawHeaders)},
    {SIP_MLNAME_CAST(sipName_saveToDisk), meth_QNetworkCacheMetaData_saveToDisk, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_saveToDisk)},
    {SIP_MLNAME_CAST(sipName_setAttributes), meth_QNetworkCacheMetaData_setAttributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setAttributes)},
    {SIP_MLNAME_CAST(sipName_setExpirationDate), meth_QNetworkCacheMetaData_setExpirationDate, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setExpirationDate)},
    {SIP_MLNAME_CAST(sipName_setLastModified), meth_QNetworkCacheMetaData_setLastModified, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setLastModified)},
    {SIP_MLNAME_CAST(sipName_setRawHeaders), meth_QNetworkCacheMetaData_setRawHeaders, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setRawHeaders)},
    {SIP_MLNAME_CAST(sipName_setSaveToDisk), meth_QNetworkCacheMetaData_setSaveToDisk, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setSaveToDisk)},
    {SIP_MLNAME_CAST(sipName_setUrl), meth_QNetworkCacheMetaData_setUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_setUrl)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QNetworkCacheMetaData_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_swap)},
    {SIP_MLNAME_CAST(sipName_url), meth_QNetworkCacheMetaData_url, METH_VARARGS, SIP_MLDOC_CAST(doc_QNetworkCacheMetaData_url)}
};

PyDoc_STRVAR(doc_QNetworkCacheMetaData, "\1QNetworkCacheMetaData()\n"
    "QNetworkCacheMetaData(QNetworkCacheMetaData)");


pyqt5ClassTypeDef sipTypeDef_QtNetwork_QNetworkCacheMetaData = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QNetworkCacheMetaData,
        {0}
    },
    {
        sipNameNr_QNetworkCacheMetaData,
        {0, 0, 1},
        14, methods_QNetworkCacheMetaData,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QNetworkCacheMetaData,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QNetworkCacheMetaData,
    init_type_QNetworkCacheMetaData,
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
    dealloc_QNetworkCacheMetaData,
    assign_QNetworkCacheMetaData,
    array_QNetworkCacheMetaData,
    copy_QNetworkCacheMetaData,
    release_QNetworkCacheMetaData,
    cast_QNetworkCacheMetaData,
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