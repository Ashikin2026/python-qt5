/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:17:46 2015
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

#include "sipAPIQtQuick.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#line 68 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
#include <qsggeometry.h>
#include <QVector>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"


class sipQSGGeometry : public QSGGeometry
{
public:
    sipQSGGeometry(const QSGGeometry::AttributeSet&,int,int,int);
    sipQSGGeometry(const QSGGeometry&);
    ~sipQSGGeometry();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGGeometry(const sipQSGGeometry &);
    sipQSGGeometry &operator = (const sipQSGGeometry &);
};

sipQSGGeometry::sipQSGGeometry(const QSGGeometry::AttributeSet& a0,int a1,int a2,int a3): QSGGeometry(a0,a1,a2,a3), sipPySelf(0)
{
}

sipQSGGeometry::sipQSGGeometry(const QSGGeometry& a0): QSGGeometry(a0), sipPySelf(0)
{
}

sipQSGGeometry::~sipQSGGeometry()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QSGGeometry_defaultAttributes_Point2D, "QSGGeometry.defaultAttributes_Point2D() -> QSGGeometry.AttributeSet");

extern "C" {static PyObject *meth_QSGGeometry_defaultAttributes_Point2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_defaultAttributes_Point2D(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QSGGeometry::AttributeSet*sipRes;

            sipRes = &QSGGeometry::defaultAttributes_Point2D();

            return sipConvertFromType(const_cast<QSGGeometry::AttributeSet *>(sipRes),sipType_QSGGeometry_AttributeSet,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_defaultAttributes_Point2D, doc_QSGGeometry_defaultAttributes_Point2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_defaultAttributes_TexturedPoint2D, "QSGGeometry.defaultAttributes_TexturedPoint2D() -> QSGGeometry.AttributeSet");

extern "C" {static PyObject *meth_QSGGeometry_defaultAttributes_TexturedPoint2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_defaultAttributes_TexturedPoint2D(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QSGGeometry::AttributeSet*sipRes;

            sipRes = &QSGGeometry::defaultAttributes_TexturedPoint2D();

            return sipConvertFromType(const_cast<QSGGeometry::AttributeSet *>(sipRes),sipType_QSGGeometry_AttributeSet,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_defaultAttributes_TexturedPoint2D, doc_QSGGeometry_defaultAttributes_TexturedPoint2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_defaultAttributes_ColoredPoint2D, "QSGGeometry.defaultAttributes_ColoredPoint2D() -> QSGGeometry.AttributeSet");

extern "C" {static PyObject *meth_QSGGeometry_defaultAttributes_ColoredPoint2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_defaultAttributes_ColoredPoint2D(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QSGGeometry::AttributeSet*sipRes;

            sipRes = &QSGGeometry::defaultAttributes_ColoredPoint2D();

            return sipConvertFromType(const_cast<QSGGeometry::AttributeSet *>(sipRes),sipType_QSGGeometry_AttributeSet,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_defaultAttributes_ColoredPoint2D, doc_QSGGeometry_defaultAttributes_ColoredPoint2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_setDrawingMode, "QSGGeometry.setDrawingMode(int)");

extern "C" {static PyObject *meth_QSGGeometry_setDrawingMode(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_setDrawingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLenum a0;
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QSGGeometry, &sipCpp, &a0))
        {
            sipCpp->setDrawingMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_setDrawingMode, doc_QSGGeometry_setDrawingMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_drawingMode, "QSGGeometry.drawingMode() -> int");

extern "C" {static PyObject *meth_QSGGeometry_drawingMode(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_drawingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            GLenum sipRes;

            sipRes = sipCpp->drawingMode();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_drawingMode, doc_QSGGeometry_drawingMode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_allocate, "QSGGeometry.allocate(int, int indexCount=0)");

extern "C" {static PyObject *meth_QSGGeometry_allocate(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_allocate(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1 = 0;
        QSGGeometry *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_indexCount,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bi|i", &sipSelf, sipType_QSGGeometry, &sipCpp, &a0, &a1))
        {
            sipCpp->allocate(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_allocate, doc_QSGGeometry_allocate);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexCount, "QSGGeometry.vertexCount() -> int");

extern "C" {static PyObject *meth_QSGGeometry_vertexCount(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->vertexCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexCount, doc_QSGGeometry_vertexCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexData, "QSGGeometry.vertexData() -> sip.voidptr");

extern "C" {static PyObject *meth_QSGGeometry_vertexData(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            void*sipRes;

            sipRes = sipCpp->vertexData();

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexData, doc_QSGGeometry_vertexData);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexType, "QSGGeometry.indexType() -> int");

extern "C" {static PyObject *meth_QSGGeometry_indexType(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->indexType();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexType, doc_QSGGeometry_indexType);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexCount, "QSGGeometry.indexCount() -> int");

extern "C" {static PyObject *meth_QSGGeometry_indexCount(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->indexCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexCount, doc_QSGGeometry_indexCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexData, "QSGGeometry.indexData() -> sip.voidptr");

extern "C" {static PyObject *meth_QSGGeometry_indexData(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            void*sipRes;

            sipRes = sipCpp->indexData();

            return sipConvertFromVoidPtr(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexData, doc_QSGGeometry_indexData);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_attributeCount, "QSGGeometry.attributeCount() -> int");

extern "C" {static PyObject *meth_QSGGeometry_attributeCount(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_attributeCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->attributeCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_attributeCount, doc_QSGGeometry_attributeCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_attributes, "QSGGeometry.attributes() -> read-only-array-of-QSGGeometry.Attribute");

extern "C" {static PyObject *meth_QSGGeometry_attributes(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_attributes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 292 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToTypedArray((void *)sipCpp->attributes(),
                sipType_QSGGeometry_Attribute, "iiiI", sizeof (QSGGeometry::Attribute),
                sipCpp->attributeCount(), SIP_READ_ONLY);
#line 413 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_attributes, doc_QSGGeometry_attributes);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_sizeOfVertex, "QSGGeometry.sizeOfVertex() -> int");

extern "C" {static PyObject *meth_QSGGeometry_sizeOfVertex(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_sizeOfVertex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sizeOfVertex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_sizeOfVertex, doc_QSGGeometry_sizeOfVertex);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_updateRectGeometry, "QSGGeometry.updateRectGeometry(QSGGeometry, QRectF)");

extern "C" {static PyObject *meth_QSGGeometry_updateRectGeometry(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_updateRectGeometry(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry* a0;
        const QRectF* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9", sipType_QSGGeometry, &a0, sipType_QRectF, &a1))
        {
            QSGGeometry::updateRectGeometry(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_updateRectGeometry, doc_QSGGeometry_updateRectGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_updateTexturedRectGeometry, "QSGGeometry.updateTexturedRectGeometry(QSGGeometry, QRectF, QRectF)");

extern "C" {static PyObject *meth_QSGGeometry_updateTexturedRectGeometry(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_updateTexturedRectGeometry(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry* a0;
        const QRectF* a1;
        const QRectF* a2;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J9J9", sipType_QSGGeometry, &a0, sipType_QRectF, &a1, sipType_QRectF, &a2))
        {
            QSGGeometry::updateTexturedRectGeometry(a0,*a1,*a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_updateTexturedRectGeometry, doc_QSGGeometry_updateTexturedRectGeometry);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_setIndexDataPattern, "QSGGeometry.setIndexDataPattern(QSGGeometry.DataPattern)");

extern "C" {static PyObject *meth_QSGGeometry_setIndexDataPattern(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_setIndexDataPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry::DataPattern a0;
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGGeometry, &sipCpp, sipType_QSGGeometry_DataPattern, &a0))
        {
            sipCpp->setIndexDataPattern(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_setIndexDataPattern, doc_QSGGeometry_setIndexDataPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexDataPattern, "QSGGeometry.indexDataPattern() -> QSGGeometry.DataPattern");

extern "C" {static PyObject *meth_QSGGeometry_indexDataPattern(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexDataPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            QSGGeometry::DataPattern sipRes;

            sipRes = sipCpp->indexDataPattern();

            return sipConvertFromEnum(sipRes,sipType_QSGGeometry_DataPattern);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexDataPattern, doc_QSGGeometry_indexDataPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_setVertexDataPattern, "QSGGeometry.setVertexDataPattern(QSGGeometry.DataPattern)");

extern "C" {static PyObject *meth_QSGGeometry_setVertexDataPattern(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_setVertexDataPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry::DataPattern a0;
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QSGGeometry, &sipCpp, sipType_QSGGeometry_DataPattern, &a0))
        {
            sipCpp->setVertexDataPattern(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_setVertexDataPattern, doc_QSGGeometry_setVertexDataPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexDataPattern, "QSGGeometry.vertexDataPattern() -> QSGGeometry.DataPattern");

extern "C" {static PyObject *meth_QSGGeometry_vertexDataPattern(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexDataPattern(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            QSGGeometry::DataPattern sipRes;

            sipRes = sipCpp->vertexDataPattern();

            return sipConvertFromEnum(sipRes,sipType_QSGGeometry_DataPattern);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexDataPattern, doc_QSGGeometry_vertexDataPattern);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_markIndexDataDirty, "QSGGeometry.markIndexDataDirty()");

extern "C" {static PyObject *meth_QSGGeometry_markIndexDataDirty(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_markIndexDataDirty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            sipCpp->markIndexDataDirty();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_markIndexDataDirty, doc_QSGGeometry_markIndexDataDirty);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_markVertexDataDirty, "QSGGeometry.markVertexDataDirty()");

extern "C" {static PyObject *meth_QSGGeometry_markVertexDataDirty(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_markVertexDataDirty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            sipCpp->markVertexDataDirty();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_markVertexDataDirty, doc_QSGGeometry_markVertexDataDirty);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_lineWidth, "QSGGeometry.lineWidth() -> float");

extern "C" {static PyObject *meth_QSGGeometry_lineWidth(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_lineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->lineWidth();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_lineWidth, doc_QSGGeometry_lineWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_setLineWidth, "QSGGeometry.setLineWidth(float)");

extern "C" {static PyObject *meth_QSGGeometry_setLineWidth(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_setLineWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        float a0;
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bf", &sipSelf, sipType_QSGGeometry, &sipCpp, &a0))
        {
            sipCpp->setLineWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_setLineWidth, doc_QSGGeometry_setLineWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexDataAsUInt, "QSGGeometry.indexDataAsUInt() -> array-of-unsigned-int");

extern "C" {static PyObject *meth_QSGGeometry_indexDataAsUInt(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexDataAsUInt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 310 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToArray(sipCpp->indexDataAsUInt(), "I",
                sipCpp->indexCount(), 0);
#line 739 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexDataAsUInt, doc_QSGGeometry_indexDataAsUInt);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_indexDataAsUShort, "QSGGeometry.indexDataAsUShort() -> array-of-unsigned-short");

extern "C" {static PyObject *meth_QSGGeometry_indexDataAsUShort(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_indexDataAsUShort(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 316 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToArray(sipCpp->indexDataAsUShort(), "H",
                sipCpp->indexCount(), 0);
#line 769 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_indexDataAsUShort, doc_QSGGeometry_indexDataAsUShort);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexDataAsPoint2D, "QSGGeometry.vertexDataAsPoint2D() -> array-of-QSGGeometry.Point2D");

extern "C" {static PyObject *meth_QSGGeometry_vertexDataAsPoint2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexDataAsPoint2D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 322 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToTypedArray(sipCpp->vertexDataAsPoint2D(),
                sipType_QSGGeometry_Point2D, "ff", sizeof (QSGGeometry::Point2D),
                sipCpp->vertexCount(), 0);
#line 800 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexDataAsPoint2D, doc_QSGGeometry_vertexDataAsPoint2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexDataAsTexturedPoint2D, "QSGGeometry.vertexDataAsTexturedPoint2D() -> array-of-QSGGeometry.TexturedPoint2D");

extern "C" {static PyObject *meth_QSGGeometry_vertexDataAsTexturedPoint2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexDataAsTexturedPoint2D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 329 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToTypedArray(sipCpp->vertexDataAsTexturedPoint2D(),
                sipType_QSGGeometry_TexturedPoint2D, "ffff",
                sizeof (QSGGeometry::TexturedPoint2D), sipCpp->vertexCount(), 0);
#line 831 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexDataAsTexturedPoint2D, doc_QSGGeometry_vertexDataAsTexturedPoint2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_vertexDataAsColoredPoint2D, "QSGGeometry.vertexDataAsColoredPoint2D() -> array-of-QSGGeometry.ColoredPoint2D");

extern "C" {static PyObject *meth_QSGGeometry_vertexDataAsColoredPoint2D(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_vertexDataAsColoredPoint2D(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 336 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsggeometry.sip"
        sipRes = sipConvertToTypedArray(sipCpp->vertexDataAsColoredPoint2D(),
                sipType_QSGGeometry_ColoredPoint2D, "ffbbbb",
                sizeof (QSGGeometry::ColoredPoint2D), sipCpp->vertexCount(), 0);
#line 862 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGGeometry.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_vertexDataAsColoredPoint2D, doc_QSGGeometry_vertexDataAsColoredPoint2D);

    return NULL;
}


PyDoc_STRVAR(doc_QSGGeometry_sizeOfIndex, "QSGGeometry.sizeOfIndex() -> int");

extern "C" {static PyObject *meth_QSGGeometry_sizeOfIndex(PyObject *, PyObject *);}
static PyObject *meth_QSGGeometry_sizeOfIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGGeometry *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGGeometry, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sizeOfIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGGeometry, sipName_sizeOfIndex, doc_QSGGeometry_sizeOfIndex);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGGeometry(void *, const sipTypeDef *);}
static void *cast_QSGGeometry(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGGeometry)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGGeometry(void *, int);}
static void release_QSGGeometry(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGGeometry *>(sipCppV);
    else
        delete reinterpret_cast<QSGGeometry *>(sipCppV);
}


extern "C" {static void dealloc_QSGGeometry(sipSimpleWrapper *);}
static void dealloc_QSGGeometry(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGGeometry *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGGeometry(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGGeometry(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGGeometry(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGGeometry *sipCpp = 0;

    {
        const QSGGeometry::AttributeSet* a0;
        PyObject *a0Keep;
        int a1;
        int a2 = 0;
        int a3 = GL_UNSIGNED_SHORT;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_indexCount,
            sipName_indexType,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "@J9i|ii", &a0Keep, sipType_QSGGeometry_AttributeSet, &a0, &a1, &a2, &a3))
        {
            sipCpp = new sipQSGGeometry(*a0,a1,a2,a3);

            sipKeepReference((PyObject *)sipSelf, -2, a0Keep);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QSGGeometry* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSGGeometry, &a0))
        {
            sipCpp = new sipQSGGeometry(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QSGGeometry[] = {
    {SIP_MLNAME_CAST(sipName_allocate), (PyCFunction)meth_QSGGeometry_allocate, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSGGeometry_allocate)},
    {SIP_MLNAME_CAST(sipName_attributeCount), meth_QSGGeometry_attributeCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_attributeCount)},
    {SIP_MLNAME_CAST(sipName_attributes), meth_QSGGeometry_attributes, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_attributes)},
    {SIP_MLNAME_CAST(sipName_defaultAttributes_ColoredPoint2D), meth_QSGGeometry_defaultAttributes_ColoredPoint2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_defaultAttributes_ColoredPoint2D)},
    {SIP_MLNAME_CAST(sipName_defaultAttributes_Point2D), meth_QSGGeometry_defaultAttributes_Point2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_defaultAttributes_Point2D)},
    {SIP_MLNAME_CAST(sipName_defaultAttributes_TexturedPoint2D), meth_QSGGeometry_defaultAttributes_TexturedPoint2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_defaultAttributes_TexturedPoint2D)},
    {SIP_MLNAME_CAST(sipName_drawingMode), meth_QSGGeometry_drawingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_drawingMode)},
    {SIP_MLNAME_CAST(sipName_indexCount), meth_QSGGeometry_indexCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexCount)},
    {SIP_MLNAME_CAST(sipName_indexData), meth_QSGGeometry_indexData, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexData)},
    {SIP_MLNAME_CAST(sipName_indexDataAsUInt), meth_QSGGeometry_indexDataAsUInt, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexDataAsUInt)},
    {SIP_MLNAME_CAST(sipName_indexDataAsUShort), meth_QSGGeometry_indexDataAsUShort, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexDataAsUShort)},
    {SIP_MLNAME_CAST(sipName_indexDataPattern), meth_QSGGeometry_indexDataPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexDataPattern)},
    {SIP_MLNAME_CAST(sipName_indexType), meth_QSGGeometry_indexType, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_indexType)},
    {SIP_MLNAME_CAST(sipName_lineWidth), meth_QSGGeometry_lineWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_lineWidth)},
    {SIP_MLNAME_CAST(sipName_markIndexDataDirty), meth_QSGGeometry_markIndexDataDirty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_markIndexDataDirty)},
    {SIP_MLNAME_CAST(sipName_markVertexDataDirty), meth_QSGGeometry_markVertexDataDirty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_markVertexDataDirty)},
    {SIP_MLNAME_CAST(sipName_setDrawingMode), meth_QSGGeometry_setDrawingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_setDrawingMode)},
    {SIP_MLNAME_CAST(sipName_setIndexDataPattern), meth_QSGGeometry_setIndexDataPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_setIndexDataPattern)},
    {SIP_MLNAME_CAST(sipName_setLineWidth), meth_QSGGeometry_setLineWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_setLineWidth)},
    {SIP_MLNAME_CAST(sipName_setVertexDataPattern), meth_QSGGeometry_setVertexDataPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_setVertexDataPattern)},
    {SIP_MLNAME_CAST(sipName_sizeOfIndex), meth_QSGGeometry_sizeOfIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_sizeOfIndex)},
    {SIP_MLNAME_CAST(sipName_sizeOfVertex), meth_QSGGeometry_sizeOfVertex, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_sizeOfVertex)},
    {SIP_MLNAME_CAST(sipName_updateRectGeometry), meth_QSGGeometry_updateRectGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_updateRectGeometry)},
    {SIP_MLNAME_CAST(sipName_updateTexturedRectGeometry), meth_QSGGeometry_updateTexturedRectGeometry, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_updateTexturedRectGeometry)},
    {SIP_MLNAME_CAST(sipName_vertexCount), meth_QSGGeometry_vertexCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexCount)},
    {SIP_MLNAME_CAST(sipName_vertexData), meth_QSGGeometry_vertexData, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexData)},
    {SIP_MLNAME_CAST(sipName_vertexDataAsColoredPoint2D), meth_QSGGeometry_vertexDataAsColoredPoint2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexDataAsColoredPoint2D)},
    {SIP_MLNAME_CAST(sipName_vertexDataAsPoint2D), meth_QSGGeometry_vertexDataAsPoint2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexDataAsPoint2D)},
    {SIP_MLNAME_CAST(sipName_vertexDataAsTexturedPoint2D), meth_QSGGeometry_vertexDataAsTexturedPoint2D, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexDataAsTexturedPoint2D)},
    {SIP_MLNAME_CAST(sipName_vertexDataPattern), meth_QSGGeometry_vertexDataPattern, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGGeometry_vertexDataPattern)}
};

static sipEnumMemberDef enummembers_QSGGeometry[] = {
    {sipName_AlwaysUploadPattern, static_cast<int>(QSGGeometry::AlwaysUploadPattern), 41},
    {sipName_DynamicPattern, static_cast<int>(QSGGeometry::DynamicPattern), 41},
    {sipName_GL_BYTE, static_cast<int>(GL_BYTE), -1},
    {sipName_GL_DOUBLE, static_cast<int>(GL_DOUBLE), -1},
    {sipName_GL_FLOAT, static_cast<int>(GL_FLOAT), -1},
    {sipName_GL_INT, static_cast<int>(GL_INT), -1},
    {sipName_GL_LINES, static_cast<int>(GL_LINES), -1},
    {sipName_GL_LINE_LOOP, static_cast<int>(GL_LINE_LOOP), -1},
    {sipName_GL_LINE_STRIP, static_cast<int>(GL_LINE_STRIP), -1},
    {sipName_GL_POINTS, static_cast<int>(GL_POINTS), -1},
    {sipName_GL_TRIANGLES, static_cast<int>(GL_TRIANGLES), -1},
    {sipName_GL_TRIANGLE_FAN, static_cast<int>(GL_TRIANGLE_FAN), -1},
    {sipName_GL_TRIANGLE_STRIP, static_cast<int>(GL_TRIANGLE_STRIP), -1},
    {sipName_StaticPattern, static_cast<int>(QSGGeometry::StaticPattern), 41},
    {sipName_StreamPattern, static_cast<int>(QSGGeometry::StreamPattern), 41},
};

PyDoc_STRVAR(doc_QSGGeometry, "\1QSGGeometry(QSGGeometry.AttributeSet, int, int indexCount=0, int indexType=GL_UNSIGNED_SHORT)\n"
    "QSGGeometry(QSGGeometry)");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGGeometry = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGGeometry,
        {0}
    },
    {
        sipNameNr_QSGGeometry,
        {0, 0, 1},
        30, methods_QSGGeometry,
        15, enummembers_QSGGeometry,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGGeometry,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QSGGeometry,
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
    dealloc_QSGGeometry,
    0,
    0,
    0,
    release_QSGGeometry,
    cast_QSGGeometry,
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
