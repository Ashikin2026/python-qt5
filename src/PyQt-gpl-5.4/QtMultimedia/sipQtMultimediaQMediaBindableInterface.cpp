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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtMultimedia/qmediabindableinterface.sip"
#include <qmediabindableinterface.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQMediaBindableInterface.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtMultimedia/qmediaobject.sip"
#include <qmediaobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtMultimedia/sipQtMultimediaQMediaBindableInterface.cpp"


class sipQMediaBindableInterface : public QMediaBindableInterface
{
public:
    sipQMediaBindableInterface();
    sipQMediaBindableInterface(const QMediaBindableInterface&);
    virtual ~sipQMediaBindableInterface();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtect_setMediaObject(QMediaObject*);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool setMediaObject(QMediaObject*);
    QMediaObject* mediaObject() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQMediaBindableInterface(const sipQMediaBindableInterface &);
    sipQMediaBindableInterface &operator = (const sipQMediaBindableInterface &);

    char sipPyMethods[2];
};

sipQMediaBindableInterface::sipQMediaBindableInterface(): QMediaBindableInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMediaBindableInterface::sipQMediaBindableInterface(const QMediaBindableInterface& a0): QMediaBindableInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQMediaBindableInterface::~sipQMediaBindableInterface()
{
    sipCommonDtor(sipPySelf);
}

bool sipQMediaBindableInterface::setMediaObject(QMediaObject*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QMediaBindableInterface,sipName_setMediaObject);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtMultimedia_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QMediaObject*);

    return sipVH_QtMultimedia_1(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}

QMediaObject* sipQMediaBindableInterface::mediaObject() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QMediaBindableInterface,sipName_mediaObject);

    if (!sipMeth)
        return 0;

    extern QMediaObject* sipVH_QtMultimedia_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtMultimedia_2(sipGILState, sipModuleAPI_QtMultimedia_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQMediaBindableInterface::sipProtect_setMediaObject(QMediaObject*a0)
{
    return setMediaObject(a0);
}


PyDoc_STRVAR(doc_QMediaBindableInterface_mediaObject, "QMediaBindableInterface.mediaObject() -> QMediaObject");

extern "C" {static PyObject *meth_QMediaBindableInterface_mediaObject(PyObject *, PyObject *);}
static PyObject *meth_QMediaBindableInterface_mediaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QMediaBindableInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QMediaBindableInterface, &sipCpp))
        {
            QMediaObject*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMediaBindableInterface, sipName_mediaObject);
                return NULL;
            }

            sipRes = sipCpp->mediaObject();

            return sipConvertFromType(sipRes,sipType_QMediaObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaBindableInterface, sipName_mediaObject, doc_QMediaBindableInterface_mediaObject);

    return NULL;
}


PyDoc_STRVAR(doc_QMediaBindableInterface_setMediaObject, "QMediaBindableInterface.setMediaObject(QMediaObject) -> bool");

extern "C" {static PyObject *meth_QMediaBindableInterface_setMediaObject(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QMediaBindableInterface_setMediaObject(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QMediaObject* a0;
        sipQMediaBindableInterface *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QMediaBindableInterface, &sipCpp, sipType_QMediaObject, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QMediaBindableInterface, sipName_setMediaObject);
                return NULL;
            }

            sipRes = sipCpp->sipProtect_setMediaObject(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QMediaBindableInterface, sipName_setMediaObject, doc_QMediaBindableInterface_setMediaObject);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QMediaBindableInterface(void *, const sipTypeDef *);}
static void *cast_QMediaBindableInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QMediaBindableInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QMediaBindableInterface(void *, int);}
static void release_QMediaBindableInterface(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQMediaBindableInterface *>(sipCppV);
    else
        delete reinterpret_cast<QMediaBindableInterface *>(sipCppV);
}


extern "C" {static void dealloc_QMediaBindableInterface(sipSimpleWrapper *);}
static void dealloc_QMediaBindableInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQMediaBindableInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QMediaBindableInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QMediaBindableInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QMediaBindableInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQMediaBindableInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQMediaBindableInterface();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QMediaBindableInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QMediaBindableInterface, &a0))
        {
            sipCpp = new sipQMediaBindableInterface(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QMediaBindableInterface[] = {
    {SIP_MLNAME_CAST(sipName_mediaObject), meth_QMediaBindableInterface_mediaObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QMediaBindableInterface_mediaObject)},
    {SIP_MLNAME_CAST(sipName_setMediaObject), (PyCFunction)meth_QMediaBindableInterface_setMediaObject, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QMediaBindableInterface_setMediaObject)}
};

PyDoc_STRVAR(doc_QMediaBindableInterface, "\1QMediaBindableInterface()\n"
    "QMediaBindableInterface(QMediaBindableInterface)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QMediaBindableInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QMediaBindableInterface,
        {0}
    },
    {
        sipNameNr_QMediaBindableInterface,
        {0, 0, 1},
        2, methods_QMediaBindableInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QMediaBindableInterface,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QMediaBindableInterface,
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
    dealloc_QMediaBindableInterface,
    0,
    0,
    0,
    release_QMediaBindableInterface,
    cast_QMediaBindableInterface,
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
