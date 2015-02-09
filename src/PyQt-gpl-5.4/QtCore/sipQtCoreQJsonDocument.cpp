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

#line 58 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsondocument.sip"
#include <qjsondocument.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"

#line 24 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsonobject.sip"
#include <qjsonobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsonarray.sip"
#include <qjsonarray.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"
#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qjsondocument.sip"
#include <qjsondocument.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQJsonDocument.cpp"


PyDoc_STRVAR(doc_QJsonDocument_fromRawData, "QJsonDocument.fromRawData(str, int, QJsonDocument.DataValidation validation=QJsonDocument.Validate) -> QJsonDocument");

extern "C" {static PyObject *meth_QJsonDocument_fromRawData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_fromRawData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        int a1;
        QJsonDocument::DataValidation a2 = QJsonDocument::Validate;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_validation,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "si|E", &a0, &a1, sipType_QJsonDocument_DataValidation, &a2))
        {
            QJsonDocument*sipRes;

            sipRes = new QJsonDocument(QJsonDocument::fromRawData(a0,a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QJsonDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_fromRawData, doc_QJsonDocument_fromRawData);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_rawData, "QJsonDocument.rawData() -> (str, int)");

extern "C" {static PyObject *meth_QJsonDocument_rawData(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_rawData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->rawData(&a0);

            return sipBuildResult(0,"(si)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_rawData, doc_QJsonDocument_rawData);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_fromBinaryData, "QJsonDocument.fromBinaryData(QByteArray, QJsonDocument.DataValidation validation=QJsonDocument.Validate) -> QJsonDocument");

extern "C" {static PyObject *meth_QJsonDocument_fromBinaryData(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_fromBinaryData(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QJsonDocument::DataValidation a1 = QJsonDocument::Validate;

        static const char *sipKwdList[] = {
            NULL,
            sipName_validation,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QByteArray, &a0, &a0State, sipType_QJsonDocument_DataValidation, &a1))
        {
            QJsonDocument*sipRes;

            sipRes = new QJsonDocument(QJsonDocument::fromBinaryData(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_fromBinaryData, doc_QJsonDocument_fromBinaryData);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_toBinaryData, "QJsonDocument.toBinaryData() -> QByteArray");

extern "C" {static PyObject *meth_QJsonDocument_toBinaryData(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_toBinaryData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->toBinaryData());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_toBinaryData, doc_QJsonDocument_toBinaryData);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_fromVariant, "QJsonDocument.fromVariant(QVariant) -> QJsonDocument");

extern "C" {static PyObject *meth_QJsonDocument_fromVariant(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_fromVariant(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QVariant, &a0, &a0State))
        {
            QJsonDocument*sipRes;

            sipRes = new QJsonDocument(QJsonDocument::fromVariant(*a0));
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_fromVariant, doc_QJsonDocument_fromVariant);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_toVariant, "QJsonDocument.toVariant() -> QVariant");

extern "C" {static PyObject *meth_QJsonDocument_toVariant(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_toVariant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->toVariant());

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_toVariant, doc_QJsonDocument_toVariant);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_fromJson, "QJsonDocument.fromJson(QByteArray, QJsonParseError error=None) -> QJsonDocument");

extern "C" {static PyObject *meth_QJsonDocument_fromJson(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_fromJson(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        QJsonParseError* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_error,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|J8", sipType_QByteArray, &a0, &a0State, sipType_QJsonParseError, &a1))
        {
            QJsonDocument*sipRes;

            sipRes = new QJsonDocument(QJsonDocument::fromJson(*a0,a1));
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            return sipConvertFromNewType(sipRes,sipType_QJsonDocument,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_fromJson, doc_QJsonDocument_fromJson);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_toJson, "QJsonDocument.toJson() -> QByteArray\n"
    "QJsonDocument.toJson(QJsonDocument.JsonFormat) -> QByteArray");

extern "C" {static PyObject *meth_QJsonDocument_toJson(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_toJson(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->toJson());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    {
        QJsonDocument::JsonFormat a0;
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QJsonDocument, &sipCpp, sipType_QJsonDocument_JsonFormat, &a0))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->toJson(a0));

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_toJson, doc_QJsonDocument_toJson);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_isEmpty, "QJsonDocument.isEmpty() -> bool");

extern "C" {static PyObject *meth_QJsonDocument_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_isEmpty, doc_QJsonDocument_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_isArray, "QJsonDocument.isArray() -> bool");

extern "C" {static PyObject *meth_QJsonDocument_isArray(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_isArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isArray();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_isArray, doc_QJsonDocument_isArray);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_isObject, "QJsonDocument.isObject() -> bool");

extern "C" {static PyObject *meth_QJsonDocument_isObject(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_isObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isObject();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_isObject, doc_QJsonDocument_isObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_object, "QJsonDocument.object() -> dict-of-str-QJsonValue");

extern "C" {static PyObject *meth_QJsonDocument_object(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_object(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            QJsonObject*sipRes;

            sipRes = new QJsonObject(sipCpp->object());

            return sipConvertFromNewType(sipRes,sipType_QJsonObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_object, doc_QJsonDocument_object);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_array, "QJsonDocument.array() -> list-of-QJsonValue");

extern "C" {static PyObject *meth_QJsonDocument_array(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_array(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            QJsonArray*sipRes;

            sipRes = new QJsonArray(sipCpp->array());

            return sipConvertFromNewType(sipRes,sipType_QJsonArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_array, doc_QJsonDocument_array);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_setObject, "QJsonDocument.setObject(dict-of-str-QJsonValue)");

extern "C" {static PyObject *meth_QJsonDocument_setObject(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_setObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonObject* a0;
        int a0State = 0;
        QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJsonDocument, &sipCpp, sipType_QJsonObject,&a0, &a0State))
        {
            sipCpp->setObject(*a0);
            sipReleaseType(const_cast<QJsonObject *>(a0),sipType_QJsonObject,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_setObject, doc_QJsonDocument_setObject);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_setArray, "QJsonDocument.setArray(list-of-QJsonValue)");

extern "C" {static PyObject *meth_QJsonDocument_setArray(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_setArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonArray* a0;
        int a0State = 0;
        QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QJsonDocument, &sipCpp, sipType_QJsonArray,&a0, &a0State))
        {
            sipCpp->setArray(*a0);
            sipReleaseType(const_cast<QJsonArray *>(a0),sipType_QJsonArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_setArray, doc_QJsonDocument_setArray);

    return NULL;
}


PyDoc_STRVAR(doc_QJsonDocument_isNull, "QJsonDocument.isNull() -> bool");

extern "C" {static PyObject *meth_QJsonDocument_isNull(PyObject *, PyObject *);}
static PyObject *meth_QJsonDocument_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QJsonDocument, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QJsonDocument, sipName_isNull, doc_QJsonDocument_isNull);

    return NULL;
}


extern "C" {static PyObject *slot_QJsonDocument___ne__(PyObject *,PyObject *);}
static PyObject *slot_QJsonDocument___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QJsonDocument *sipCpp = reinterpret_cast<QJsonDocument *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonDocument));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QJsonDocument, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QJsonDocument::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QJsonDocument,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QJsonDocument___eq__(PyObject *,PyObject *);}
static PyObject *slot_QJsonDocument___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QJsonDocument *sipCpp = reinterpret_cast<QJsonDocument *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QJsonDocument));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QJsonDocument* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QJsonDocument, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QJsonDocument::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QJsonDocument,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QJsonDocument(void *, const sipTypeDef *);}
static void *cast_QJsonDocument(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QJsonDocument)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QJsonDocument(void *, int);}
static void release_QJsonDocument(void *sipCppV,int)
{
    delete reinterpret_cast<QJsonDocument *>(sipCppV);
}


extern "C" {static void assign_QJsonDocument(void *, SIP_SSIZE_T, const void *);}
static void assign_QJsonDocument(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QJsonDocument *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QJsonDocument *>(sipSrc);
}


extern "C" {static void *array_QJsonDocument(SIP_SSIZE_T);}
static void *array_QJsonDocument(SIP_SSIZE_T sipNrElem)
{
    return new QJsonDocument[sipNrElem];
}


extern "C" {static void *copy_QJsonDocument(const void *, SIP_SSIZE_T);}
static void *copy_QJsonDocument(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QJsonDocument(reinterpret_cast<const QJsonDocument *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QJsonDocument(sipSimpleWrapper *);}
static void dealloc_QJsonDocument(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QJsonDocument(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QJsonDocument(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QJsonDocument(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QJsonDocument *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QJsonDocument();

            return sipCpp;
        }
    }

    {
        const QJsonObject* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QJsonObject,&a0, &a0State))
        {
            sipCpp = new QJsonDocument(*a0);
            sipReleaseType(const_cast<QJsonObject *>(a0),sipType_QJsonObject,a0State);

            return sipCpp;
        }
    }

    {
        const QJsonArray* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QJsonArray,&a0, &a0State))
        {
            sipCpp = new QJsonDocument(*a0);
            sipReleaseType(const_cast<QJsonArray *>(a0),sipType_QJsonArray,a0State);

            return sipCpp;
        }
    }

    {
        const QJsonDocument* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QJsonDocument, &a0))
        {
            sipCpp = new QJsonDocument(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QJsonDocument[] = {
    {(void *)slot_QJsonDocument___ne__, ne_slot},
    {(void *)slot_QJsonDocument___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QJsonDocument[] = {
    {SIP_MLNAME_CAST(sipName_array), meth_QJsonDocument_array, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_array)},
    {SIP_MLNAME_CAST(sipName_fromBinaryData), (PyCFunction)meth_QJsonDocument_fromBinaryData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJsonDocument_fromBinaryData)},
    {SIP_MLNAME_CAST(sipName_fromJson), (PyCFunction)meth_QJsonDocument_fromJson, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJsonDocument_fromJson)},
    {SIP_MLNAME_CAST(sipName_fromRawData), (PyCFunction)meth_QJsonDocument_fromRawData, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QJsonDocument_fromRawData)},
    {SIP_MLNAME_CAST(sipName_fromVariant), meth_QJsonDocument_fromVariant, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_fromVariant)},
    {SIP_MLNAME_CAST(sipName_isArray), meth_QJsonDocument_isArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_isArray)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QJsonDocument_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QJsonDocument_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_isNull)},
    {SIP_MLNAME_CAST(sipName_isObject), meth_QJsonDocument_isObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_isObject)},
    {SIP_MLNAME_CAST(sipName_object), meth_QJsonDocument_object, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_object)},
    {SIP_MLNAME_CAST(sipName_rawData), meth_QJsonDocument_rawData, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_rawData)},
    {SIP_MLNAME_CAST(sipName_setArray), meth_QJsonDocument_setArray, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_setArray)},
    {SIP_MLNAME_CAST(sipName_setObject), meth_QJsonDocument_setObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_setObject)},
    {SIP_MLNAME_CAST(sipName_toBinaryData), meth_QJsonDocument_toBinaryData, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_toBinaryData)},
    {SIP_MLNAME_CAST(sipName_toJson), meth_QJsonDocument_toJson, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_toJson)},
    {SIP_MLNAME_CAST(sipName_toVariant), meth_QJsonDocument_toVariant, METH_VARARGS, SIP_MLDOC_CAST(doc_QJsonDocument_toVariant)}
};

static sipEnumMemberDef enummembers_QJsonDocument[] = {
    {sipName_BypassValidation, static_cast<int>(QJsonDocument::BypassValidation), 89},
    {sipName_Compact, static_cast<int>(QJsonDocument::Compact), 90},
    {sipName_Indented, static_cast<int>(QJsonDocument::Indented), 90},
    {sipName_Validate, static_cast<int>(QJsonDocument::Validate), 89},
};

PyDoc_STRVAR(doc_QJsonDocument, "\1QJsonDocument()\n"
    "QJsonDocument(dict-of-str-QJsonValue)\n"
    "QJsonDocument(list-of-QJsonValue)\n"
    "QJsonDocument(QJsonDocument)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QJsonDocument = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QJsonDocument,
        {0}
    },
    {
        sipNameNr_QJsonDocument,
        {0, 0, 1},
        16, methods_QJsonDocument,
        4, enummembers_QJsonDocument,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QJsonDocument,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QJsonDocument,
    init_type_QJsonDocument,
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
    dealloc_QJsonDocument,
    assign_QJsonDocument,
    array_QJsonDocument,
    copy_QJsonDocument,
    release_QJsonDocument,
    cast_QJsonDocument,
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
