#!/bin/sh

set -e -x

for i in $(seq 1 1000); do
	rm -rf build *.so
	if ! python setup.py build_ext -i -j4 ||
			! python -c 'import foo; import bar'; then
		echo "Reproduced at iteration ${i}"
		break
	fi
done
