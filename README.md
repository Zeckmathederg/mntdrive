# mntdrive
A program that takes user input to decide which block-part device to mount using Udisk.
This program is only meant to be ran on Linux.

# Installation:
This program depends on udiskctl to run, but may compile without it. You will get an error at runtime if you do not have it installed. This may run on an outdated version of udiskctl, but it has not been tested. GCC also needs to be installed. The same case is true as was udiskctl, but this won't compile without GCC. It may run on an older version of GCC.

Clone into mntdrive into a folder of your choice. Be sure gcc/g++ is in your PATH. Afterwards, change directory into that folder and promptly run 'bash makeinstall.sh'. You may need root privleges to install the program. It is advised to check the script to see if the install path is suitable for your use case. After running the script, make sure the install path is in your PATH. To check if it has properly installed, run 'mntdrive' to check. No test suite comes with this application.

# Overview
This package uses udiskctl to mount a chosen block-part device. Upon running, it will run lsblk, an application that lists out your block devices. If your disk has a part, type in that part: [xxx]1,2,3... It will fail if you simply type the block: [xxx]. You may omit /dev/* as it is added after input. Just type [xxx]1,2,3... to mount your drive. udiskctl handles the rest and automatically asigns the mount point.
