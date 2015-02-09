/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:10 2015
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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"


extern "C" {static int slot_QWidget_RenderFlags___bool__(PyObject *);}
static int slot_QWidget_RenderFlags___bool__(PyObject *sipSelf)
{
    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWidget::RenderFlags::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___ne__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWidget::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWidget_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWidget::RenderFlags::Int() != a0->operator QWidget::RenderFlags::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"
            sipReleaseType(const_cast<QWidget::RenderFlags *>(a0),sipType_QWidget_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QWidget_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___eq__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QWidget::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWidget_RenderFlags, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QWidget::RenderFlags::Int() == a0->operator QWidget::RenderFlags::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"
            sipReleaseType(const_cast<QWidget::RenderFlags *>(a0),sipType_QWidget_RenderFlags,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QWidget_RenderFlags,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___invert__(PyObject *);}
static PyObject *slot_QWidget_RenderFlags___invert__(PyObject *sipSelf)
{
    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;


    {
        {
            QWidget::RenderFlags*sipRes;

            sipRes = new QWidget::RenderFlags(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___and__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWidget_RenderFlags, &a0, &a0State, &a1))
        {
            QWidget::RenderFlags*sipRes;

            sipRes = new QWidget::RenderFlags((*a0 & a1));
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___xor__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;
        QWidget::RenderFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWidget_RenderFlags, &a0, &a0State, sipType_QWidget_RenderFlags, &a1, &a1State))
        {
            QWidget::RenderFlags*sipRes;

            sipRes = new QWidget::RenderFlags((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QWidget_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWidget_RenderFlags, &a0, &a0State, &a1))
        {
            QWidget::RenderFlags*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QWidget::RenderFlags(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___or__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;
        QWidget::RenderFlags* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QWidget_RenderFlags, &a0, &a0State, sipType_QWidget_RenderFlags, &a1, &a1State))
        {
            QWidget::RenderFlags*sipRes;

            sipRes = new QWidget::RenderFlags((*a0 | *a1));
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);
            sipReleaseType(a1,sipType_QWidget_RenderFlags,a1State);

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QWidget_RenderFlags, &a0, &a0State, &a1))
        {
            QWidget::RenderFlags*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QWidget::RenderFlags(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);

            return sipConvertFromNewType(sipRes,sipType_QWidget_RenderFlags,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QWidget_RenderFlags___int__(PyObject *);}
static PyObject *slot_QWidget_RenderFlags___int__(PyObject *sipSelf)
{
    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

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


extern "C" {static PyObject *slot_QWidget_RenderFlags___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWidget_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWidget_RenderFlags, &a0, &a0State))
        {
            sipCpp->QWidget::RenderFlags::operator^=(*a0);
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);

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


extern "C" {static PyObject *slot_QWidget_RenderFlags___ior__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWidget_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QWidget::RenderFlags* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QWidget_RenderFlags, &a0, &a0State))
        {
            sipCpp->QWidget::RenderFlags::operator|=(*a0);
            sipReleaseType(a0,sipType_QWidget_RenderFlags,a0State);

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


extern "C" {static PyObject *slot_QWidget_RenderFlags___iand__(PyObject *,PyObject *);}
static PyObject *slot_QWidget_RenderFlags___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QWidget_RenderFlags)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QWidget::RenderFlags *sipCpp = reinterpret_cast<QWidget::RenderFlags *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QWidget_RenderFlags));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QWidget::RenderFlags::operator&=(a0);

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
extern "C" {static void *cast_QWidget_RenderFlags(void *, const sipTypeDef *);}
static void *cast_QWidget_RenderFlags(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWidget_RenderFlags)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWidget_RenderFlags(void *, int);}
static void release_QWidget_RenderFlags(void *sipCppV,int)
{
    delete reinterpret_cast<QWidget::RenderFlags *>(sipCppV);
}


extern "C" {static void assign_QWidget_RenderFlags(void *, SIP_SSIZE_T, const void *);}
static void assign_QWidget_RenderFlags(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWidget::RenderFlags *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWidget::RenderFlags *>(sipSrc);
}


extern "C" {static void *array_QWidget_RenderFlags(SIP_SSIZE_T);}
static void *array_QWidget_RenderFlags(SIP_SSIZE_T sipNrElem)
{
    return new QWidget::RenderFlags[sipNrElem];
}


extern "C" {static void *copy_QWidget_RenderFlags(const void *, SIP_SSIZE_T);}
static void *copy_QWidget_RenderFlags(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWidget::RenderFlags(reinterpret_cast<const QWidget::RenderFlags *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWidget_RenderFlags(sipSimpleWrapper *);}
static void dealloc_QWidget_RenderFlags(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWidget_RenderFlags(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWidget_RenderFlags(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWidget_RenderFlags(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWidget::RenderFlags *sipCpp = 0;

    {
        const QWidget::RenderFlags* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QWidget_RenderFlags, &a0, &a0State))
        {
            sipCpp = new QWidget::RenderFlags(*a0);
            sipReleaseType(const_cast<QWidget::RenderFlags *>(a0),sipType_QWidget_RenderFlags,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QWidget::RenderFlags(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWidget::RenderFlags();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QWidget_RenderFlags(PyObject *, void **, int *, PyObject *);}
static int convertTo_QWidget_RenderFlags(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QWidget::RenderFlags **sipCppPtr = reinterpret_cast<QWidget::RenderFlags **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QWidget::RenderFlags is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWidget_RenderFlag)) ||
            sipCanConvertToType(sipPy, sipType_QWidget_RenderFlags, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QWidget_RenderFlag)))
{
    *sipCppPtr = new QWidget::RenderFlags(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QWidget::RenderFlags *>(sipConvertToType(sipPy, sipType_QWidget_RenderFlags, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQWidgetRenderFlags.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QWidget_RenderFlags[] = {
    {(void *)slot_QWidget_RenderFlags___bool__, bool_slot},
    {(void *)slot_QWidget_RenderFlags___ne__, ne_slot},
    {(void *)slot_QWidget_RenderFlags___eq__, eq_slot},
    {(void *)slot_QWidget_RenderFlags___invert__, invert_slot},
    {(void *)slot_QWidget_RenderFlags___and__, and_slot},
    {(void *)slot_QWidget_RenderFlags___xor__, xor_slot},
    {(void *)slot_QWidget_RenderFlags___or__, or_slot},
    {(void *)slot_QWidget_RenderFlags___int__, int_slot},
    {(void *)slot_QWidget_RenderFlags___ixor__, ixor_slot},
    {(void *)slot_QWidget_RenderFlags___ior__, ior_slot},
    {(void *)slot_QWidget_RenderFlags___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QWidget_RenderFlags, "\1QWidget.RenderFlags(QWidget.RenderFlags)\n"
    "QWidget.RenderFlags(int)\n"
    "QWidget.RenderFlags()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QWidget_RenderFlags = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWidget__RenderFlags,
        {0}
    },
    {
        sipNameNr_RenderFlags,
        {454, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWidget_RenderFlags,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QWidget_RenderFlags,
    init_type_QWidget_RenderFlags,
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
    dealloc_QWidget_RenderFlags,
    assign_QWidget_RenderFlags,
    array_QWidget_RenderFlags,
    copy_QWidget_RenderFlags,
    release_QWidget_RenderFlags,
    cast_QWidget_RenderFlags,
    convertTo_QWidget_RenderFlags,
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
