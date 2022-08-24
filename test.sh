#/!/usr/bin/sh
mkdir build
pushd build
cmake ..
make -j16
./test/foo_test
# popd
