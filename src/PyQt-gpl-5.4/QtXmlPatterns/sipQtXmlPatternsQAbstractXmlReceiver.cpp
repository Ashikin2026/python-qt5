/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:13 2015
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

#include "sipAPIQtXmlPatterns.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtXmlPatterns/qabstractxmlreceiver.sip"
#include <qabstractxmlreceiver.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtXmlPatterns/sipQtXmlPatternsQAbstractXmlReceiver.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtXmlPatterns/qxmlname.sip"
#include <qxmlname.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtXmlPatterns/sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtXmlPatterns/sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtXmlPatterns/sipQtXmlPatternsQAbstractXmlReceiver.cpp"
#line 68 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtXmlPatterns/sipQtXmlPatternsQAbstractXmlReceiver.cpp"


class sipQAbstractXmlReceiver : public QAbstractXmlReceiver
{
public:
    sipQAbstractXmlReceiver();
    virtual ~sipQAbstractXmlReceiver();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void endOfSequence();
    void startOfSequence();
    void namespaceBinding(const QXmlName&);
    void atomicValue(const QVariant&);
    void processingInstruction(const QXmlName&,const QString&);
    void endDocument();
    void startDocument();
    void characters(const QStringRef&);
    void comment(const QString&);
    void attribute(const QXmlName&,const QStringRef&);
    void endElement();
    void startElement(const QXmlName&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractXmlReceiver(const sipQAbstractXmlReceiver &);
    sipQAbstractXmlReceiver &operator = (const sipQAbstractXmlReceiver &);

    char sipPyMethods[12];
};

sipQAbstractXmlReceiver::sipQAbstractXmlReceiver(): QAbstractXmlReceiver(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractXmlReceiver::~sipQAbstractXmlReceiver()
{
    sipCommonDtor(sipPySelf);
}

void sipQAbstractXmlReceiver::endOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endOfSequence);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQAbstractXmlReceiver::startOfSequence()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startOfSequence);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQAbstractXmlReceiver::namespaceBinding(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractXmlReceiver,sipName_namespaceBinding);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQAbstractXmlReceiver::atomicValue(const QVariant& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QAbstractXmlReceiver,sipName_atomicValue);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_2)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QVariant&);

    ((sipVH_QtCore_2)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[2]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQAbstractXmlReceiver::processingInstruction(const QXmlName& a0,const QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,sipName_QAbstractXmlReceiver,sipName_processingInstruction);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&,const QString&);

    sipVH_QtXmlPatterns_0(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractXmlReceiver::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endDocument);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQAbstractXmlReceiver::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startDocument);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQAbstractXmlReceiver::characters(const QStringRef& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,sipName_QAbstractXmlReceiver,sipName_characters);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_4(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QStringRef&);

    sipVH_QtXmlPatterns_4(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQAbstractXmlReceiver::comment(const QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,sipName_QAbstractXmlReceiver,sipName_comment);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&);

    sipVH_QtXmlPatterns_3(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

void sipQAbstractXmlReceiver::attribute(const QXmlName& a0,const QStringRef& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,sipName_QAbstractXmlReceiver,sipName_attribute);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&,const QStringRef&);

    sipVH_QtXmlPatterns_1(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0, a1);
}

void sipQAbstractXmlReceiver::endElement()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QAbstractXmlReceiver,sipName_endElement);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtXmlPatterns_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

void sipQAbstractXmlReceiver::startElement(const QXmlName& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[11],sipPySelf,sipName_QAbstractXmlReceiver,sipName_startElement);

    if (!sipMeth)
        return;

    extern void sipVH_QtXmlPatterns_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QXmlName&);

    sipVH_QtXmlPatterns_2(sipGILState, sipModuleAPI_QtXmlPatterns_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_startElement, "QAbstractXmlReceiver.startElement(QXmlName)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_startElement(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QXmlName, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startElement);
                return NULL;
            }

            sipCpp->startElement(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_startElement, doc_QAbstractXmlReceiver_startElement);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_endElement, "QAbstractXmlReceiver.endElement()");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_endElement(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endElement);
                return NULL;
            }

            sipCpp->endElement();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_endElement, doc_QAbstractXmlReceiver_endElement);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_attribute, "QAbstractXmlReceiver.attribute(QXmlName, QStringRef)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_attribute(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_attribute(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        const QStringRef* a1;
        int a1State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QXmlName, &a0, sipType_QStringRef,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_attribute);
                return NULL;
            }

            sipCpp->attribute(*a0,*a1);
            sipReleaseType(const_cast<QStringRef *>(a1),sipType_QStringRef,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_attribute, doc_QAbstractXmlReceiver_attribute);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_comment, "QAbstractXmlReceiver.comment(str)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_comment(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_comment(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QString* a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QString,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_comment);
                return NULL;
            }

            sipCpp->comment(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_comment, doc_QAbstractXmlReceiver_comment);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_characters, "QAbstractXmlReceiver.characters(QStringRef)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_characters(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QStringRef* a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QStringRef,&a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_characters);
                return NULL;
            }

            sipCpp->characters(*a0);
            sipReleaseType(const_cast<QStringRef *>(a0),sipType_QStringRef,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_characters, doc_QAbstractXmlReceiver_characters);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_startDocument, "QAbstractXmlReceiver.startDocument()");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startDocument);
                return NULL;
            }

            sipCpp->startDocument();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_startDocument, doc_QAbstractXmlReceiver_startDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_endDocument, "QAbstractXmlReceiver.endDocument()");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endDocument);
                return NULL;
            }

            sipCpp->endDocument();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_endDocument, doc_QAbstractXmlReceiver_endDocument);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_processingInstruction, "QAbstractXmlReceiver.processingInstruction(QXmlName, str)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        const QString* a1;
        int a1State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J1", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QXmlName, &a0, sipType_QString,&a1, &a1State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_processingInstruction);
                return NULL;
            }

            sipCpp->processingInstruction(*a0,*a1);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_processingInstruction, doc_QAbstractXmlReceiver_processingInstruction);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_atomicValue, "QAbstractXmlReceiver.atomicValue(QVariant)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_atomicValue(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_atomicValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QVariant* a0;
        int a0State = 0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QVariant, &a0, &a0State))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_atomicValue);
                return NULL;
            }

            sipCpp->atomicValue(*a0);
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_atomicValue, doc_QAbstractXmlReceiver_atomicValue);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_namespaceBinding, "QAbstractXmlReceiver.namespaceBinding(QXmlName)");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_namespaceBinding(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_namespaceBinding(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QXmlName* a0;
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp, sipType_QXmlName, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_namespaceBinding);
                return NULL;
            }

            sipCpp->namespaceBinding(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_namespaceBinding, doc_QAbstractXmlReceiver_namespaceBinding);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_startOfSequence, "QAbstractXmlReceiver.startOfSequence()");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_startOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_startOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_startOfSequence);
                return NULL;
            }

            sipCpp->startOfSequence();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_startOfSequence, doc_QAbstractXmlReceiver_startOfSequence);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractXmlReceiver_endOfSequence, "QAbstractXmlReceiver.endOfSequence()");

extern "C" {static PyObject *meth_QAbstractXmlReceiver_endOfSequence(PyObject *, PyObject *);}
static PyObject *meth_QAbstractXmlReceiver_endOfSequence(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractXmlReceiver *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractXmlReceiver, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractXmlReceiver, sipName_endOfSequence);
                return NULL;
            }

            sipCpp->endOfSequence();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractXmlReceiver, sipName_endOfSequence, doc_QAbstractXmlReceiver_endOfSequence);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractXmlReceiver(void *, const sipTypeDef *);}
static void *cast_QAbstractXmlReceiver(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractXmlReceiver)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractXmlReceiver(void *, int);}
static void release_QAbstractXmlReceiver(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractXmlReceiver *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractXmlReceiver *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractXmlReceiver(sipSimpleWrapper *);}
static void dealloc_QAbstractXmlReceiver(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractXmlReceiver *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractXmlReceiver(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractXmlReceiver(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractXmlReceiver(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractXmlReceiver *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQAbstractXmlReceiver();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractXmlReceiver[] = {
    {SIP_MLNAME_CAST(sipName_atomicValue), meth_QAbstractXmlReceiver_atomicValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_atomicValue)},
    {SIP_MLNAME_CAST(sipName_attribute), meth_QAbstractXmlReceiver_attribute, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_attribute)},
    {SIP_MLNAME_CAST(sipName_characters), meth_QAbstractXmlReceiver_characters, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_characters)},
    {SIP_MLNAME_CAST(sipName_comment), meth_QAbstractXmlReceiver_comment, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_comment)},
    {SIP_MLNAME_CAST(sipName_endDocument), meth_QAbstractXmlReceiver_endDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_endDocument)},
    {SIP_MLNAME_CAST(sipName_endElement), meth_QAbstractXmlReceiver_endElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_endElement)},
    {SIP_MLNAME_CAST(sipName_endOfSequence), meth_QAbstractXmlReceiver_endOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_endOfSequence)},
    {SIP_MLNAME_CAST(sipName_namespaceBinding), meth_QAbstractXmlReceiver_namespaceBinding, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_namespaceBinding)},
    {SIP_MLNAME_CAST(sipName_processingInstruction), meth_QAbstractXmlReceiver_processingInstruction, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_processingInstruction)},
    {SIP_MLNAME_CAST(sipName_startDocument), meth_QAbstractXmlReceiver_startDocument, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_startDocument)},
    {SIP_MLNAME_CAST(sipName_startElement), meth_QAbstractXmlReceiver_startElement, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_startElement)},
    {SIP_MLNAME_CAST(sipName_startOfSequence), meth_QAbstractXmlReceiver_startOfSequence, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractXmlReceiver_startOfSequence)}
};

PyDoc_STRVAR(doc_QAbstractXmlReceiver, "\1QAbstractXmlReceiver()");


pyqt5ClassTypeDef sipTypeDef_QtXmlPatterns_QAbstractXmlReceiver = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractXmlReceiver,
        {0}
    },
    {
        sipNameNr_QAbstractXmlReceiver,
        {0, 0, 1},
        12, methods_QAbstractXmlReceiver,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractXmlReceiver,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractXmlReceiver,
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
    dealloc_QAbstractXmlReceiver,
    0,
    0,
    0,
    release_QAbstractXmlReceiver,
    cast_QAbstractXmlReceiver,
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
