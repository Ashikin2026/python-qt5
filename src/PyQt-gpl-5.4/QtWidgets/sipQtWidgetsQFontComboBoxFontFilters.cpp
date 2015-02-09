/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:12 2015
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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qfontcombobox.sip"
#include <qfontcombobox.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWidgets/qfontcombobox.sip"
#include <qfontcombobox.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"


extern "C" {static int slot_QFontComboBox_FontFilters___bool__(PyObject *);}
static int slot_QFontComboBox_FontFilters___bool__(PyObject *sipSelf)
{
    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontComboBox::FontFilters::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___ne__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontComboBox::FontFilters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontComboBox::FontFilters::Int() != a0->operator QFontComboBox::FontFilters::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"
            sipReleaseType(const_cast<QFontComboBox::FontFilters *>(a0),sipType_QFontComboBox_FontFilters,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QFontComboBox_FontFilters,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___eq__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QFontComboBox::FontFilters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QFontComboBox::FontFilters::Int() == a0->operator QFontComboBox::FontFilters::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"
            sipReleaseType(const_cast<QFontComboBox::FontFilters *>(a0),sipType_QFontComboBox_FontFilters,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QFontComboBox_FontFilters,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___invert__(PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___invert__(PyObject *sipSelf)
{
    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;


    {
        {
            QFontComboBox::FontFilters*sipRes;

            sipRes = new QFontComboBox::FontFilters(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___and__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontComboBox_FontFilters, &a0, &a0State, &a1))
        {
            QFontComboBox::FontFilters*sipRes;

            sipRes = new QFontComboBox::FontFilters((*a0 & a1));
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___xor__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;
        QFontComboBox::FontFilters* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State, sipType_QFontComboBox_FontFilters, &a1, &a1State))
        {
            QFontComboBox::FontFilters*sipRes;

            sipRes = new QFontComboBox::FontFilters((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);
            sipReleaseType(a1,sipType_QFontComboBox_FontFilters,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontComboBox_FontFilters, &a0, &a0State, &a1))
        {
            QFontComboBox::FontFilters*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QFontComboBox::FontFilters(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___or__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;
        QFontComboBox::FontFilters* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State, sipType_QFontComboBox_FontFilters, &a1, &a1State))
        {
            QFontComboBox::FontFilters*sipRes;

            sipRes = new QFontComboBox::FontFilters((*a0 | *a1));
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);
            sipReleaseType(a1,sipType_QFontComboBox_FontFilters,a1State);

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QFontComboBox_FontFilters, &a0, &a0State, &a1))
        {
            QFontComboBox::FontFilters*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QFontComboBox::FontFilters(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);

            return sipConvertFromNewType(sipRes,sipType_QFontComboBox_FontFilters,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___int__(PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___int__(PyObject *sipSelf)
{
    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

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


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontComboBox_FontFilters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State))
        {
            sipCpp->QFontComboBox::FontFilters::operator^=(*a0);
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);

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


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___ior__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontComboBox_FontFilters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QFontComboBox::FontFilters* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QFontComboBox_FontFilters, &a0, &a0State))
        {
            sipCpp->QFontComboBox::FontFilters::operator|=(*a0);
            sipReleaseType(a0,sipType_QFontComboBox_FontFilters,a0State);

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


extern "C" {static PyObject *slot_QFontComboBox_FontFilters___iand__(PyObject *,PyObject *);}
static PyObject *slot_QFontComboBox_FontFilters___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QFontComboBox_FontFilters)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QFontComboBox::FontFilters *sipCpp = reinterpret_cast<QFontComboBox::FontFilters *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QFontComboBox_FontFilters));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QFontComboBox::FontFilters::operator&=(a0);

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
extern "C" {static void *cast_QFontComboBox_FontFilters(void *, const sipTypeDef *);}
static void *cast_QFontComboBox_FontFilters(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QFontComboBox_FontFilters)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QFontComboBox_FontFilters(void *, int);}
static void release_QFontComboBox_FontFilters(void *sipCppV,int)
{
    delete reinterpret_cast<QFontComboBox::FontFilters *>(sipCppV);
}


extern "C" {static void assign_QFontComboBox_FontFilters(void *, SIP_SSIZE_T, const void *);}
static void assign_QFontComboBox_FontFilters(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QFontComboBox::FontFilters *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QFontComboBox::FontFilters *>(sipSrc);
}


extern "C" {static void *array_QFontComboBox_FontFilters(SIP_SSIZE_T);}
static void *array_QFontComboBox_FontFilters(SIP_SSIZE_T sipNrElem)
{
    return new QFontComboBox::FontFilters[sipNrElem];
}


extern "C" {static void *copy_QFontComboBox_FontFilters(const void *, SIP_SSIZE_T);}
static void *copy_QFontComboBox_FontFilters(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QFontComboBox::FontFilters(reinterpret_cast<const QFontComboBox::FontFilters *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QFontComboBox_FontFilters(sipSimpleWrapper *);}
static void dealloc_QFontComboBox_FontFilters(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QFontComboBox_FontFilters(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QFontComboBox_FontFilters(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QFontComboBox_FontFilters(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QFontComboBox::FontFilters *sipCpp = 0;

    {
        const QFontComboBox::FontFilters* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QFontComboBox_FontFilters, &a0, &a0State))
        {
            sipCpp = new QFontComboBox::FontFilters(*a0);
            sipReleaseType(const_cast<QFontComboBox::FontFilters *>(a0),sipType_QFontComboBox_FontFilters,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QFontComboBox::FontFilters(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QFontComboBox::FontFilters();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QFontComboBox_FontFilters(PyObject *, void **, int *, PyObject *);}
static int convertTo_QFontComboBox_FontFilters(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QFontComboBox::FontFilters **sipCppPtr = reinterpret_cast<QFontComboBox::FontFilters **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QFontComboBox::FontFilters is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFontComboBox_FontFilter)) ||
            sipCanConvertToType(sipPy, sipType_QFontComboBox_FontFilters, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QFontComboBox_FontFilter)))
{
    *sipCppPtr = new QFontComboBox::FontFilters(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QFontComboBox::FontFilters *>(sipConvertToType(sipPy, sipType_QFontComboBox_FontFilters, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWidgets/sipQtWidgetsQFontComboBoxFontFilters.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QFontComboBox_FontFilters[] = {
    {(void *)slot_QFontComboBox_FontFilters___bool__, bool_slot},
    {(void *)slot_QFontComboBox_FontFilters___ne__, ne_slot},
    {(void *)slot_QFontComboBox_FontFilters___eq__, eq_slot},
    {(void *)slot_QFontComboBox_FontFilters___invert__, invert_slot},
    {(void *)slot_QFontComboBox_FontFilters___and__, and_slot},
    {(void *)slot_QFontComboBox_FontFilters___xor__, xor_slot},
    {(void *)slot_QFontComboBox_FontFilters___or__, or_slot},
    {(void *)slot_QFontComboBox_FontFilters___int__, int_slot},
    {(void *)slot_QFontComboBox_FontFilters___ixor__, ixor_slot},
    {(void *)slot_QFontComboBox_FontFilters___ior__, ior_slot},
    {(void *)slot_QFontComboBox_FontFilters___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QFontComboBox_FontFilters, "\1QFontComboBox.FontFilters(QFontComboBox.FontFilters)\n"
    "QFontComboBox.FontFilters(int)\n"
    "QFontComboBox.FontFilters()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QFontComboBox_FontFilters = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QFontComboBox__FontFilters,
        {0}
    },
    {
        sipNameNr_FontFilters,
        {88, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QFontComboBox_FontFilters,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QFontComboBox_FontFilters,
    init_type_QFontComboBox_FontFilters,
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
    dealloc_QFontComboBox_FontFilters,
    assign_QFontComboBox_FontFilters,
    array_QFontComboBox_FontFilters,
    copy_QFontComboBox_FontFilters,
    release_QFontComboBox_FontFilters,
    cast_QFontComboBox_FontFilters,
    convertTo_QFontComboBox_FontFilters,
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
