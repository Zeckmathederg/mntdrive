#!/bin/bash
# This file is meant to compile main.cpp and install the executable to the install path
export mntdriveinstallpath=/usr/local/bin
# Change the line above to change install directory. The default is /usr/local/bin. Make sure it is in your PATH.
g++ -o ./mntdrive main.cpp && mv mntdrive $mntdriveinstallpath
# Run mntdrive to make sure it works!
