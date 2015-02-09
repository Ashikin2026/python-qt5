/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:17 2015
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

#include "sipAPIQtDesigner.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtDesigner/taskmenu.sip"
#include <taskmenu.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtDesigner/sipQtDesignerQDesignerTaskMenuExtension.cpp"

#line 26 "sip/QtWidgets/qaction.sip"
#include <qaction.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtDesigner/sipQtDesignerQDesignerTaskMenuExtension.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtDesigner/sipQtDesignerQDesignerTaskMenuExtension.cpp"


class sipQDesignerTaskMenuExtension : public QDesignerTaskMenuExtension
{
public:
    sipQDesignerTaskMenuExtension();
    sipQDesignerTaskMenuExtension(const QDesignerTaskMenuExtension&);
    virtual ~sipQDesignerTaskMenuExtension();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QAction* preferredEditAction() const;
    QList<QAction*> taskActions() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQDesignerTaskMenuExtension(const sipQDesignerTaskMenuExtension &);
    sipQDesignerTaskMenuExtension &operator = (const sipQDesignerTaskMenuExtension &);

    char sipPyMethods[2];
};

sipQDesignerTaskMenuExtension::sipQDesignerTaskMenuExtension(): QDesignerTaskMenuExtension(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerTaskMenuExtension::sipQDesignerTaskMenuExtension(const QDesignerTaskMenuExtension& a0): QDesignerTaskMenuExtension(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQDesignerTaskMenuExtension::~sipQDesignerTaskMenuExtension()
{
    sipCommonDtor(sipPySelf);
}

QAction* sipQDesignerTaskMenuExtension::preferredEditAction() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_preferredEditAction);

    if (!sipMeth)
        return QDesignerTaskMenuExtension::preferredEditAction();

    extern QAction* sipVH_QtDesigner_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_0(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

QList<QAction*> sipQDesignerTaskMenuExtension::taskActions() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,sipName_QDesignerTaskMenuExtension,sipName_taskActions);

    if (!sipMeth)
        return QList<QAction*>();

    extern QList<QAction*> sipVH_QtDesigner_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtDesigner_1(sipGILState, sipModuleAPI_QtDesigner_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QDesignerTaskMenuExtension_taskActions, "QDesignerTaskMenuExtension.taskActions() -> list-of-QAction");

extern "C" {static PyObject *meth_QDesignerTaskMenuExtension_taskActions(PyObject *, PyObject *);}
static PyObject *meth_QDesignerTaskMenuExtension_taskActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QDesignerTaskMenuExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerTaskMenuExtension, &sipCpp))
        {
            QList<QAction*>*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QDesignerTaskMenuExtension, sipName_taskActions);
                return NULL;
            }

            sipRes = new QList<QAction*>(sipCpp->taskActions());

            return sipConvertFromNewType(sipRes,sipType_QList_0101QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerTaskMenuExtension, sipName_taskActions, doc_QDesignerTaskMenuExtension_taskActions);

    return NULL;
}


PyDoc_STRVAR(doc_QDesignerTaskMenuExtension_preferredEditAction, "QDesignerTaskMenuExtension.preferredEditAction() -> QAction");

extern "C" {static PyObject *meth_QDesignerTaskMenuExtension_preferredEditAction(PyObject *, PyObject *);}
static PyObject *meth_QDesignerTaskMenuExtension_preferredEditAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QDesignerTaskMenuExtension *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QDesignerTaskMenuExtension, &sipCpp))
        {
            QAction*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QDesignerTaskMenuExtension::preferredEditAction() : sipCpp->preferredEditAction());

            return sipConvertFromType(sipRes,sipType_QAction,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QDesignerTaskMenuExtension, sipName_preferredEditAction, doc_QDesignerTaskMenuExtension_preferredEditAction);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QDesignerTaskMenuExtension(void *, const sipTypeDef *);}
static void *cast_QDesignerTaskMenuExtension(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QDesignerTaskMenuExtension)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QDesignerTaskMenuExtension(void *, int);}
static void release_QDesignerTaskMenuExtension(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQDesignerTaskMenuExtension *>(sipCppV);
    else
        delete reinterpret_cast<QDesignerTaskMenuExtension *>(sipCppV);
}


extern "C" {static void dealloc_QDesignerTaskMenuExtension(sipSimpleWrapper *);}
static void dealloc_QDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQDesignerTaskMenuExtension *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QDesignerTaskMenuExtension(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QDesignerTaskMenuExtension(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QDesignerTaskMenuExtension(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQDesignerTaskMenuExtension *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQDesignerTaskMenuExtension();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QDesignerTaskMenuExtension* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QDesignerTaskMenuExtension, &a0))
        {
            sipCpp = new sipQDesignerTaskMenuExtension(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QDesignerTaskMenuExtension[] = {
    {SIP_MLNAME_CAST(sipName_preferredEditAction), meth_QDesignerTaskMenuExtension_preferredEditAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerTaskMenuExtension_preferredEditAction)},
    {SIP_MLNAME_CAST(sipName_taskActions), meth_QDesignerTaskMenuExtension_taskActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QDesignerTaskMenuExtension_taskActions)}
};

PyDoc_STRVAR(doc_QDesignerTaskMenuExtension, "\1QDesignerTaskMenuExtension()\n"
    "QDesignerTaskMenuExtension(QDesignerTaskMenuExtension)");


pyqt5ClassTypeDef sipTypeDef_QtDesigner_QDesignerTaskMenuExtension = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QDesignerTaskMenuExtension,
        {0}
    },
    {
        sipNameNr_QDesignerTaskMenuExtension,
        {0, 0, 1},
        2, methods_QDesignerTaskMenuExtension,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QDesignerTaskMenuExtension,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QDesignerTaskMenuExtension,
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
    dealloc_QDesignerTaskMenuExtension,
    0,
    0,
    0,
    release_QDesignerTaskMenuExtension,
    cast_QDesignerTaskMenuExtension,
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
