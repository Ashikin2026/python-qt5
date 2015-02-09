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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qline.sip"
#include <qline.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQLine.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQLine.cpp"


PyDoc_STRVAR(doc_QLine_isNull, "QLine.isNull() -> bool");

extern "C" {static PyObject *meth_QLine_isNull(PyObject *, PyObject *);}
static PyObject *meth_QLine_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_isNull, doc_QLine_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_x1, "QLine.x1() -> int");

extern "C" {static PyObject *meth_QLine_x1(PyObject *, PyObject *);}
static PyObject *meth_QLine_x1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x1();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_x1, doc_QLine_x1);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_y1, "QLine.y1() -> int");

extern "C" {static PyObject *meth_QLine_y1(PyObject *, PyObject *);}
static PyObject *meth_QLine_y1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y1();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_y1, doc_QLine_y1);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_x2, "QLine.x2() -> int");

extern "C" {static PyObject *meth_QLine_x2(PyObject *, PyObject *);}
static PyObject *meth_QLine_x2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x2();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_x2, doc_QLine_x2);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_y2, "QLine.y2() -> int");

extern "C" {static PyObject *meth_QLine_y2(PyObject *, PyObject *);}
static PyObject *meth_QLine_y2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y2();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_y2, doc_QLine_y2);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_p1, "QLine.p1() -> QPoint");

extern "C" {static PyObject *meth_QLine_p1(PyObject *, PyObject *);}
static PyObject *meth_QLine_p1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->p1());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_p1, doc_QLine_p1);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_p2, "QLine.p2() -> QPoint");

extern "C" {static PyObject *meth_QLine_p2(PyObject *, PyObject *);}
static PyObject *meth_QLine_p2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->p2());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_p2, doc_QLine_p2);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_dx, "QLine.dx() -> int");

extern "C" {static PyObject *meth_QLine_dx(PyObject *, PyObject *);}
static PyObject *meth_QLine_dx(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->dx();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_dx, doc_QLine_dx);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_dy, "QLine.dy() -> int");

extern "C" {static PyObject *meth_QLine_dy(PyObject *, PyObject *);}
static PyObject *meth_QLine_dy(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QLine, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->dy();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_dy, doc_QLine_dy);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_translate, "QLine.translate(QPoint)\n"
    "QLine.translate(int, int)");

extern "C" {static PyObject *meth_QLine_translate(PyObject *, PyObject *);}
static PyObject *meth_QLine_translate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLine, &sipCpp, sipType_QPoint, &a0))
        {
            sipCpp->translate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        int a1;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QLine, &sipCpp, &a0, &a1))
        {
            sipCpp->translate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_translate, doc_QLine_translate);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_translated, "QLine.translated(QPoint) -> QLine\n"
    "QLine.translated(int, int) -> QLine");

extern "C" {static PyObject *meth_QLine_translated(PyObject *, PyObject *);}
static PyObject *meth_QLine_translated(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLine, &sipCpp, sipType_QPoint, &a0))
        {
            QLine*sipRes;

            sipRes = new QLine(sipCpp->translated(*a0));

            return sipConvertFromNewType(sipRes,sipType_QLine,NULL);
        }
    }

    {
        int a0;
        int a1;
        const QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_QLine, &sipCpp, &a0, &a1))
        {
            QLine*sipRes;

            sipRes = new QLine(sipCpp->translated(a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QLine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_translated, doc_QLine_translated);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_setP1, "QLine.setP1(QPoint)");

extern "C" {static PyObject *meth_QLine_setP1(PyObject *, PyObject *);}
static PyObject *meth_QLine_setP1(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLine, &sipCpp, sipType_QPoint, &a0))
        {
            sipCpp->setP1(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_setP1, doc_QLine_setP1);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_setP2, "QLine.setP2(QPoint)");

extern "C" {static PyObject *meth_QLine_setP2(PyObject *, PyObject *);}
static PyObject *meth_QLine_setP2(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QLine, &sipCpp, sipType_QPoint, &a0))
        {
            sipCpp->setP2(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_setP2, doc_QLine_setP2);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_setPoints, "QLine.setPoints(QPoint, QPoint)");

extern "C" {static PyObject *meth_QLine_setPoints(PyObject *, PyObject *);}
static PyObject *meth_QLine_setPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPoint* a0;
        const QPoint* a1;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_QLine, &sipCpp, sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
            sipCpp->setPoints(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_setPoints, doc_QLine_setPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QLine_setLine, "QLine.setLine(int, int, int, int)");

extern "C" {static PyObject *meth_QLine_setLine(PyObject *, PyObject *);}
static PyObject *meth_QLine_setLine(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
        int a3;
        QLine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Biiii", &sipSelf, sipType_QLine, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->setLine(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QLine, sipName_setLine, doc_QLine_setLine);

    return NULL;
}


extern "C" {static PyObject *slot_QLine___eq__(PyObject *,PyObject *);}
static PyObject *slot_QLine___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QLine *sipCpp = reinterpret_cast<QLine *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLine));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLine* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLine, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QLine::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QLine,sipSelf,sipArg);
}


extern "C" {static int slot_QLine___bool__(PyObject *);}
static int slot_QLine___bool__(PyObject *sipSelf)
{
    QLine *sipCpp = reinterpret_cast<QLine *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLine));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 68 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qline.sip"
        sipRes = !sipCpp->isNull();
#line 524 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQLine.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLine___repr__(PyObject *);}
static PyObject *slot_QLine___repr__(PyObject *sipSelf)
{
    QLine *sipCpp = reinterpret_cast<QLine *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLine));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 44 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qline.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QLine()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QLine()");
        #endif
        }
        else
        {
            sipRes =
        #if PY_MAJOR_VERSION >= 3
                PyUnicode_FromFormat
        #else
                PyString_FromFormat
        #endif
                    ("PyQt5.QtCore.QLine(%i, %i, %i, %i)",
                    sipCpp->x1(), sipCpp->y1(), sipCpp->x2(), sipCpp->y2());
        }
#line 567 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQLine.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QLine___ne__(PyObject *,PyObject *);}
static PyObject *slot_QLine___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QLine *sipCpp = reinterpret_cast<QLine *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QLine));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QLine* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QLine, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QLine::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QLine,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QLine(void *, const sipTypeDef *);}
static void *cast_QLine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QLine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QLine(void *, int);}
static void release_QLine(void *sipCppV,int)
{
    delete reinterpret_cast<QLine *>(sipCppV);
}


extern "C" {static PyObject *pickle_QLine(void *);}
static PyObject *pickle_QLine(void *sipCppV)
{
    QLine *sipCpp = reinterpret_cast<QLine *>(sipCppV);
    PyObject *sipRes;

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtCore/qline.sip"
    sipRes = Py_BuildValue((char *)"iiii", sipCpp->x1(), sipCpp->y1(), sipCpp->x2(), sipCpp->y2());
#line 636 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtCore/sipQtCoreQLine.cpp"

    return sipRes;
}


extern "C" {static void assign_QLine(void *, SIP_SSIZE_T, const void *);}
static void assign_QLine(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QLine *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QLine *>(sipSrc);
}


extern "C" {static void *array_QLine(SIP_SSIZE_T);}
static void *array_QLine(SIP_SSIZE_T sipNrElem)
{
    return new QLine[sipNrElem];
}


extern "C" {static void *copy_QLine(const void *, SIP_SSIZE_T);}
static void *copy_QLine(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QLine(reinterpret_cast<const QLine *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QLine(sipSimpleWrapper *);}
static void dealloc_QLine(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QLine(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QLine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QLine(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QLine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QLine();

            return sipCpp;
        }
    }

    {
        const QPoint* a0;
        const QPoint* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J9", sipType_QPoint, &a0, sipType_QPoint, &a1))
        {
            sipCpp = new QLine(*a0,*a1);

            return sipCpp;
        }
    }

    {
        int a0;
        int a1;
        int a2;
        int a3;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "iiii", &a0, &a1, &a2, &a3))
        {
            sipCpp = new QLine(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QLine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QLine, &a0))
        {
            sipCpp = new QLine(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QLine[] = {
    {(void *)slot_QLine___eq__, eq_slot},
    {(void *)slot_QLine___bool__, bool_slot},
    {(void *)slot_QLine___repr__, repr_slot},
    {(void *)slot_QLine___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QLine[] = {
    {SIP_MLNAME_CAST(sipName_dx), meth_QLine_dx, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_dx)},
    {SIP_MLNAME_CAST(sipName_dy), meth_QLine_dy, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_dy)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QLine_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_isNull)},
    {SIP_MLNAME_CAST(sipName_p1), meth_QLine_p1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_p1)},
    {SIP_MLNAME_CAST(sipName_p2), meth_QLine_p2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_p2)},
    {SIP_MLNAME_CAST(sipName_setLine), meth_QLine_setLine, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_setLine)},
    {SIP_MLNAME_CAST(sipName_setP1), meth_QLine_setP1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_setP1)},
    {SIP_MLNAME_CAST(sipName_setP2), meth_QLine_setP2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_setP2)},
    {SIP_MLNAME_CAST(sipName_setPoints), meth_QLine_setPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_setPoints)},
    {SIP_MLNAME_CAST(sipName_translate), meth_QLine_translate, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_translate)},
    {SIP_MLNAME_CAST(sipName_translated), meth_QLine_translated, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_translated)},
    {SIP_MLNAME_CAST(sipName_x1), meth_QLine_x1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_x1)},
    {SIP_MLNAME_CAST(sipName_x2), meth_QLine_x2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_x2)},
    {SIP_MLNAME_CAST(sipName_y1), meth_QLine_y1, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_y1)},
    {SIP_MLNAME_CAST(sipName_y2), meth_QLine_y2, METH_VARARGS, SIP_MLDOC_CAST(doc_QLine_y2)}
};

PyDoc_STRVAR(doc_QLine, "\1QLine()\n"
    "QLine(QPoint, QPoint)\n"
    "QLine(int, int, int, int)\n"
    "QLine(QLine)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QLine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QLine,
        {0}
    },
    {
        sipNameNr_QLine,
        {0, 0, 1},
        15, methods_QLine,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QLine,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QLine,
    init_type_QLine,
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
    dealloc_QLine,
    assign_QLine,
    array_QLine,
    copy_QLine,
    release_QLine,
    cast_QLine,
    0,
    0,
    0,
    pickle_QLine,
    0,
    0
},
    0,
    0,
    0,
    0
};
