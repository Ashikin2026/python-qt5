/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:25 2015
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

#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qopenglshaderprogram.sip"
#include <qopenglshaderprogram.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"


extern "C" {static int slot_QOpenGLShader_ShaderType___bool__(PyObject *);}
static int slot_QOpenGLShader_ShaderType___bool__(PyObject *sipSelf)
{
    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() != a0->operator QOpenGLShader::ShaderType::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(const_cast<QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QOpenGLShader_ShaderType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLShader::ShaderType::Int() == a0->operator QOpenGLShader::ShaderType::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(const_cast<QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QOpenGLShader_ShaderType,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___invert__(PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___invert__(PyObject *sipSelf)
{
    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;


    {
        {
            QOpenGLShader::ShaderType*sipRes;

            sipRes = new QOpenGLShader::ShaderType(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QOpenGLShader::ShaderType*sipRes;

            sipRes = new QOpenGLShader::ShaderType((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        QOpenGLShader::ShaderType* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State, sipType_QOpenGLShader_ShaderType, &a1, &a1State))
        {
            QOpenGLShader::ShaderType*sipRes;

            sipRes = new QOpenGLShader::ShaderType((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);
            sipReleaseType(a1,sipType_QOpenGLShader_ShaderType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QOpenGLShader::ShaderType*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLShader::ShaderType(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        QOpenGLShader::ShaderType* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State, sipType_QOpenGLShader_ShaderType, &a1, &a1State))
        {
            QOpenGLShader::ShaderType*sipRes;

            sipRes = new QOpenGLShader::ShaderType((*a0 | *a1));
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);
            sipReleaseType(a1,sipType_QOpenGLShader_ShaderType,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLShader_ShaderType, &a0, &a0State, &a1))
        {
            QOpenGLShader::ShaderType*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLShader::ShaderType(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLShader_ShaderType,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___int__(PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___int__(PyObject *sipSelf)
{
    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            sipCpp->QOpenGLShader::ShaderType::operator^=(*a0);
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            sipCpp->QOpenGLShader::ShaderType::operator|=(*a0);
            sipReleaseType(a0,sipType_QOpenGLShader_ShaderType,a0State);

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


extern "C" {static PyObject *slot_QOpenGLShader_ShaderType___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLShader_ShaderType___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderType)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLShader::ShaderType *sipCpp = reinterpret_cast<QOpenGLShader::ShaderType *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLShader_ShaderType));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QOpenGLShader::ShaderType::operator&=(a0);

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
extern "C" {static void *cast_QOpenGLShader_ShaderType(void *, const sipTypeDef *);}
static void *cast_QOpenGLShader_ShaderType(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QOpenGLShader_ShaderType)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLShader_ShaderType(void *, int);}
static void release_QOpenGLShader_ShaderType(void *sipCppV,int)
{
    delete reinterpret_cast<QOpenGLShader::ShaderType *>(sipCppV);
}


extern "C" {static void assign_QOpenGLShader_ShaderType(void *, SIP_SSIZE_T, const void *);}
static void assign_QOpenGLShader_ShaderType(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QOpenGLShader::ShaderType *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QOpenGLShader::ShaderType *>(sipSrc);
}


extern "C" {static void *array_QOpenGLShader_ShaderType(SIP_SSIZE_T);}
static void *array_QOpenGLShader_ShaderType(SIP_SSIZE_T sipNrElem)
{
    return new QOpenGLShader::ShaderType[sipNrElem];
}


extern "C" {static void *copy_QOpenGLShader_ShaderType(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLShader_ShaderType(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QOpenGLShader::ShaderType(reinterpret_cast<const QOpenGLShader::ShaderType *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLShader_ShaderType(sipSimpleWrapper *);}
static void dealloc_QOpenGLShader_ShaderType(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLShader_ShaderType(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QOpenGLShader_ShaderType(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLShader_ShaderType(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QOpenGLShader::ShaderType *sipCpp = 0;

    {
        const QOpenGLShader::ShaderType* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLShader_ShaderType, &a0, &a0State))
        {
            sipCpp = new QOpenGLShader::ShaderType(*a0);
            sipReleaseType(const_cast<QOpenGLShader::ShaderType *>(a0),sipType_QOpenGLShader_ShaderType,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QOpenGLShader::ShaderType(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QOpenGLShader::ShaderType();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLShader_ShaderType(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLShader_ShaderType(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QOpenGLShader::ShaderType **sipCppPtr = reinterpret_cast<QOpenGLShader::ShaderType **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLShader::ShaderType is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderTypeBit)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLShader_ShaderType, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLShader_ShaderTypeBit)))
{
    *sipCppPtr = new QOpenGLShader::ShaderType(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLShader::ShaderType *>(sipConvertToType(sipPy, sipType_QOpenGLShader_ShaderType, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQOpenGLShaderShaderType.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLShader_ShaderType[] = {
    {(void *)slot_QOpenGLShader_ShaderType___bool__, bool_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ne__, ne_slot},
    {(void *)slot_QOpenGLShader_ShaderType___eq__, eq_slot},
    {(void *)slot_QOpenGLShader_ShaderType___invert__, invert_slot},
    {(void *)slot_QOpenGLShader_ShaderType___and__, and_slot},
    {(void *)slot_QOpenGLShader_ShaderType___xor__, xor_slot},
    {(void *)slot_QOpenGLShader_ShaderType___or__, or_slot},
    {(void *)slot_QOpenGLShader_ShaderType___int__, int_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ixor__, ixor_slot},
    {(void *)slot_QOpenGLShader_ShaderType___ior__, ior_slot},
    {(void *)slot_QOpenGLShader_ShaderType___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLShader_ShaderType, "\1QOpenGLShader.ShaderType(QOpenGLShader.ShaderType)\n"
    "QOpenGLShader.ShaderType(int)\n"
    "QOpenGLShader.ShaderType()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLShader_ShaderType = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLShader__ShaderType,
        {0}
    },
    {
        sipNameNr_ShaderType,
        {144, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLShader_ShaderType,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLShader_ShaderType,
    init_type_QOpenGLShader_ShaderType,
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
    dealloc_QOpenGLShader_ShaderType,
    assign_QOpenGLShader_ShaderType,
    array_QOpenGLShader_ShaderType,
    copy_QOpenGLShader_ShaderType,
    release_QOpenGLShader_ShaderType,
    cast_QOpenGLShader_ShaderType,
    convertTo_QOpenGLShader_ShaderType,
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
