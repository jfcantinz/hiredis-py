#include "reader.h"

PyTypeObject hiredis_ReaderType = {
    PyObject_HEAD_INIT(NULL)
    0,                            /*ob_size*/
    "hiredis.Reader",             /*tp_name*/
    sizeof(hiredis_ReaderObject), /*tp_basicsize*/
    0,                            /*tp_itemsize*/
    0,                            /*tp_dealloc*/
    0,                            /*tp_print*/
    0,                            /*tp_getattr*/
    0,                            /*tp_setattr*/
    0,                            /*tp_compare*/
    0,                            /*tp_repr*/
    0,                            /*tp_as_number*/
    0,                            /*tp_as_sequence*/
    0,                            /*tp_as_mapping*/
    0,                            /*tp_hash */
    0,                            /*tp_call*/
    0,                            /*tp_str*/
    0,                            /*tp_getattro*/
    0,                            /*tp_setattro*/
    0,                            /*tp_as_buffer*/
    Py_TPFLAGS_DEFAULT,           /*tp_flags*/
    "Hiredis protocol reader",    /*tp_doc */
};
