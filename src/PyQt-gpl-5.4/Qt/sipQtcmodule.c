/*
 * Composite module code.
 *
 * Generated by SIP 4.16.5 on Thu Feb 05 16:18:40 2015
 */

#include <Python.h>


static void sip_import_component_module(PyObject *d, const char *name)
{
    PyObject *mod;

    PyErr_Clear();

#if PY_VERSION_HEX >= 0x02050000
    mod = PyImport_ImportModule(name);
#else
    mod = PyImport_ImportModule((char *)name);
#endif

    /*
     * Note that we don't complain if the module can't be imported.  This
     * is a favour to Linux distro packagers who like to split PyQt into
     * different sub-packages.
     */
    if (mod)
    {
        PyDict_Merge(d, PyModule_GetDict(mod), 0);
        Py_DECREF(mod);
    }
}


/* The Python module initialisation function. */
#if PY_MAJOR_VERSION >= 3
#define SIP_MODULE_ENTRY        PyInit_Qt
#define SIP_MODULE_TYPE         PyObject *
#define SIP_MODULE_DISCARD(r)   Py_DECREF(r)
#define SIP_MODULE_RETURN(r)    return (r)
#else
#define SIP_MODULE_ENTRY        initQt
#define SIP_MODULE_TYPE         void
#define SIP_MODULE_DISCARD(r)
#define SIP_MODULE_RETURN(r)    return
#endif

#if defined(SIP_STATIC_MODULE)
SIP_MODULE_TYPE SIP_MODULE_ENTRY(void)
#else
PyMODINIT_FUNC SIP_MODULE_ENTRY(void)
#endif
{

#if PY_MAJOR_VERSION >= 3
    static PyModuleDef sip_module_def = {
        PyModuleDef_HEAD_INIT,
        "PyQt5.Qt",
        NULL,
        -1,
        NULL,
        NULL,
        NULL,
        NULL,
        NULL
    };
#endif

    PyObject *sipModule, *sipModuleDict;

#if PY_MAJOR_VERSION >= 3
    sipModule = PyModule_Create(&sip_module_def);
#elif PY_VERSION_HEX >= 0x02050000
    sipModule = Py_InitModule("PyQt5.Qt", NULL);
#else
    sipModule = Py_InitModule((char *)"PyQt5.Qt", NULL);
#endif

    if (sipModule == NULL)
        SIP_MODULE_RETURN(NULL);

    sipModuleDict = PyModule_GetDict(sipModule);

    sip_import_component_module(sipModuleDict, "PyQt5.QtCore");
    sip_import_component_module(sipModuleDict, "PyQt5.QtGui");
    sip_import_component_module(sipModuleDict, "PyQt5.QtNetwork");
    sip_import_component_module(sipModuleDict, "PyQt5.QtSensors");
    sip_import_component_module(sipModuleDict, "PyQt5.QtSerialPort");
    sip_import_component_module(sipModuleDict, "PyQt5.QtMultimedia");
    sip_import_component_module(sipModuleDict, "PyQt5.QtQml");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWebKit");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWidgets");
    sip_import_component_module(sipModuleDict, "PyQt5.QtXml");
    sip_import_component_module(sipModuleDict, "PyQt5.QtXmlPatterns");
    sip_import_component_module(sipModuleDict, "PyQt5.QtDesigner");
    sip_import_component_module(sipModuleDict, "PyQt5.QtHelp");
    sip_import_component_module(sipModuleDict, "PyQt5.QtMultimediaWidgets");
    sip_import_component_module(sipModuleDict, "PyQt5.QtOpenGL");
    sip_import_component_module(sipModuleDict, "PyQt5.QtPrintSupport");
    sip_import_component_module(sipModuleDict, "PyQt5.QtQuick");
    sip_import_component_module(sipModuleDict, "PyQt5.QtSql");
    sip_import_component_module(sipModuleDict, "PyQt5.QtSvg");
    sip_import_component_module(sipModuleDict, "PyQt5.QtTest");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWebKitWidgets");
    sip_import_component_module(sipModuleDict, "PyQt5.QtBluetooth");
    sip_import_component_module(sipModuleDict, "PyQt5.QtPositioning");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWinExtras");
    sip_import_component_module(sipModuleDict, "PyQt5.QtQuickWidgets");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWebSockets");
    sip_import_component_module(sipModuleDict, "PyQt5.Enginio");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWebChannel");
    sip_import_component_module(sipModuleDict, "PyQt5.QtWebEngineWidgets");

    PyErr_Clear();

    SIP_MODULE_RETURN(sipModule);
}
