#!/usr/bin/env python

from distutils.core import setup, Extension

setup(name='distutils-build_ext-race',
      version='0',
      ext_modules=[
          Extension('foo', ['foo.c', 'shared.c']),
          Extension('bar', ['bar.c', 'shared.c']),
      ])
