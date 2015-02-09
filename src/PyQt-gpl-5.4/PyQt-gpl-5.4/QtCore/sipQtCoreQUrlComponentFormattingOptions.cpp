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

#line 100 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qurl.sip"
#include <qurl.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"

#line 100 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qurl.sip"
#include <qurl.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"


extern "C" {static int slot_QUrl_ComponentFormattingOptions___bool__(PyObject *);}
static int slot_QUrl_ComponentFormattingOptions___bool__(PyObject *sipSelf)
{
    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::ComponentFormattingOptions::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::ComponentFormattingOptions::Int() != a0->operator QUrl::ComponentFormattingOptions::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"
            sipReleaseType(const_cast<QUrl::ComponentFormattingOptions *>(a0),sipType_QUrl_ComponentFormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QUrl_ComponentFormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QUrl::ComponentFormattingOptions::Int() == a0->operator QUrl::ComponentFormattingOptions::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"
            sipReleaseType(const_cast<QUrl::ComponentFormattingOptions *>(a0),sipType_QUrl_ComponentFormattingOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QUrl_ComponentFormattingOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___invert__(PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___invert__(PyObject *sipSelf)
{
    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QUrl::ComponentFormattingOptions*sipRes;

            sipRes = new QUrl::ComponentFormattingOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State, &a1))
        {
            QUrl::ComponentFormattingOptions*sipRes;

            sipRes = new QUrl::ComponentFormattingOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;
        QUrl::ComponentFormattingOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
            QUrl::ComponentFormattingOptions*sipRes;

            sipRes = new QUrl::ComponentFormattingOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State, &a1))
        {
            QUrl::ComponentFormattingOptions*sipRes = 0;

#line 103 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
        sipRes = new QUrl::ComponentFormattingOptions(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;
        QUrl::ComponentFormattingOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State, sipType_QUrl_ComponentFormattingOptions, &a1, &a1State))
        {
            QUrl::ComponentFormattingOptions*sipRes;

            sipRes = new QUrl::ComponentFormattingOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);
            sipReleaseType(a1,sipType_QUrl_ComponentFormattingOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State, &a1))
        {
            QUrl::ComponentFormattingOptions*sipRes = 0;

#line 98 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
        sipRes = new QUrl::ComponentFormattingOptions(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QUrl_ComponentFormattingOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___int__(PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___int__(PyObject *sipSelf)
{
    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            sipCpp->QUrl::ComponentFormattingOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            sipCpp->QUrl::ComponentFormattingOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QUrl_ComponentFormattingOptions,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QUrl_ComponentFormattingOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QUrl_ComponentFormattingOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QUrl::ComponentFormattingOptions *sipCpp = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QUrl_ComponentFormattingOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QUrl::ComponentFormattingOptions::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QUrl_ComponentFormattingOptions(void *, const sipTypeDef *);}
static void *cast_QUrl_ComponentFormattingOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QUrl_ComponentFormattingOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QUrl_ComponentFormattingOptions(void *, int);}
static void release_QUrl_ComponentFormattingOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipCppV);
}


extern "C" {static void assign_QUrl_ComponentFormattingOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QUrl_ComponentFormattingOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QUrl::ComponentFormattingOptions *>(sipSrc);
}


extern "C" {static void *array_QUrl_ComponentFormattingOptions(SIP_SSIZE_T);}
static void *array_QUrl_ComponentFormattingOptions(SIP_SSIZE_T sipNrElem)
{
    return new QUrl::ComponentFormattingOptions[sipNrElem];
}


extern "C" {static void *copy_QUrl_ComponentFormattingOptions(const void *, SIP_SSIZE_T);}
static void *copy_QUrl_ComponentFormattingOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QUrl::ComponentFormattingOptions(reinterpret_cast<const QUrl::ComponentFormattingOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QUrl_ComponentFormattingOptions(sipSimpleWrapper *);}
static void dealloc_QUrl_ComponentFormattingOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QUrl_ComponentFormattingOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QUrl_ComponentFormattingOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QUrl_ComponentFormattingOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QUrl::ComponentFormattingOptions *sipCpp = 0;

    {
        const QUrl::ComponentFormattingOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QUrl_ComponentFormattingOptions, &a0, &a0State))
        {
            sipCpp = new QUrl::ComponentFormattingOptions(*a0);
            sipReleaseType(const_cast<QUrl::ComponentFormattingOptions *>(a0),sipType_QUrl_ComponentFormattingOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QUrl::ComponentFormattingOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QUrl::ComponentFormattingOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QUrl_ComponentFormattingOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QUrl_ComponentFormattingOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QUrl::ComponentFormattingOptions **sipCppPtr = reinterpret_cast<QUrl::ComponentFormattingOptions **>(sipCppPtrV);

#line 124 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QUrl::ComponentFormattingOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOption)) ||
            sipCanConvertToType(sipPy, sipType_QUrl_ComponentFormattingOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QUrl_ComponentFormattingOption)))
{
    *sipCppPtr = new QUrl::ComponentFormattingOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QUrl::ComponentFormattingOptions *>(sipConvertToType(sipPy, sipType_QUrl_ComponentFormattingOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQUrlComponentFormattingOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QUrl_ComponentFormattingOptions[] = {
    {(void *)slot_QUrl_ComponentFormattingOptions___bool__, bool_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___ne__, ne_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___eq__, eq_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___invert__, invert_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___and__, and_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___xor__, xor_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___or__, or_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___int__, int_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___ixor__, ixor_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___ior__, ior_slot},
    {(void *)slot_QUrl_ComponentFormattingOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QUrl_ComponentFormattingOptions, "\1QUrl.ComponentFormattingOptions(QUrl.ComponentFormattingOptions)\n"
    "QUrl.ComponentFormattingOptions(int)\n"
    "QUrl.ComponentFormattingOptions()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QUrl_ComponentFormattingOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QUrl__ComponentFormattingOptions,
        {0}
    },
    {
        sipNameNr_ComponentFormattingOptions,
        {275, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QUrl_ComponentFormattingOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QUrl_ComponentFormattingOptions,
    init_type_QUrl_ComponentFormattingOptions,
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
    dealloc_QUrl_ComponentFormattingOptions,
    assign_QUrl_ComponentFormattingOptions,
    array_QUrl_ComponentFormattingOptions,
    copy_QUrl_ComponentFormattingOptions,
    release_QUrl_ComponentFormattingOptions,
    cast_QUrl_ComponentFormattingOptions,
    convertTo_QUrl_ComponentFormattingOptions,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};