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

#line 583 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQDragLeaveEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtGui/sipQtGuiQDragLeaveEvent.cpp"


class sipQDragLeaveEvent : public QDragLeaveEvent
{
public:
    sipQDragLeaveEvent();
    sipQDragLeaveEvent(const QDragLeaveEvent&);
    ~sipQDragLeaveEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDragLeaveEvent(const sipQDragLeaveEvent &);
    sipQDragLeaveEvent &operator = (const sipQDragLeaveEvent &);
};

sipQDragLeaveEvent::sipQDragLeaveEvent(): QDragLeaveEvent(), sipPySelf(0)
{
}

sipQDragLeaveEvent::sipQDragLeaveEvent(const QDragLeaveEvent& a0): QDragLeaveEvent(a0), sipPySelf(0)
{
}

sipQDragLeaveEvent::~sipQDragLeaveEvent()
{
    sipCommonDtor(sipPySelf);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDragLeaveEvent(void *, const sipTypeDef *);}
static void *cast_QDragLeaveEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QDragLeaveEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QDragLeaveEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDragLeaveEvent(void *, int);}
static void release_QDragLeaveEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDragLeaveEvent *>(sipCppV);
    else
        delete reinterpret_cast<QDragLeaveEvent *>(sipCppV);
}


extern "C" {static void assign_QDragLeaveEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QDragLeaveEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QDragLeaveEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QDragLeaveEvent *>(sipSrc);
}


extern "C" {static void *array_QDragLeaveEvent(SIP_SSIZE_T);}
static void *array_QDragLeaveEvent(SIP_SSIZE_T sipNrElem)
{
    return new QDragLeaveEvent[sipNrElem];
}


extern "C" {static void *copy_QDragLeaveEvent(const void *, SIP_SSIZE_T);}
static void *copy_QDragLeaveEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QDragLeaveEvent(reinterpret_cast<const QDragLeaveEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QDragLeaveEvent(sipSimpleWrapper *);}
static void dealloc_QDragLeaveEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDragLeaveEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDragLeaveEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDragLeaveEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDragLeaveEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDragLeaveEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQDragLeaveEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDragLeaveEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDragLeaveEvent, &a0))
        {
            sipCpp = new sipQDragLeaveEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QDragLeaveEvent[] = {{53, 0, 1}};

PyDoc_STRVAR(doc_QDragLeaveEvent, "\1QDragLeaveEvent()\n"
    "QDragLeaveEvent(QDragLeaveEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QDragLeaveEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDragLeaveEvent,
        {0}
    },
    {
        sipNameNr_QDragLeaveEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDragLeaveEvent,
    -1,
    -1,
    supers_QDragLeaveEvent,
    0,
    init_type_QDragLeaveEvent,
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
    dealloc_QDragLeaveEvent,
    assign_QDragLeaveEvent,
    array_QDragLeaveEvent,
    copy_QDragLeaveEvent,
    release_QDragLeaveEvent,
    cast_QDragLeaveEvent,
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
