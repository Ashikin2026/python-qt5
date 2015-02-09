/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:22 2015
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

#include "sipAPIQtSensors.h"

#line 46 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtSensors/qgyroscope.sip"
#include <qgyroscope.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQGyroscopeFilter.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtSensors/qgyroscope.sip"
#include <qgyroscope.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtSensors/sipQtSensorsQGyroscopeFilter.cpp"


class sipQGyroscopeFilter : public QGyroscopeFilter
{
public:
    sipQGyroscopeFilter();
    sipQGyroscopeFilter(const QGyroscopeFilter&);
    virtual ~sipQGyroscopeFilter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool filter(QGyroscopeReading*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGyroscopeFilter(const sipQGyroscopeFilter &);
    sipQGyroscopeFilter &operator = (const sipQGyroscopeFilter &);

    char sipPyMethods[1];
};

sipQGyroscopeFilter::sipQGyroscopeFilter(): QGyroscopeFilter(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGyroscopeFilter::sipQGyroscopeFilter(const QGyroscopeFilter& a0): QGyroscopeFilter(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGyroscopeFilter::~sipQGyroscopeFilter()
{
    sipCommonDtor(sipPySelf);
}

bool sipQGyroscopeFilter::filter(QGyroscopeReading*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QGyroscopeFilter,sipName_filter);

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtSensors_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QGyroscopeReading*);

    return sipVH_QtSensors_11(sipGILState, sipModuleAPI_QtSensors_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QGyroscopeFilter_filter, "QGyroscopeFilter.filter(QGyroscopeReading) -> bool");

extern "C" {static PyObject *meth_QGyroscopeFilter_filter(PyObject *, PyObject *);}
static PyObject *meth_QGyroscopeFilter_filter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QGyroscopeReading* a0;
        QGyroscopeFilter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGyroscopeFilter, &sipCpp, sipType_QGyroscopeReading, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QGyroscopeFilter, sipName_filter);
                return NULL;
            }

            sipRes = sipCpp->filter(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGyroscopeFilter, sipName_filter, doc_QGyroscopeFilter_filter);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGyroscopeFilter(void *, const sipTypeDef *);}
static void *cast_QGyroscopeFilter(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGyroscopeFilter)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorFilter)->ctd_cast((QSensorFilter *)(QGyroscopeFilter *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGyroscopeFilter(void *, int);}
static void release_QGyroscopeFilter(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGyroscopeFilter *>(sipCppV);
    else
        delete reinterpret_cast<QGyroscopeFilter *>(sipCppV);
}


extern "C" {static void dealloc_QGyroscopeFilter(sipSimpleWrapper *);}
static void dealloc_QGyroscopeFilter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGyroscopeFilter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGyroscopeFilter(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGyroscopeFilter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGyroscopeFilter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGyroscopeFilter *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQGyroscopeFilter();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QGyroscopeFilter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGyroscopeFilter, &a0))
        {
            sipCpp = new sipQGyroscopeFilter(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGyroscopeFilter[] = {{53, 255, 1}};


static PyMethodDef methods_QGyroscopeFilter[] = {
    {SIP_MLNAME_CAST(sipName_filter), meth_QGyroscopeFilter_filter, METH_VARARGS, SIP_MLDOC_CAST(doc_QGyroscopeFilter_filter)}
};

PyDoc_STRVAR(doc_QGyroscopeFilter, "\1QGyroscopeFilter()\n"
    "QGyroscopeFilter(QGyroscopeFilter)");


pyqt5ClassTypeDef sipTypeDef_QtSensors_QGyroscopeFilter = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGyroscopeFilter,
        {0}
    },
    {
        sipNameNr_QGyroscopeFilter,
        {0, 0, 1},
        1, methods_QGyroscopeFilter,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGyroscopeFilter,
    -1,
    -1,
    supers_QGyroscopeFilter,
    0,
    init_type_QGyroscopeFilter,
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
    dealloc_QGyroscopeFilter,
    0,
    0,
    0,
    release_QGyroscopeFilter,
    cast_QGyroscopeFilter,
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
