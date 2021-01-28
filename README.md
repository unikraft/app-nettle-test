# Unikraft LibNettle Test Application

This application tests the correct functioning of the nettle cryptographic
library.

The application requires newlib and nettle to work. Also, the LIBNETTLE_TEST
option should be selected for nettle in menuconfig.

You should configure UK_ROOT and UK_LIBS, in Makefile, according to your setup.

Due to some keyboard intrerrupt issues, to select the test suite number, you
must replace the -1 in guest_fs/test_nr with the desired test suite number.
Leaving the -1 will display only the test suites and their contents.

To run with kvm: the following parameters must be given to qemu:
*   -fsdev local,id=myid,path=guest_fs,security_model=none
*   -device virtio-9p-pci,fsdev=myid,mount_tag=rootfs,disable-modern=on,disable-legacy=off

Known issues:
*   On linuxu platform, test suite 0 will make unikraft crash. Test suites
    are made so unikraft won't crash.
*   Not tested on Xen.
