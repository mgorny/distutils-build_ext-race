#include <Python.h>

void call_shared();

static PyModuleDef foomodule = {
	PyModuleDef_HEAD_INIT,
	.m_name = "foo",
	.m_doc = "foo test module",
	.m_size = -1,
};

PyMODINIT_FUNC
PyInit_foo(void)
{
	call_shared();
	return PyModule_Create(&foomodule);
}
