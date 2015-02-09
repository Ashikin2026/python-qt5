/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:31 2015
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

#include "sipAPIQtMultimedia.h"

#line 56 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtMultimedia/qcamerafocus.sip"
#include <qcamerafocus.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"

#line 56 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtMultimedia/qcamerafocus.sip"
#include <qcamerafocus.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"


extern "C" {static int slot_QCameraFocus_FocusModes___bool__(PyObject *);}
static int slot_QCameraFocus_FocusModes___bool__(PyObject *sipSelf)
{
    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraFocus::FocusModes::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___ne__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraFocus::FocusModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraFocus::FocusModes::Int() != a0->operator QCameraFocus::FocusModes::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"
            sipReleaseType(const_cast<QCameraFocus::FocusModes *>(a0),sipType_QCameraFocus_FocusModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,ne_slot,sipType_QCameraFocus_FocusModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___eq__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QCameraFocus::FocusModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QCameraFocus::FocusModes::Int() == a0->operator QCameraFocus::FocusModes::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"
            sipReleaseType(const_cast<QCameraFocus::FocusModes *>(a0),sipType_QCameraFocus_FocusModes,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,eq_slot,sipType_QCameraFocus_FocusModes,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___invert__(PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___invert__(PyObject *sipSelf)
{
    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;


    {
        {
            QCameraFocus::FocusModes*sipRes;

            sipRes = new QCameraFocus::FocusModes(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___and__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraFocus_FocusModes, &a0, &a0State, &a1))
        {
            QCameraFocus::FocusModes*sipRes;

            sipRes = new QCameraFocus::FocusModes((*a0 & a1));
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___xor__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;
        QCameraFocus::FocusModes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State, sipType_QCameraFocus_FocusModes, &a1, &a1State))
        {
            QCameraFocus::FocusModes*sipRes;

            sipRes = new QCameraFocus::FocusModes((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);
            sipReleaseType(a1,sipType_QCameraFocus_FocusModes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraFocus_FocusModes, &a0, &a0State, &a1))
        {
            QCameraFocus::FocusModes*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QCameraFocus::FocusModes(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___or__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;
        QCameraFocus::FocusModes* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State, sipType_QCameraFocus_FocusModes, &a1, &a1State))
        {
            QCameraFocus::FocusModes*sipRes;

            sipRes = new QCameraFocus::FocusModes((*a0 | *a1));
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);
            sipReleaseType(a1,sipType_QCameraFocus_FocusModes,a1State);

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QCameraFocus_FocusModes, &a0, &a0State, &a1))
        {
            QCameraFocus::FocusModes*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QCameraFocus::FocusModes(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);

            return sipConvertFromNewType(sipRes,sipType_QCameraFocus_FocusModes,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtMultimedia,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___int__(PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___int__(PyObject *sipSelf)
{
    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

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


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraFocus_FocusModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State))
        {
            sipCpp->QCameraFocus::FocusModes::operator^=(*a0);
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);

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


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___ior__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraFocus_FocusModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QCameraFocus::FocusModes* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QCameraFocus_FocusModes, &a0, &a0State))
        {
            sipCpp->QCameraFocus::FocusModes::operator|=(*a0);
            sipReleaseType(a0,sipType_QCameraFocus_FocusModes,a0State);

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


extern "C" {static PyObject *slot_QCameraFocus_FocusModes___iand__(PyObject *,PyObject *);}
static PyObject *slot_QCameraFocus_FocusModes___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QCameraFocus_FocusModes)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QCameraFocus::FocusModes *sipCpp = reinterpret_cast<QCameraFocus::FocusModes *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QCameraFocus_FocusModes));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QCameraFocus::FocusModes::operator&=(a0);

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
extern "C" {static void *cast_QCameraFocus_FocusModes(void *, const sipTypeDef *);}
static void *cast_QCameraFocus_FocusModes(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCameraFocus_FocusModes)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCameraFocus_FocusModes(void *, int);}
static void release_QCameraFocus_FocusModes(void *sipCppV,int)
{
    delete reinterpret_cast<QCameraFocus::FocusModes *>(sipCppV);
}


extern "C" {static void assign_QCameraFocus_FocusModes(void *, SIP_SSIZE_T, const void *);}
static void assign_QCameraFocus_FocusModes(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCameraFocus::FocusModes *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCameraFocus::FocusModes *>(sipSrc);
}


extern "C" {static void *array_QCameraFocus_FocusModes(SIP_SSIZE_T);}
static void *array_QCameraFocus_FocusModes(SIP_SSIZE_T sipNrElem)
{
    return new QCameraFocus::FocusModes[sipNrElem];
}


extern "C" {static void *copy_QCameraFocus_FocusModes(const void *, SIP_SSIZE_T);}
static void *copy_QCameraFocus_FocusModes(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCameraFocus::FocusModes(reinterpret_cast<const QCameraFocus::FocusModes *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCameraFocus_FocusModes(sipSimpleWrapper *);}
static void dealloc_QCameraFocus_FocusModes(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCameraFocus_FocusModes(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCameraFocus_FocusModes(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCameraFocus_FocusModes(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCameraFocus::FocusModes *sipCpp = 0;

    {
        const QCameraFocus::FocusModes* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QCameraFocus_FocusModes, &a0, &a0State))
        {
            sipCpp = new QCameraFocus::FocusModes(*a0);
            sipReleaseType(const_cast<QCameraFocus::FocusModes *>(a0),sipType_QCameraFocus_FocusModes,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QCameraFocus::FocusModes(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QCameraFocus::FocusModes();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QCameraFocus_FocusModes(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCameraFocus_FocusModes(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QCameraFocus::FocusModes **sipCppPtr = reinterpret_cast<QCameraFocus::FocusModes **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QCameraFocus::FocusModes is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCameraFocus_FocusMode)) ||
            sipCanConvertToType(sipPy, sipType_QCameraFocus_FocusModes, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QCameraFocus_FocusMode)))
{
    *sipCppPtr = new QCameraFocus::FocusModes(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCameraFocus::FocusModes *>(sipConvertToType(sipPy, sipType_QCameraFocus_FocusModes, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQCameraFocusFocusModes.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QCameraFocus_FocusModes[] = {
    {(void *)slot_QCameraFocus_FocusModes___bool__, bool_slot},
    {(void *)slot_QCameraFocus_FocusModes___ne__, ne_slot},
    {(void *)slot_QCameraFocus_FocusModes___eq__, eq_slot},
    {(void *)slot_QCameraFocus_FocusModes___invert__, invert_slot},
    {(void *)slot_QCameraFocus_FocusModes___and__, and_slot},
    {(void *)slot_QCameraFocus_FocusModes___xor__, xor_slot},
    {(void *)slot_QCameraFocus_FocusModes___or__, or_slot},
    {(void *)slot_QCameraFocus_FocusModes___int__, int_slot},
    {(void *)slot_QCameraFocus_FocusModes___ixor__, ixor_slot},
    {(void *)slot_QCameraFocus_FocusModes___ior__, ior_slot},
    {(void *)slot_QCameraFocus_FocusModes___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QCameraFocus_FocusModes, "\1QCameraFocus.FocusModes(QCameraFocus.FocusModes)\n"
    "QCameraFocus.FocusModes(int)\n"
    "QCameraFocus.FocusModes()");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QCameraFocus_FocusModes = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCameraFocus__FocusModes,
        {0}
    },
    {
        sipNameNr_FocusModes,
        {38, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCameraFocus_FocusModes,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QCameraFocus_FocusModes,
    init_type_QCameraFocus_FocusModes,
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
    dealloc_QCameraFocus_FocusModes,
    assign_QCameraFocus_FocusModes,
    array_QCameraFocus_FocusModes,
    copy_QCameraFocus_FocusModes,
    release_QCameraFocus_FocusModes,
    cast_QCameraFocus_FocusModes,
    convertTo_QCameraFocus_FocusModes,
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
