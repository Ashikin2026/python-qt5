/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:06 2015
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

#include "sipAPIQtWebKitWidgets.h"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 215 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtWebKitWidgets/qwebpage.sip"
#include <qwebpage.h>
#line 31 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtWebKitWidgets/sipQtWebKitWidgetsQWebPageExtensionOption.cpp"



/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPage_ExtensionOption(void *, const sipTypeDef *);}
static void *cast_QWebPage_ExtensionOption(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPage_ExtensionOption)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPage_ExtensionOption(void *, int);}
static void release_QWebPage_ExtensionOption(void *sipCppV,int)
{
    delete reinterpret_cast<QWebPage::ExtensionOption *>(sipCppV);
}


extern "C" {static void assign_QWebPage_ExtensionOption(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPage_ExtensionOption(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPage::ExtensionOption *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPage::ExtensionOption *>(sipSrc);
}


extern "C" {static void *array_QWebPage_ExtensionOption(SIP_SSIZE_T);}
static void *array_QWebPage_ExtensionOption(SIP_SSIZE_T sipNrElem)
{
    return new QWebPage::ExtensionOption[sipNrElem];
}


extern "C" {static void *copy_QWebPage_ExtensionOption(const void *, SIP_SSIZE_T);}
static void *copy_QWebPage_ExtensionOption(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPage::ExtensionOption(reinterpret_cast<const QWebPage::ExtensionOption *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPage_ExtensionOption(sipSimpleWrapper *);}
static void dealloc_QWebPage_ExtensionOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPage_ExtensionOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPage_ExtensionOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPage_ExtensionOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPage::ExtensionOption *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebPage::ExtensionOption();

            return sipCpp;
        }
    }

    {
        const QWebPage::ExtensionOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPage_ExtensionOption, &a0))
        {
            sipCpp = new QWebPage::ExtensionOption(*a0);

            return sipCpp;
        }
    }

    return NULL;
}

PyDoc_STRVAR(doc_QWebPage_ExtensionOption, "\1QWebPage.ExtensionOption()\n"
    "QWebPage.ExtensionOption(QWebPage.ExtensionOption)");


pyqt5ClassTypeDef sipTypeDef_QtWebKitWidgets_QWebPage_ExtensionOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebPage__ExtensionOption,
        {0}
    },
    {
        sipNameNr_ExtensionOption,
        {9, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPage_ExtensionOption,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPage_ExtensionOption,
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
    dealloc_QWebPage_ExtensionOption,
    assign_QWebPage_ExtensionOption,
    array_QWebPage_ExtensionOption,
    copy_QWebPage_ExtensionOption,
    release_QWebPage_ExtensionOption,
    cast_QWebPage_ExtensionOption,
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
