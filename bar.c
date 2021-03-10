#include <Python.h>

void call_shared();

static PyModuleDef barmodule = {
	PyModuleDef_HEAD_INIT,
	.m_name = "bar",
	.m_doc = "bar test module",
	.m_size = -1,
};

PyMODINIT_FUNC
PyInit_bar(void)
{
	call_shared();
	return PyModule_Create(&barmodule);
}
