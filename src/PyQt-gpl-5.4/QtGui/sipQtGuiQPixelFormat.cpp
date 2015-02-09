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

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qpixelformat.sip"
#include <qpixelformat.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQPixelFormat.cpp"



PyDoc_STRVAR(doc_QPixelFormat_colorModel, "QPixelFormat.colorModel() -> QPixelFormat.ColorModel");

extern "C" {static PyObject *meth_QPixelFormat_colorModel(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_colorModel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::ColorModel sipRes;

            sipRes = sipCpp->colorModel();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_ColorModel);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_colorModel, doc_QPixelFormat_colorModel);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_channelCount, "QPixelFormat.channelCount() -> int");

extern "C" {static PyObject *meth_QPixelFormat_channelCount(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_channelCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->channelCount();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_channelCount, doc_QPixelFormat_channelCount);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_redSize, "QPixelFormat.redSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_redSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_redSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->redSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_redSize, doc_QPixelFormat_redSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_greenSize, "QPixelFormat.greenSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_greenSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_greenSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->greenSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_greenSize, doc_QPixelFormat_greenSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_blueSize, "QPixelFormat.blueSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_blueSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_blueSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->blueSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_blueSize, doc_QPixelFormat_blueSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_cyanSize, "QPixelFormat.cyanSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_cyanSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_cyanSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->cyanSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_cyanSize, doc_QPixelFormat_cyanSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_magentaSize, "QPixelFormat.magentaSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_magentaSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_magentaSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->magentaSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_magentaSize, doc_QPixelFormat_magentaSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_yellowSize, "QPixelFormat.yellowSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_yellowSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_yellowSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->yellowSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_yellowSize, doc_QPixelFormat_yellowSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_blackSize, "QPixelFormat.blackSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_blackSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_blackSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->blackSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_blackSize, doc_QPixelFormat_blackSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_hueSize, "QPixelFormat.hueSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_hueSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_hueSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->hueSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_hueSize, doc_QPixelFormat_hueSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_saturationSize, "QPixelFormat.saturationSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_saturationSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_saturationSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->saturationSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_saturationSize, doc_QPixelFormat_saturationSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_lightnessSize, "QPixelFormat.lightnessSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_lightnessSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_lightnessSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->lightnessSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_lightnessSize, doc_QPixelFormat_lightnessSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_brightnessSize, "QPixelFormat.brightnessSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_brightnessSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_brightnessSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->brightnessSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_brightnessSize, doc_QPixelFormat_brightnessSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_alphaSize, "QPixelFormat.alphaSize() -> int");

extern "C" {static PyObject *meth_QPixelFormat_alphaSize(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_alphaSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->alphaSize();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_alphaSize, doc_QPixelFormat_alphaSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_bitsPerPixel, "QPixelFormat.bitsPerPixel() -> int");

extern "C" {static PyObject *meth_QPixelFormat_bitsPerPixel(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_bitsPerPixel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->bitsPerPixel();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_bitsPerPixel, doc_QPixelFormat_bitsPerPixel);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_alphaUsage, "QPixelFormat.alphaUsage() -> QPixelFormat.AlphaUsage");

extern "C" {static PyObject *meth_QPixelFormat_alphaUsage(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_alphaUsage(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::AlphaUsage sipRes;

            sipRes = sipCpp->alphaUsage();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_AlphaUsage);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_alphaUsage, doc_QPixelFormat_alphaUsage);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_alphaPosition, "QPixelFormat.alphaPosition() -> QPixelFormat.AlphaPosition");

extern "C" {static PyObject *meth_QPixelFormat_alphaPosition(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_alphaPosition(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::AlphaPosition sipRes;

            sipRes = sipCpp->alphaPosition();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_AlphaPosition);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_alphaPosition, doc_QPixelFormat_alphaPosition);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_premultiplied, "QPixelFormat.premultiplied() -> QPixelFormat.AlphaPremultiplied");

extern "C" {static PyObject *meth_QPixelFormat_premultiplied(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_premultiplied(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::AlphaPremultiplied sipRes;

            sipRes = sipCpp->premultiplied();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_AlphaPremultiplied);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_premultiplied, doc_QPixelFormat_premultiplied);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_typeInterpretation, "QPixelFormat.typeInterpretation() -> QPixelFormat.TypeInterpretation");

extern "C" {static PyObject *meth_QPixelFormat_typeInterpretation(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_typeInterpretation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::TypeInterpretation sipRes;

            sipRes = sipCpp->typeInterpretation();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_TypeInterpretation);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_typeInterpretation, doc_QPixelFormat_typeInterpretation);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_byteOrder, "QPixelFormat.byteOrder() -> QPixelFormat.ByteOrder");

extern "C" {static PyObject *meth_QPixelFormat_byteOrder(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_byteOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::ByteOrder sipRes;

            sipRes = sipCpp->byteOrder();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_ByteOrder);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_byteOrder, doc_QPixelFormat_byteOrder);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_yuvLayout, "QPixelFormat.yuvLayout() -> QPixelFormat.YUVLayout");

extern "C" {static PyObject *meth_QPixelFormat_yuvLayout(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_yuvLayout(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            QPixelFormat::YUVLayout sipRes;

            sipRes = sipCpp->yuvLayout();

            return sipConvertFromEnum(sipRes,sipType_QPixelFormat_YUVLayout);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_yuvLayout, doc_QPixelFormat_yuvLayout);

    return NULL;
}


PyDoc_STRVAR(doc_QPixelFormat_subEnum, "QPixelFormat.subEnum() -> int");

extern "C" {static PyObject *meth_QPixelFormat_subEnum(PyObject *, PyObject *);}
static PyObject *meth_QPixelFormat_subEnum(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPixelFormat *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPixelFormat, &sipCpp))
        {
            uchar sipRes;

            sipRes = sipCpp->subEnum();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPixelFormat, sipName_subEnum, doc_QPixelFormat_subEnum);

    return NULL;
}


extern "C" {static PyObject *slot_QPixelFormat___eq__(PyObject *,PyObject *);}
static PyObject *slot_QPixelFormat___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QPixelFormat *sipCpp = reinterpret_cast<QPixelFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPixelFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPixelFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPixelFormat, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QPixelFormat,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QPixelFormat___ne__(PyObject *,PyObject *);}
static PyObject *slot_QPixelFormat___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QPixelFormat *sipCpp = reinterpret_cast<QPixelFormat *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QPixelFormat));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QPixelFormat* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QPixelFormat, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QPixelFormat,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPixelFormat(void *, const sipTypeDef *);}
static void *cast_QPixelFormat(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPixelFormat)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPixelFormat(void *, int);}
static void release_QPixelFormat(void *sipCppV,int)
{
    delete reinterpret_cast<QPixelFormat *>(sipCppV);
}


extern "C" {static void assign_QPixelFormat(void *, SIP_SSIZE_T, const void *);}
static void assign_QPixelFormat(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPixelFormat *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPixelFormat *>(sipSrc);
}


extern "C" {static void *array_QPixelFormat(SIP_SSIZE_T);}
static void *array_QPixelFormat(SIP_SSIZE_T sipNrElem)
{
    return new QPixelFormat[sipNrElem];
}


extern "C" {static void *copy_QPixelFormat(const void *, SIP_SSIZE_T);}
static void *copy_QPixelFormat(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPixelFormat(reinterpret_cast<const QPixelFormat *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPixelFormat(sipSimpleWrapper *);}
static void dealloc_QPixelFormat(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPixelFormat(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPixelFormat(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPixelFormat(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPixelFormat *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPixelFormat();

            return sipCpp;
        }
    }

    {
        QPixelFormat::ColorModel a0;
        uchar a1;
        uchar a2;
        uchar a3;
        uchar a4;
        uchar a5;
        uchar a6;
        QPixelFormat::AlphaUsage a7;
        QPixelFormat::AlphaPosition a8;
        QPixelFormat::AlphaPremultiplied a9;
        QPixelFormat::TypeInterpretation a10;
        QPixelFormat::ByteOrder a11 = QPixelFormat::CurrentSystemEndian;
        uchar a12 = 0;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            NULL,
            sipName_byteOrder,
            sipName_subEnum,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "EMMMMMMEEEE|EM", sipType_QPixelFormat_ColorModel, &a0, &a1, &a2, &a3, &a4, &a5, &a6, sipType_QPixelFormat_AlphaUsage, &a7, sipType_QPixelFormat_AlphaPosition, &a8, sipType_QPixelFormat_AlphaPremultiplied, &a9, sipType_QPixelFormat_TypeInterpretation, &a10, sipType_QPixelFormat_ByteOrder, &a11, &a12))
        {
            sipCpp = new QPixelFormat(a0,a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12);

            return sipCpp;
        }
    }

    {
        const QPixelFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPixelFormat, &a0))
        {
            sipCpp = new QPixelFormat(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QPixelFormat[] = {
    {(void *)slot_QPixelFormat___eq__, eq_slot},
    {(void *)slot_QPixelFormat___ne__, ne_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QPixelFormat[] = {
    {SIP_MLNAME_CAST(sipName_alphaPosition), meth_QPixelFormat_alphaPosition, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_alphaPosition)},
    {SIP_MLNAME_CAST(sipName_alphaSize), meth_QPixelFormat_alphaSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_alphaSize)},
    {SIP_MLNAME_CAST(sipName_alphaUsage), meth_QPixelFormat_alphaUsage, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_alphaUsage)},
    {SIP_MLNAME_CAST(sipName_bitsPerPixel), meth_QPixelFormat_bitsPerPixel, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_bitsPerPixel)},
    {SIP_MLNAME_CAST(sipName_blackSize), meth_QPixelFormat_blackSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_blackSize)},
    {SIP_MLNAME_CAST(sipName_blueSize), meth_QPixelFormat_blueSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_blueSize)},
    {SIP_MLNAME_CAST(sipName_brightnessSize), meth_QPixelFormat_brightnessSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_brightnessSize)},
    {SIP_MLNAME_CAST(sipName_byteOrder), meth_QPixelFormat_byteOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_byteOrder)},
    {SIP_MLNAME_CAST(sipName_channelCount), meth_QPixelFormat_channelCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_channelCount)},
    {SIP_MLNAME_CAST(sipName_colorModel), meth_QPixelFormat_colorModel, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_colorModel)},
    {SIP_MLNAME_CAST(sipName_cyanSize), meth_QPixelFormat_cyanSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_cyanSize)},
    {SIP_MLNAME_CAST(sipName_greenSize), meth_QPixelFormat_greenSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_greenSize)},
    {SIP_MLNAME_CAST(sipName_hueSize), meth_QPixelFormat_hueSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_hueSize)},
    {SIP_MLNAME_CAST(sipName_lightnessSize), meth_QPixelFormat_lightnessSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_lightnessSize)},
    {SIP_MLNAME_CAST(sipName_magentaSize), meth_QPixelFormat_magentaSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_magentaSize)},
    {SIP_MLNAME_CAST(sipName_premultiplied), meth_QPixelFormat_premultiplied, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_premultiplied)},
    {SIP_MLNAME_CAST(sipName_redSize), meth_QPixelFormat_redSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_redSize)},
    {SIP_MLNAME_CAST(sipName_saturationSize), meth_QPixelFormat_saturationSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_saturationSize)},
    {SIP_MLNAME_CAST(sipName_subEnum), meth_QPixelFormat_subEnum, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_subEnum)},
    {SIP_MLNAME_CAST(sipName_typeInterpretation), meth_QPixelFormat_typeInterpretation, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_typeInterpretation)},
    {SIP_MLNAME_CAST(sipName_yellowSize), meth_QPixelFormat_yellowSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_yellowSize)},
    {SIP_MLNAME_CAST(sipName_yuvLayout), meth_QPixelFormat_yuvLayout, METH_VARARGS, SIP_MLDOC_CAST(doc_QPixelFormat_yuvLayout)}
};

static sipEnumMemberDef enummembers_QPixelFormat[] = {
    {sipName_AtBeginning, static_cast<int>(QPixelFormat::AtBeginning), 216},
    {sipName_AtEnd, static_cast<int>(QPixelFormat::AtEnd), 216},
    {sipName_BGR, static_cast<int>(QPixelFormat::BGR), 220},
    {sipName_BigEndian, static_cast<int>(QPixelFormat::BigEndian), 219},
    {sipName_CMYK, static_cast<int>(QPixelFormat::CMYK), 220},
    {sipName_CurrentSystemEndian, static_cast<int>(QPixelFormat::CurrentSystemEndian), 219},
    {sipName_FloatingPoint, static_cast<int>(QPixelFormat::FloatingPoint), 221},
    {sipName_Grayscale, static_cast<int>(QPixelFormat::Grayscale), 220},
    {sipName_HSL, static_cast<int>(QPixelFormat::HSL), 220},
    {sipName_HSV, static_cast<int>(QPixelFormat::HSV), 220},
    {sipName_IMC1, static_cast<int>(QPixelFormat::IMC1), 222},
    {sipName_IMC2, static_cast<int>(QPixelFormat::IMC2), 222},
    {sipName_IMC3, static_cast<int>(QPixelFormat::IMC3), 222},
    {sipName_IMC4, static_cast<int>(QPixelFormat::IMC4), 222},
    {sipName_IgnoresAlpha, static_cast<int>(QPixelFormat::IgnoresAlpha), 218},
    {sipName_Indexed, static_cast<int>(QPixelFormat::Indexed), 220},
    {sipName_LittleEndian, static_cast<int>(QPixelFormat::LittleEndian), 219},
    {sipName_NV12, static_cast<int>(QPixelFormat::NV12), 222},
    {sipName_NV21, static_cast<int>(QPixelFormat::NV21), 222},
    {sipName_NotPremultiplied, static_cast<int>(QPixelFormat::NotPremultiplied), 217},
    {sipName_Premultiplied, static_cast<int>(QPixelFormat::Premultiplied), 217},
    {sipName_RGB, static_cast<int>(QPixelFormat::RGB), 220},
    {sipName_UYVY, static_cast<int>(QPixelFormat::UYVY), 222},
    {sipName_UnsignedByte, static_cast<int>(QPixelFormat::UnsignedByte), 221},
    {sipName_UnsignedInteger, static_cast<int>(QPixelFormat::UnsignedInteger), 221},
    {sipName_UnsignedShort, static_cast<int>(QPixelFormat::UnsignedShort), 221},
    {sipName_UsesAlpha, static_cast<int>(QPixelFormat::UsesAlpha), 218},
    {sipName_Y16, static_cast<int>(QPixelFormat::Y16), 222},
    {sipName_Y8, static_cast<int>(QPixelFormat::Y8), 222},
    {sipName_YUV, static_cast<int>(QPixelFormat::YUV), 220},
    {sipName_YUV411, static_cast<int>(QPixelFormat::YUV411), 222},
    {sipName_YUV420P, static_cast<int>(QPixelFormat::YUV420P), 222},
    {sipName_YUV420SP, static_cast<int>(QPixelFormat::YUV420SP), 222},
    {sipName_YUV422, static_cast<int>(QPixelFormat::YUV422), 222},
    {sipName_YUV444, static_cast<int>(QPixelFormat::YUV444), 222},
    {sipName_YUYV, static_cast<int>(QPixelFormat::YUYV), 222},
    {sipName_YV12, static_cast<int>(QPixelFormat::YV12), 222},
};

PyDoc_STRVAR(doc_QPixelFormat, "\1QPixelFormat()\n"
    "QPixelFormat(QPixelFormat.ColorModel, int, int, int, int, int, int, QPixelFormat.AlphaUsage, QPixelFormat.AlphaPosition, QPixelFormat.AlphaPremultiplied, QPixelFormat.TypeInterpretation, QPixelFormat.ByteOrder byteOrder=QPixelFormat.CurrentSystemEndian, int subEnum=0)\n"
    "QPixelFormat(QPixelFormat)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QPixelFormat = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPixelFormat,
        {0}
    },
    {
        sipNameNr_QPixelFormat,
        {0, 0, 1},
        22, methods_QPixelFormat,
        37, enummembers_QPixelFormat,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPixelFormat,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QPixelFormat,
    init_type_QPixelFormat,
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
    dealloc_QPixelFormat,
    assign_QPixelFormat,
    array_QPixelFormat,
    copy_QPixelFormat,
    release_QPixelFormat,
    cast_QPixelFormat,
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
