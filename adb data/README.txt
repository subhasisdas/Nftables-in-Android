/***********************************
README - Term project

Members:
	Subhasis Das
	Gaurav Piyush
	Chaitanya Saxena
/***********************************

The project structure consists of the following files:

android-ndk-r9b/ -> android ndk source file
ndk_standalone/ -> compiled binaries and header files from android ndk
libmnl/ -> userspace libmnl source codes
libnftnl/ -> userspace libnftnl source codes
libgmp/ -> userspace libnftnl source codes
readline-6.2/ -> userspace readline-6.2 source codes
libncurses/ -> userspace libncurses source codes
Kernel-goldfish/ -> goldfish 3.4 android kernel
nftables1/ -> nftable source code
Test Codes for User space libraries/ -> Test codes for testing userspace libraries
temp/ -> unused files
CSE 508 Term Project Report.docx/ -> Report for the project.

Testing code for userspace libraries: (Detailed steps for building in report)

$ emulator -kernel /home/gaurav/Desktop/Net-Sec/Kernel-goldfish/goldfish/arch/x86/boot/bzImage

$ mount -o rw,remount /system
$ adb push adb_push/. /system/lib
$ adb push adb_push_data/. /data
$ adb shell
# cd /data
# ./libmnl_test
# ./libnftnl_test
# ./libgmp_test
# ./libreadline_test


