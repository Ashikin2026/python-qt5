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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
#include <qsgnode.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
static sipErrorState qsgnode_handle_flags(QSGNode *node, PyObject *self, QSGNode::Flags old_flags)
{
    QSGNode::Flags new_flags = node->flags();
    
    if (node->parent())
    {
        if ((old_flags & QSGNode::OwnedByParent) != (new_flags & QSGNode::OwnedByParent))
        {
            if (old_flags & QSGNode::OwnedByParent)
            {
                sipTransferBack(self);
            }
            else
            {
                PyObject *parent = sipConvertFromType(node->parent(), sipType_QSGNode, 0);

                if (!parent)
                    return sipErrorFail;

                sipTransferTo(self, parent);
                Py_DECREF(parent);
            }
        }
    }
    
    QSGNode::NodeType ntype = node->type();
        
    if (ntype == QSGNode::BasicNodeType || ntype == QSGNode::GeometryNodeType || ntype == QSGNode::ClipNodeType)
    {
        QSGBasicGeometryNode *bg_node = (QSGBasicGeometryNode *)node;
            
        if (bg_node->geometry())
        {
            if ((old_flags & QSGNode::OwnsGeometry) != (new_flags & QSGNode::OwnsGeometry))
            {
                PyObject *geom = sipConvertFromType(bg_node->geometry(), sipType_QSGGeometry, 0);

                if (!geom)
                    return sipErrorFail;

                if (old_flags & QSGNode::OwnsGeometry)
                    sipTransferBack(geom);
                else
                    sipTransferTo(geom, self);

                Py_DECREF(geom);
            }
        }
    }
    
    if (ntype == QSGNode::GeometryNodeType)
    {
        QSGGeometryNode *g_node = (QSGGeometryNode *)node;
            
        if (g_node->material())
        {
            if ((old_flags & QSGNode::OwnsMaterial) != (new_flags & QSGNode::OwnsMaterial))
            {
                PyObject *mat = sipConvertFromType(g_node->material(), sipType_QSGMaterial, 0);

                if (!mat)
                    return sipErrorFail;

                if (old_flags & QSGNode::OwnsMaterial)
                    sipTransferBack(mat);
                else
                    sipTransferTo(mat, self);

                Py_DECREF(mat);
            }
        }

        if (g_node->opaqueMaterial())
        {
            if ((old_flags & QSGNode::OwnsOpaqueMaterial) != (new_flags & QSGNode::OwnsOpaqueMaterial))
            {
                PyObject *omat = sipConvertFromType(g_node->opaqueMaterial(), sipType_QSGMaterial, 0);

                if (!omat)
                    return sipErrorFail;

                if (old_flags & QSGNode::OwnsOpaqueMaterial)
                    sipTransferBack(omat);
                else
                    sipTransferTo(omat, self);

                Py_DECREF(omat);
            }
        }
    }

    return sipErrorNone;
}
#line 131 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"


class sipQSGNode : public QSGNode
{
public:
    sipQSGNode();
    virtual ~sipQSGNode();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void preprocess();
    bool isSubtreeBlocked() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGNode(const sipQSGNode &);
    sipQSGNode &operator = (const sipQSGNode &);

    char sipPyMethods[2];
};

sipQSGNode::sipQSGNode(): QSGNode(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGNode::~sipQSGNode()
{
    sipCommonDtor(sipPySelf);
}

void sipQSGNode::preprocess()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_preprocess);

    if (!sipMeth)
    {
        QSGNode::preprocess();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[11]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}

bool sipQSGNode::isSubtreeBlocked() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_isSubtreeBlocked);

    if (!sipMeth)
        return QSGNode::isSubtreeBlocked();

    typedef bool (*sipVH_QtCore_7)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_7)(sipModuleAPI_QtQuick_QtCore->em_virthandlers[7]))(sipGILState, sipModuleAPI_QtQuick_QtCore->em_virterrorhandlers[0], sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGNode_parent, "QSGNode.parent() -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_parent(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_parent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->parent();

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_parent, doc_QSGNode_parent);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_removeChildNode, "QSGNode.removeChildNode(QSGNode)");

extern "C" {static PyObject *meth_QSGNode_removeChildNode(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_removeChildNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode* a0;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSGNode, &sipCpp, sipType_QSGNode, &a0))
        {
            sipCpp->removeChildNode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_removeChildNode, doc_QSGNode_removeChildNode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_removeAllChildNodes, "QSGNode.removeAllChildNodes()");

extern "C" {static PyObject *meth_QSGNode_removeAllChildNodes(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_removeAllChildNodes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            sipCpp->removeAllChildNodes();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_removeAllChildNodes, doc_QSGNode_removeAllChildNodes);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_prependChildNode, "QSGNode.prependChildNode(QSGNode)");

extern "C" {static PyObject *meth_QSGNode_prependChildNode(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_prependChildNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode* a0;
        PyObject *a0Wrapper;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGNode, &sipCpp, &a0Wrapper, sipType_QSGNode, &a0))
        {
#line 196 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        sipCpp->prependChildNode(a0);
        
        if (a0->flags() & QSGNode::OwnedByParent)
            sipTransferTo(a0Wrapper, sipSelf);
#line 301 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_prependChildNode, doc_QSGNode_prependChildNode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_appendChildNode, "QSGNode.appendChildNode(QSGNode)");

extern "C" {static PyObject *meth_QSGNode_appendChildNode(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_appendChildNode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode* a0;
        PyObject *a0Wrapper;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QSGNode, &sipCpp, &a0Wrapper, sipType_QSGNode, &a0))
        {
#line 204 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        sipCpp->appendChildNode(a0);
        
        if (a0->flags() & QSGNode::OwnedByParent)
            sipTransferTo(a0Wrapper, sipSelf);
#line 334 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_appendChildNode, doc_QSGNode_appendChildNode);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_insertChildNodeBefore, "QSGNode.insertChildNodeBefore(QSGNode, QSGNode)");

extern "C" {static PyObject *meth_QSGNode_insertChildNodeBefore(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_insertChildNodeBefore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode* a0;
        PyObject *a0Wrapper;
        QSGNode* a1;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8J8", &sipSelf, sipType_QSGNode, &sipCpp, &a0Wrapper, sipType_QSGNode, &a0, sipType_QSGNode, &a1))
        {
#line 212 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        sipCpp->insertChildNodeBefore(a0, a1);
        
        if (a0->flags() & QSGNode::OwnedByParent)
            sipTransferTo(a0Wrapper, sipSelf);
#line 368 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_insertChildNodeBefore, doc_QSGNode_insertChildNodeBefore);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_insertChildNodeAfter, "QSGNode.insertChildNodeAfter(QSGNode, QSGNode)");

extern "C" {static PyObject *meth_QSGNode_insertChildNodeAfter(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_insertChildNodeAfter(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode* a0;
        PyObject *a0Wrapper;
        QSGNode* a1;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8J8", &sipSelf, sipType_QSGNode, &sipCpp, &a0Wrapper, sipType_QSGNode, &a0, sipType_QSGNode, &a1))
        {
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        sipCpp->insertChildNodeAfter(a0, a1);
        
        if (a0->flags() & QSGNode::OwnedByParent)
            sipTransferTo(a0Wrapper, sipSelf);
#line 402 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_insertChildNodeAfter, doc_QSGNode_insertChildNodeAfter);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_childCount, "QSGNode.childCount() -> int");

extern "C" {static PyObject *meth_QSGNode_childCount(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_childCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->childCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_childCount, doc_QSGNode_childCount);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_childAtIndex, "QSGNode.childAtIndex(int) -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_childAtIndex(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_childAtIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_QSGNode, &sipCpp, &a0))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->childAtIndex(a0);

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_childAtIndex, doc_QSGNode_childAtIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_firstChild, "QSGNode.firstChild() -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_firstChild(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_firstChild(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->firstChild();

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_firstChild, doc_QSGNode_firstChild);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_lastChild, "QSGNode.lastChild() -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_lastChild(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_lastChild(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->lastChild();

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_lastChild, doc_QSGNode_lastChild);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_nextSibling, "QSGNode.nextSibling() -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_nextSibling(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_nextSibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->nextSibling();

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_nextSibling, doc_QSGNode_nextSibling);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_previousSibling, "QSGNode.previousSibling() -> QSGNode");

extern "C" {static PyObject *meth_QSGNode_previousSibling(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_previousSibling(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode*sipRes;

            sipRes = sipCpp->previousSibling();

            return sipConvertFromType(sipRes,sipType_QSGNode,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_previousSibling, doc_QSGNode_previousSibling);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_type, "QSGNode.type() -> QSGNode.NodeType");

extern "C" {static PyObject *meth_QSGNode_type(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode::NodeType sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QSGNode_NodeType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_type, doc_QSGNode_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_markDirty, "QSGNode.markDirty(QSGNode.DirtyState)");

extern "C" {static PyObject *meth_QSGNode_markDirty(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_markDirty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode::DirtyState* a0;
        int a0State = 0;
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSGNode, &sipCpp, sipType_QSGNode_DirtyState, &a0, &a0State))
        {
            sipCpp->markDirty(*a0);
            sipReleaseType(a0,sipType_QSGNode_DirtyState,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_markDirty, doc_QSGNode_markDirty);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_isSubtreeBlocked, "QSGNode.isSubtreeBlocked() -> bool");

extern "C" {static PyObject *meth_QSGNode_isSubtreeBlocked(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_isSubtreeBlocked(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGNode::isSubtreeBlocked() : sipCpp->isSubtreeBlocked());

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_isSubtreeBlocked, doc_QSGNode_isSubtreeBlocked);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_flags, "QSGNode.flags() -> QSGNode.Flags");

extern "C" {static PyObject *meth_QSGNode_flags(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            QSGNode::Flags*sipRes;

            sipRes = new QSGNode::Flags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_QSGNode_Flags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_flags, doc_QSGNode_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_setFlag, "QSGNode.setFlag(QSGNode.Flag, bool enabled=True)");

extern "C" {static PyObject *meth_QSGNode_setFlag(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSGNode_setFlag(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode::Flag a0;
        bool a1 = 1;
        QSGNode *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_enabled,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|b", &sipSelf, sipType_QSGNode, &sipCpp, sipType_QSGNode_Flag, &a0, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 238 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        QSGNode::Flags old_flags = sipCpp->flags();
        
        sipCpp->setFlag(a0, a1);
        
        sipError = qsgnode_handle_flags(sipCpp, sipSelf, old_flags);
#line 717 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            Py_INCREF(Py_None);
            return Py_None;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_setFlag, doc_QSGNode_setFlag);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_setFlags, "QSGNode.setFlags(QSGNode.Flags, bool enabled=True)");

extern "C" {static PyObject *meth_QSGNode_setFlags(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QSGNode_setFlags(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QSGNode::Flags* a0;
        int a0State = 0;
        bool a1 = 1;
        QSGNode *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_enabled,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1|b", &sipSelf, sipType_QSGNode, &sipCpp, sipType_QSGNode_Flags, &a0, &a0State, &a1))
        {
            sipErrorState sipError = sipErrorNone;

#line 247 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\sip/QtQuick/qsgnode.sip"
        QSGNode::Flags old_flags = sipCpp->flags();
        
        sipCpp->setFlags(*a0, a1);
        
        sipError = qsgnode_handle_flags(sipCpp, sipSelf, old_flags);
#line 767 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"
            sipReleaseType(a0,sipType_QSGNode_Flags,a0State);

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            Py_INCREF(Py_None);
            return Py_None;
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_setFlags, doc_QSGNode_setFlags);

    return NULL;
}


PyDoc_STRVAR(doc_QSGNode_preprocess, "QSGNode.preprocess()");

extern "C" {static PyObject *meth_QSGNode_preprocess(PyObject *, PyObject *);}
static PyObject *meth_QSGNode_preprocess(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QSGNode *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGNode, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QSGNode::preprocess() : sipCpp->preprocess());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGNode, sipName_preprocess, doc_QSGNode_preprocess);

    return NULL;
}


extern "C" {static SIP_SSIZE_T slot_QSGNode___len__(PyObject *);}
static SIP_SSIZE_T slot_QSGNode___len__(PyObject *sipSelf)
{
    QSGNode *sipCpp = reinterpret_cast<QSGNode *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSGNode));

    if (!sipCpp)
        return 0;


    {
        {
            SIP_SSIZE_T sipRes = 0;

#line 1 "Auto-generated"
            sipRes = (SIP_SSIZE_T)sipCpp->childCount();
#line 832 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.4\\PyQt-gpl-5.4\\QtQuick/sipQtQuickQSGNode.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGNode(void *, const sipTypeDef *);}
static void *cast_QSGNode(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSGNode)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGNode(void *, int);}
static void release_QSGNode(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGNode *>(sipCppV);
    else
        delete reinterpret_cast<QSGNode *>(sipCppV);
}


extern "C" {static void dealloc_QSGNode(sipSimpleWrapper *);}
static void dealloc_QSGNode(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGNode *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGNode(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGNode(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGNode(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGNode *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGNode();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSGNode[] = {
    {(void *)slot_QSGNode___len__, len_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSGNode[] = {
    {SIP_MLNAME_CAST(sipName_appendChildNode), meth_QSGNode_appendChildNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_appendChildNode)},
    {SIP_MLNAME_CAST(sipName_childAtIndex), meth_QSGNode_childAtIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_childAtIndex)},
    {SIP_MLNAME_CAST(sipName_childCount), meth_QSGNode_childCount, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_childCount)},
    {SIP_MLNAME_CAST(sipName_firstChild), meth_QSGNode_firstChild, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_firstChild)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QSGNode_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_flags)},
    {SIP_MLNAME_CAST(sipName_insertChildNodeAfter), meth_QSGNode_insertChildNodeAfter, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_insertChildNodeAfter)},
    {SIP_MLNAME_CAST(sipName_insertChildNodeBefore), meth_QSGNode_insertChildNodeBefore, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_insertChildNodeBefore)},
    {SIP_MLNAME_CAST(sipName_isSubtreeBlocked), meth_QSGNode_isSubtreeBlocked, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_isSubtreeBlocked)},
    {SIP_MLNAME_CAST(sipName_lastChild), meth_QSGNode_lastChild, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_lastChild)},
    {SIP_MLNAME_CAST(sipName_markDirty), meth_QSGNode_markDirty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_markDirty)},
    {SIP_MLNAME_CAST(sipName_nextSibling), meth_QSGNode_nextSibling, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_nextSibling)},
    {SIP_MLNAME_CAST(sipName_parent), meth_QSGNode_parent, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_parent)},
    {SIP_MLNAME_CAST(sipName_prependChildNode), meth_QSGNode_prependChildNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_prependChildNode)},
    {SIP_MLNAME_CAST(sipName_preprocess), meth_QSGNode_preprocess, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_preprocess)},
    {SIP_MLNAME_CAST(sipName_previousSibling), meth_QSGNode_previousSibling, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_previousSibling)},
    {SIP_MLNAME_CAST(sipName_removeAllChildNodes), meth_QSGNode_removeAllChildNodes, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_removeAllChildNodes)},
    {SIP_MLNAME_CAST(sipName_removeChildNode), meth_QSGNode_removeChildNode, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_removeChildNode)},
    {SIP_MLNAME_CAST(sipName_setFlag), (PyCFunction)meth_QSGNode_setFlag, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSGNode_setFlag)},
    {SIP_MLNAME_CAST(sipName_setFlags), (PyCFunction)meth_QSGNode_setFlags, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QSGNode_setFlags)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSGNode_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGNode_type)}
};

static sipEnumMemberDef enummembers_QSGNode[] = {
    {sipName_BasicNodeType, static_cast<int>(QSGNode::BasicNodeType), 58},
    {sipName_ClipNodeType, static_cast<int>(QSGNode::ClipNodeType), 58},
    {sipName_DirtyGeometry, static_cast<int>(QSGNode::DirtyGeometry), 55},
    {sipName_DirtyMaterial, static_cast<int>(QSGNode::DirtyMaterial), 55},
    {sipName_DirtyMatrix, static_cast<int>(QSGNode::DirtyMatrix), 55},
    {sipName_DirtyNodeAdded, static_cast<int>(QSGNode::DirtyNodeAdded), 55},
    {sipName_DirtyNodeRemoved, static_cast<int>(QSGNode::DirtyNodeRemoved), 55},
    {sipName_DirtyOpacity, static_cast<int>(QSGNode::DirtyOpacity), 55},
    {sipName_GeometryNodeType, static_cast<int>(QSGNode::GeometryNodeType), 58},
    {sipName_OpacityNodeType, static_cast<int>(QSGNode::OpacityNodeType), 58},
    {sipName_OwnedByParent, static_cast<int>(QSGNode::OwnedByParent), 56},
    {sipName_OwnsGeometry, static_cast<int>(QSGNode::OwnsGeometry), 56},
    {sipName_OwnsMaterial, static_cast<int>(QSGNode::OwnsMaterial), 56},
    {sipName_OwnsOpaqueMaterial, static_cast<int>(QSGNode::OwnsOpaqueMaterial), 56},
    {sipName_TransformNodeType, static_cast<int>(QSGNode::TransformNodeType), 58},
    {sipName_UsePreprocess, static_cast<int>(QSGNode::UsePreprocess), 56},
};

PyDoc_STRVAR(doc_QSGNode, "\1QSGNode()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGNode = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGNode,
        {0}
    },
    {
        sipNameNr_QSGNode,
        {0, 0, 1},
        20, methods_QSGNode,
        16, enummembers_QSGNode,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGNode,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QSGNode,
    init_type_QSGNode,
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
    dealloc_QSGNode,
    0,
    0,
    0,
    release_QSGNode,
    cast_QSGNode,
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
