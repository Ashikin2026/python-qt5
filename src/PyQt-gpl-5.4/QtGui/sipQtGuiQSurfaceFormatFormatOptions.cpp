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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qsurfaceformat.sip"
#include <qsurfaceformat.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qsurfaceformat.sip"
#include <qsurfaceformat.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"


extern "C" {static int slot_QSurfaceFormat_FormatOptions___bool__(PyObject *);}
static int slot_QSurfaceFormat_FormatOptions___bool__(PyObject *sipSelf)
{
    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSurfaceFormat::FormatOptions::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSurfaceFormat::FormatOptions::Int() != a0->operator QSurfaceFormat::FormatOptions::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"
            sipReleaseType(const_cast<QSurfaceFormat::FormatOptions *>(a0),sipType_QSurfaceFormat_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QSurfaceFormat_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QSurfaceFormat::FormatOptions::Int() == a0->operator QSurfaceFormat::FormatOptions::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"
            sipReleaseType(const_cast<QSurfaceFormat::FormatOptions *>(a0),sipType_QSurfaceFormat_FormatOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QSurfaceFormat_FormatOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___invert__(PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___invert__(PyObject *sipSelf)
{
    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QSurfaceFormat::FormatOptions*sipRes;

            sipRes = new QSurfaceFormat::FormatOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State, &a1))
        {
            QSurfaceFormat::FormatOptions*sipRes;

            sipRes = new QSurfaceFormat::FormatOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;
        QSurfaceFormat::FormatOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State, sipType_QSurfaceFormat_FormatOptions, &a1, &a1State))
        {
            QSurfaceFormat::FormatOptions*sipRes;

            sipRes = new QSurfaceFormat::FormatOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QSurfaceFormat_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State, &a1))
        {
            QSurfaceFormat::FormatOptions*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QSurfaceFormat::FormatOptions(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;
        QSurfaceFormat::FormatOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State, sipType_QSurfaceFormat_FormatOptions, &a1, &a1State))
        {
            QSurfaceFormat::FormatOptions*sipRes;

            sipRes = new QSurfaceFormat::FormatOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);
            sipReleaseType(a1,sipType_QSurfaceFormat_FormatOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State, &a1))
        {
            QSurfaceFormat::FormatOptions*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QSurfaceFormat::FormatOptions(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QSurfaceFormat_FormatOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___int__(PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___int__(PyObject *sipSelf)
{
    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

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


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSurfaceFormat_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State))
        {
            sipCpp->QSurfaceFormat::FormatOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);

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


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSurfaceFormat_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State))
        {
            sipCpp->QSurfaceFormat::FormatOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QSurfaceFormat_FormatOptions,a0State);

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


extern "C" {static PyObject *slot_QSurfaceFormat_FormatOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QSurfaceFormat_FormatOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSurfaceFormat_FormatOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSurfaceFormat::FormatOptions *sipCpp = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSurfaceFormat_FormatOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QSurfaceFormat::FormatOptions::operator&=(a0);

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
extern "C" {static void *cast_QSurfaceFormat_FormatOptions(void *, const sipTypeDef *);}
static void *cast_QSurfaceFormat_FormatOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSurfaceFormat_FormatOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSurfaceFormat_FormatOptions(void *, int);}
static void release_QSurfaceFormat_FormatOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipCppV);
}


extern "C" {static void assign_QSurfaceFormat_FormatOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QSurfaceFormat_FormatOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSurfaceFormat::FormatOptions *>(sipSrc);
}


extern "C" {static void *array_QSurfaceFormat_FormatOptions(SIP_SSIZE_T);}
static void *array_QSurfaceFormat_FormatOptions(SIP_SSIZE_T sipNrElem)
{
    return new QSurfaceFormat::FormatOptions[sipNrElem];
}


extern "C" {static void *copy_QSurfaceFormat_FormatOptions(const void *, SIP_SSIZE_T);}
static void *copy_QSurfaceFormat_FormatOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSurfaceFormat::FormatOptions(reinterpret_cast<const QSurfaceFormat::FormatOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSurfaceFormat_FormatOptions(sipSimpleWrapper *);}
static void dealloc_QSurfaceFormat_FormatOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSurfaceFormat_FormatOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSurfaceFormat_FormatOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSurfaceFormat_FormatOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSurfaceFormat::FormatOptions *sipCpp = 0;

    {
        const QSurfaceFormat::FormatOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QSurfaceFormat_FormatOptions, &a0, &a0State))
        {
            sipCpp = new QSurfaceFormat::FormatOptions(*a0);
            sipReleaseType(const_cast<QSurfaceFormat::FormatOptions *>(a0),sipType_QSurfaceFormat_FormatOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QSurfaceFormat::FormatOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSurfaceFormat::FormatOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QSurfaceFormat_FormatOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QSurfaceFormat_FormatOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QSurfaceFormat::FormatOptions **sipCppPtr = reinterpret_cast<QSurfaceFormat::FormatOptions **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QSurfaceFormat::FormatOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSurfaceFormat_FormatOption)) ||
            sipCanConvertToType(sipPy, sipType_QSurfaceFormat_FormatOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QSurfaceFormat_FormatOption)))
{
    *sipCppPtr = new QSurfaceFormat::FormatOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QSurfaceFormat::FormatOptions *>(sipConvertToType(sipPy, sipType_QSurfaceFormat_FormatOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQSurfaceFormatFormatOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSurfaceFormat_FormatOptions[] = {
    {(void *)slot_QSurfaceFormat_FormatOptions___bool__, bool_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___ne__, ne_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___eq__, eq_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___invert__, invert_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___and__, and_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___xor__, xor_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___or__, or_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___int__, int_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___ixor__, ixor_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___ior__, ior_slot},
    {(void *)slot_QSurfaceFormat_FormatOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QSurfaceFormat_FormatOptions, "\1QSurfaceFormat.FormatOptions(QSurfaceFormat.FormatOptions)\n"
    "QSurfaceFormat.FormatOptions(int)\n"
    "QSurfaceFormat.FormatOptions()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QSurfaceFormat_FormatOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSurfaceFormat__FormatOptions,
        {0}
    },
    {
        sipNameNr_FormatOptions,
        {259, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSurfaceFormat_FormatOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSurfaceFormat_FormatOptions,
    init_type_QSurfaceFormat_FormatOptions,
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
    dealloc_QSurfaceFormat_FormatOptions,
    assign_QSurfaceFormat_FormatOptions,
    array_QSurfaceFormat_FormatOptions,
    copy_QSurfaceFormat_FormatOptions,
    release_QSurfaceFormat_FormatOptions,
    cast_QSurfaceFormat_FormatOptions,
    convertTo_QSurfaceFormat_FormatOptions,
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
