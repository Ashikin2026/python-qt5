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

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qpagelayout.sip"
#include <qpagelayout.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qpagesize.sip"
#include <qpagesize.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"
#line 119 "sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"
#line 30 "sip/QtCore/qmargins.sip"
#include <qmargins.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPageLayout.cpp"


PyDoc_STRVAR(doc_QPageLayout_swap, "QPageLayout.swap(QPageLayout)");

extern "C" {static PyObject *meth_QPageLayout_swap(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageLayout* a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_swap, doc_QPageLayout_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_isEquivalentTo, "QPageLayout.isEquivalentTo(QPageLayout) -> bool");

extern "C" {static PyObject *meth_QPageLayout_isEquivalentTo(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_isEquivalentTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout* a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->isEquivalentTo(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_isEquivalentTo, doc_QPageLayout_isEquivalentTo);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_isValid, "QPageLayout.isValid() -> bool");

extern "C" {static PyObject *meth_QPageLayout_isValid(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_isValid, doc_QPageLayout_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setMode, "QPageLayout.setMode(QPageLayout.Mode)");

extern "C" {static PyObject *meth_QPageLayout_setMode(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageLayout::Mode a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Mode, &a0))
        {
            sipCpp->setMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setMode, doc_QPageLayout_setMode);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_mode, "QPageLayout.mode() -> QPageLayout.Mode");

extern "C" {static PyObject *meth_QPageLayout_mode(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_mode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QPageLayout::Mode sipRes;

            sipRes = sipCpp->mode();

            return sipConvertFromEnum(sipRes,sipType_QPageLayout_Mode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_mode, doc_QPageLayout_mode);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setPageSize, "QPageLayout.setPageSize(QPageSize, QMarginsF minMargins=QMarginsF(0,0,0,0))");

extern "C" {static PyObject *meth_QPageLayout_setPageSize(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setPageSize(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageSize* a0;
        const QMarginsF& a1def = QMarginsF(0,0,0,0);
        const QMarginsF* a1 = &a1def;
        QPageLayout *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_minMargins,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|J9", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageSize, &a0, sipType_QMarginsF, &a1))
        {
            sipCpp->setPageSize(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setPageSize, doc_QPageLayout_setPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_pageSize, "QPageLayout.pageSize() -> QPageSize");

extern "C" {static PyObject *meth_QPageLayout_pageSize(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_pageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QPageSize*sipRes;

            sipRes = new QPageSize(sipCpp->pageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_pageSize, doc_QPageLayout_pageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setOrientation, "QPageLayout.setOrientation(QPageLayout.Orientation)");

extern "C" {static PyObject *meth_QPageLayout_setOrientation(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setOrientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageLayout::Orientation a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Orientation, &a0))
        {
            sipCpp->setOrientation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setOrientation, doc_QPageLayout_setOrientation);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_orientation, "QPageLayout.orientation() -> QPageLayout.Orientation");

extern "C" {static PyObject *meth_QPageLayout_orientation(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_orientation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QPageLayout::Orientation sipRes;

            sipRes = sipCpp->orientation();

            return sipConvertFromEnum(sipRes,sipType_QPageLayout_Orientation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_orientation, doc_QPageLayout_orientation);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setUnits, "QPageLayout.setUnits(QPageLayout.Unit)");

extern "C" {static PyObject *meth_QPageLayout_setUnits(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setUnits(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPageLayout::Unit a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Unit, &a0))
        {
            sipCpp->setUnits(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setUnits, doc_QPageLayout_setUnits);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_units, "QPageLayout.units() -> QPageLayout.Unit");

extern "C" {static PyObject *meth_QPageLayout_units(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_units(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QPageLayout::Unit sipRes;

            sipRes = sipCpp->units();

            return sipConvertFromEnum(sipRes,sipType_QPageLayout_Unit);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_units, doc_QPageLayout_units);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setMargins, "QPageLayout.setMargins(QMarginsF) -> bool");

extern "C" {static PyObject *meth_QPageLayout_setMargins(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QMarginsF, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setMargins(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setMargins, doc_QPageLayout_setMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setLeftMargin, "QPageLayout.setLeftMargin(float) -> bool");

extern "C" {static PyObject *meth_QPageLayout_setLeftMargin(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setLeftMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setLeftMargin(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setLeftMargin, doc_QPageLayout_setLeftMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setRightMargin, "QPageLayout.setRightMargin(float) -> bool");

extern "C" {static PyObject *meth_QPageLayout_setRightMargin(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setRightMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setRightMargin(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setRightMargin, doc_QPageLayout_setRightMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setTopMargin, "QPageLayout.setTopMargin(float) -> bool");

extern "C" {static PyObject *meth_QPageLayout_setTopMargin(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setTopMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setTopMargin(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setTopMargin, doc_QPageLayout_setTopMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setBottomMargin, "QPageLayout.setBottomMargin(float) -> bool");

extern "C" {static PyObject *meth_QPageLayout_setBottomMargin(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setBottomMargin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setBottomMargin(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setBottomMargin, doc_QPageLayout_setBottomMargin);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_margins, "QPageLayout.margins() -> QMarginsF\n"
    "QPageLayout.margins(QPageLayout.Unit) -> QMarginsF");

extern "C" {static PyObject *meth_QPageLayout_margins(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_margins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(sipCpp->margins());

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    {
        QPageLayout::Unit a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Unit, &a0))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(sipCpp->margins(a0));

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_margins, doc_QPageLayout_margins);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_marginsPoints, "QPageLayout.marginsPoints() -> QMargins");

extern "C" {static PyObject *meth_QPageLayout_marginsPoints(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_marginsPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QMargins*sipRes;

            sipRes = new QMargins(sipCpp->marginsPoints());

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_marginsPoints, doc_QPageLayout_marginsPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_marginsPixels, "QPageLayout.marginsPixels(int) -> QMargins");

extern "C" {static PyObject *meth_QPageLayout_marginsPixels(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_marginsPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            QMargins*sipRes;

            sipRes = new QMargins(sipCpp->marginsPixels(a0));

            return sipConvertFromNewType(sipRes,sipType_QMargins,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_marginsPixels, doc_QPageLayout_marginsPixels);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_setMinimumMargins, "QPageLayout.setMinimumMargins(QMarginsF)");

extern "C" {static PyObject *meth_QPageLayout_setMinimumMargins(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_setMinimumMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QMarginsF* a0;
        QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QMarginsF, &a0))
        {
            sipCpp->setMinimumMargins(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_setMinimumMargins, doc_QPageLayout_setMinimumMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_minimumMargins, "QPageLayout.minimumMargins() -> QMarginsF");

extern "C" {static PyObject *meth_QPageLayout_minimumMargins(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_minimumMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(sipCpp->minimumMargins());

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_minimumMargins, doc_QPageLayout_minimumMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_maximumMargins, "QPageLayout.maximumMargins() -> QMarginsF");

extern "C" {static PyObject *meth_QPageLayout_maximumMargins(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_maximumMargins(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QMarginsF*sipRes;

            sipRes = new QMarginsF(sipCpp->maximumMargins());

            return sipConvertFromNewType(sipRes,sipType_QMarginsF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_maximumMargins, doc_QPageLayout_maximumMargins);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_fullRect, "QPageLayout.fullRect() -> QRectF\n"
    "QPageLayout.fullRect(QPageLayout.Unit) -> QRectF");

extern "C" {static PyObject *meth_QPageLayout_fullRect(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_fullRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->fullRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        QPageLayout::Unit a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Unit, &a0))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->fullRect(a0));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_fullRect, doc_QPageLayout_fullRect);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_fullRectPoints, "QPageLayout.fullRectPoints() -> QRect");

extern "C" {static PyObject *meth_QPageLayout_fullRectPoints(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_fullRectPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->fullRectPoints());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_fullRectPoints, doc_QPageLayout_fullRectPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_fullRectPixels, "QPageLayout.fullRectPixels(int) -> QRect");

extern "C" {static PyObject *meth_QPageLayout_fullRectPixels(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_fullRectPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->fullRectPixels(a0));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_fullRectPixels, doc_QPageLayout_fullRectPixels);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_paintRect, "QPageLayout.paintRect() -> QRectF\n"
    "QPageLayout.paintRect(QPageLayout.Unit) -> QRectF");

extern "C" {static PyObject *meth_QPageLayout_paintRect(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_paintRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->paintRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    {
        QPageLayout::Unit a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QPageLayout, &sipCpp, sipType_QPageLayout_Unit, &a0))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->paintRect(a0));

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_paintRect, doc_QPageLayout_paintRect);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_paintRectPoints, "QPageLayout.paintRectPoints() -> QRect");

extern "C" {static PyObject *meth_QPageLayout_paintRectPoints(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_paintRectPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPageLayout, &sipCpp))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->paintRectPoints());

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_paintRectPoints, doc_QPageLayout_paintRectPoints);

    return NULL;
}


PyDoc_STRVAR(doc_QPageLayout_paintRectPixels, "QPageLayout.paintRectPixels(int) -> QRect");

extern "C" {static PyObject *meth_QPageLayout_paintRectPixels(PyObject *, PyObject *);}
static PyObject *meth_QPageLayout_paintRectPixels(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QPageLayout *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QPageLayout, &sipCpp, &a0))
        {
            QRect*sipRes;

            sipRes = new QRect(sipCpp->paintRectPixels(a0));

            return sipConvertFromNewType(sipRes,sipType_QRect,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPageLayout, sipName_paintRectPixels, doc_QPageLayout_paintRectPixels);

    return NULL;
}


extern "C" {static PyObject *slot_QPageLayout___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPageLayout___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPageLayout *sipCpp = reinterpret_cast<QPageLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPageLayout));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPageLayout* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPageLayout, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPageLayout,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPageLayout___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPageLayout___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPageLayout *sipCpp = reinterpret_cast<QPageLayout *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPageLayout));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QPageLayout* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPageLayout, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPageLayout,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPageLayout(void *, const sipTypeDef *);}
static void *cast_QPageLayout(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPageLayout)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPageLayout(void *, int);}
static void release_QPageLayout(void *sipCppV,int)
{
    delete reinterpret_cast<QPageLayout *>(sipCppV);
}


extern "C" {static void assign_QPageLayout(void *, SIP_SSIZE_T, const void *);}
static void assign_QPageLayout(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPageLayout *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPageLayout *>(sipSrc);
}


extern "C" {static void *array_QPageLayout(SIP_SSIZE_T);}
static void *array_QPageLayout(SIP_SSIZE_T sipNrElem)
{
    return new QPageLayout[sipNrElem];
}


extern "C" {static void *copy_QPageLayout(const void *, SIP_SSIZE_T);}
static void *copy_QPageLayout(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPageLayout(reinterpret_cast<const QPageLayout *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPageLayout(sipSimpleWrapper *);}
static void dealloc_QPageLayout(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPageLayout(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPageLayout(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPageLayout(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPageLayout *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPageLayout();

            return sipCpp;
        }
    }

    {
        const QPageSize* a0;
        QPageLayout::Orientation a1;
        const QMarginsF* a2;
        QPageLayout::Unit a3 = QPageLayout::Point;
        const QMarginsF& a4def = QMarginsF(0,0,0,0);
        const QMarginsF* a4 = &a4def;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_units,
            sipName_minMargins,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9EJ9|EJ9", sipType_QPageSize, &a0, sipType_QPageLayout_Orientation, &a1, sipType_QMarginsF, &a2, sipType_QPageLayout_Unit, &a3, sipType_QMarginsF, &a4))
        {
            sipCpp = new QPageLayout(*a0,a1,*a2,a3,*a4);

            return sipCpp;
        }
    }

    {
        const QPageLayout* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPageLayout, &a0))
        {
            sipCpp = new QPageLayout(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPageLayout[] = {
    {(void *)slot_QPageLayout___eq__, eq_slot},
    {(void *)slot_QPageLayout___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPageLayout[] = {
    {SIP_MLNAME_CAST(sipName_fullRect), meth_QPageLayout_fullRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_fullRect)},
    {SIP_MLNAME_CAST(sipName_fullRectPixels), meth_QPageLayout_fullRectPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_fullRectPixels)},
    {SIP_MLNAME_CAST(sipName_fullRectPoints), meth_QPageLayout_fullRectPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_fullRectPoints)},
    {SIP_MLNAME_CAST(sipName_isEquivalentTo), meth_QPageLayout_isEquivalentTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_isEquivalentTo)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QPageLayout_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_isValid)},
    {SIP_MLNAME_CAST(sipName_margins), meth_QPageLayout_margins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_margins)},
    {SIP_MLNAME_CAST(sipName_marginsPixels), meth_QPageLayout_marginsPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_marginsPixels)},
    {SIP_MLNAME_CAST(sipName_marginsPoints), meth_QPageLayout_marginsPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_marginsPoints)},
    {SIP_MLNAME_CAST(sipName_maximumMargins), meth_QPageLayout_maximumMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_maximumMargins)},
    {SIP_MLNAME_CAST(sipName_minimumMargins), meth_QPageLayout_minimumMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_minimumMargins)},
    {SIP_MLNAME_CAST(sipName_mode), meth_QPageLayout_mode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_mode)},
    {SIP_MLNAME_CAST(sipName_orientation), meth_QPageLayout_orientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_orientation)},
    {SIP_MLNAME_CAST(sipName_pageSize), meth_QPageLayout_pageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_pageSize)},
    {SIP_MLNAME_CAST(sipName_paintRect), meth_QPageLayout_paintRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_paintRect)},
    {SIP_MLNAME_CAST(sipName_paintRectPixels), meth_QPageLayout_paintRectPixels, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_paintRectPixels)},
    {SIP_MLNAME_CAST(sipName_paintRectPoints), meth_QPageLayout_paintRectPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_paintRectPoints)},
    {SIP_MLNAME_CAST(sipName_setBottomMargin), meth_QPageLayout_setBottomMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setBottomMargin)},
    {SIP_MLNAME_CAST(sipName_setLeftMargin), meth_QPageLayout_setLeftMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setLeftMargin)},
    {SIP_MLNAME_CAST(sipName_setMargins), meth_QPageLayout_setMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setMargins)},
    {SIP_MLNAME_CAST(sipName_setMinimumMargins), meth_QPageLayout_setMinimumMargins, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setMinimumMargins)},
    {SIP_MLNAME_CAST(sipName_setMode), meth_QPageLayout_setMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setMode)},
    {SIP_MLNAME_CAST(sipName_setOrientation), meth_QPageLayout_setOrientation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setOrientation)},
    {SIP_MLNAME_CAST(sipName_setPageSize), (PyCFunction)meth_QPageLayout_setPageSize, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QPageLayout_setPageSize)},
    {SIP_MLNAME_CAST(sipName_setRightMargin), meth_QPageLayout_setRightMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setRightMargin)},
    {SIP_MLNAME_CAST(sipName_setTopMargin), meth_QPageLayout_setTopMargin, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setTopMargin)},
    {SIP_MLNAME_CAST(sipName_setUnits), meth_QPageLayout_setUnits, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_setUnits)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QPageLayout_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_swap)},
    {SIP_MLNAME_CAST(sipName_units), meth_QPageLayout_units, METH_VARARGS, SIP_MLDOC_CAST(doc_QPageLayout_units)}
};

static sipEnumMemberDef enummembers_QPageLayout[] = {
    {sipName_Cicero, static_cast<int>(QPageLayout::Cicero), 175},
    {sipName_Didot, static_cast<int>(QPageLayout::Didot), 175},
    {sipName_FullPageMode, static_cast<int>(QPageLayout::FullPageMode), 173},
    {sipName_Inch, static_cast<int>(QPageLayout::Inch), 175},
    {sipName_Landscape, static_cast<int>(QPageLayout::Landscape), 174},
    {sipName_Millimeter, static_cast<int>(QPageLayout::Millimeter), 175},
    {sipName_Pica, static_cast<int>(QPageLayout::Pica), 175},
    {sipName_Point, static_cast<int>(QPageLayout::Point), 175},
    {sipName_Portrait, static_cast<int>(QPageLayout::Portrait), 174},
    {sipName_StandardMode, static_cast<int>(QPageLayout::StandardMode), 173},
};

PyDoc_STRVAR(doc_QPageLayout, "\1QPageLayout()\n"
    "QPageLayout(QPageSize, QPageLayout.Orientation, QMarginsF, QPageLayout.Unit units=QPageLayout.Point, QMarginsF minMargins=QMarginsF(0,0,0,0))\n"
    "QPageLayout(QPageLayout)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPageLayout = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPageLayout,
        {0}
    },
    {
        sipNameNr_QPageLayout,
        {0, 0, 1},
        28, methods_QPageLayout,
        10, enummembers_QPageLayout,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPageLayout,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPageLayout,
    init_type_QPageLayout,
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
    dealloc_QPageLayout,
    assign_QPageLayout,
    array_QPageLayout,
    copy_QPageLayout,
    release_QPageLayout,
    cast_QPageLayout,
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