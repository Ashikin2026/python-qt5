/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:11 2015
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

#include "sipAPIQtWidgets.h"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qsizepolicy.sip"
#include <qsizepolicy.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"


extern "C" {static int slot_QSizePolicy_ControlTypes___bool__(PyObject *);}
static int slot_QSizePolicy_ControlTypes___bool__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() != a0->operator QSizePolicy::ControlTypes::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"
            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QSizePolicy_ControlTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSizePolicy::ControlTypes::Int() == a0->operator QSizePolicy::ControlTypes::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"
            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QSizePolicy_ControlTypes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___invert__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;


    {
        {
            QSizePolicy::ControlTypes*sipRes;

            sipRes = new QSizePolicy::ControlTypes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
            QSizePolicy::ControlTypes*sipRes;

            sipRes = new QSizePolicy::ControlTypes((*a0 & a1));
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        QSizePolicy::ControlTypes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State, sipType_QSizePolicy_ControlTypes, &a1, &a1State))
        {
            QSizePolicy::ControlTypes*sipRes;

            sipRes = new QSizePolicy::ControlTypes((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);
            sipReleaseType(a1,sipType_QSizePolicy_ControlTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
            QSizePolicy::ControlTypes*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QSizePolicy::ControlTypes(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        QSizePolicy::ControlTypes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State, sipType_QSizePolicy_ControlTypes, &a1, &a1State))
        {
            QSizePolicy::ControlTypes*sipRes;

            sipRes = new QSizePolicy::ControlTypes((*a0 | *a1));
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);
            sipReleaseType(a1,sipType_QSizePolicy_ControlTypes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSizePolicy_ControlTypes, &a0, &a0State, &a1))
        {
            QSizePolicy::ControlTypes*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QSizePolicy::ControlTypes(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSizePolicy_ControlTypes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___int__(PyObject *sipSelf)
{
    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            sipCpp->QSizePolicy::ControlTypes::operator^=(*a0);
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            sipCpp->QSizePolicy::ControlTypes::operator|=(*a0);
            sipReleaseType(a0,sipType_QSizePolicy_ControlTypes,a0State);

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


extern "C" {static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSizePolicy_ControlTypes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlTypes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizePolicy::ControlTypes *sipCpp = reinterpret_cast<QSizePolicy::ControlTypes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizePolicy_ControlTypes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSizePolicy::ControlTypes::operator&=(a0);

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
extern "C" {static void *cast_QSizePolicy_ControlTypes(void *, const sipTypeDef *);}
static void *cast_QSizePolicy_ControlTypes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSizePolicy_ControlTypes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSizePolicy_ControlTypes(void *, int);}
static void release_QSizePolicy_ControlTypes(void *sipCppV,int)
{
    delete reinterpret_cast<QSizePolicy::ControlTypes *>(sipCppV);
}


extern "C" {static void assign_QSizePolicy_ControlTypes(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizePolicy_ControlTypes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSizePolicy::ControlTypes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSizePolicy::ControlTypes *>(sipSrc);
}


extern "C" {static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T);}
static void *array_QSizePolicy_ControlTypes(SIP_SSIZE_T sipNrElem)
{
    return new QSizePolicy::ControlTypes[sipNrElem];
}


extern "C" {static void *copy_QSizePolicy_ControlTypes(const void *, SIP_SSIZE_T);}
static void *copy_QSizePolicy_ControlTypes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSizePolicy::ControlTypes(reinterpret_cast<const QSizePolicy::ControlTypes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *);}
static void dealloc_QSizePolicy_ControlTypes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSizePolicy_ControlTypes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSizePolicy_ControlTypes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSizePolicy::ControlTypes *sipCpp = 0;

    {
        const QSizePolicy::ControlTypes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSizePolicy_ControlTypes, &a0, &a0State))
        {
            sipCpp = new QSizePolicy::ControlTypes(*a0);
            sipReleaseType(const_cast<QSizePolicy::ControlTypes *>(a0),sipType_QSizePolicy_ControlTypes,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSizePolicy::ControlTypes(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSizePolicy::ControlTypes();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSizePolicy_ControlTypes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSizePolicy_ControlTypes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSizePolicy::ControlTypes **sipCppPtr = reinterpret_cast<QSizePolicy::ControlTypes **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSizePolicy::ControlTypes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)) ||
            sipCanConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSizePolicy_ControlType)))
{
    *sipCppPtr = new QSizePolicy::ControlTypes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSizePolicy::ControlTypes *>(sipConvertToType(sipPy, sipType_QSizePolicy_ControlTypes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQSizePolicyControlTypes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizePolicy_ControlTypes[] = {
    {(void *)slot_QSizePolicy_ControlTypes___bool__, bool_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ne__, ne_slot},
    {(void *)slot_QSizePolicy_ControlTypes___eq__, eq_slot},
    {(void *)slot_QSizePolicy_ControlTypes___invert__, invert_slot},
    {(void *)slot_QSizePolicy_ControlTypes___and__, and_slot},
    {(void *)slot_QSizePolicy_ControlTypes___xor__, xor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___or__, or_slot},
    {(void *)slot_QSizePolicy_ControlTypes___int__, int_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ixor__, ixor_slot},
    {(void *)slot_QSizePolicy_ControlTypes___ior__, ior_slot},
    {(void *)slot_QSizePolicy_ControlTypes___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSizePolicy_ControlTypes, "\1QSizePolicy.ControlTypes(QSizePolicy.ControlTypes)\n"
    "QSizePolicy.ControlTypes(int)\n"
    "QSizePolicy.ControlTypes()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QSizePolicy_ControlTypes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSizePolicy__ControlTypes,
        {0}
    },
    {
        sipNameNr_ControlTypes,
        {267, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSizePolicy_ControlTypes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizePolicy_ControlTypes,
    init_type_QSizePolicy_ControlTypes,
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
    dealloc_QSizePolicy_ControlTypes,
    assign_QSizePolicy_ControlTypes,
    array_QSizePolicy_ControlTypes,
    copy_QSizePolicy_ControlTypes,
    release_QSizePolicy_ControlTypes,
    cast_QSizePolicy_ControlTypes,
    convertTo_QSizePolicy_ControlTypes,
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
