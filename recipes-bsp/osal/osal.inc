LICENSE = "BSD-3-Clause"
LIC_FILES_CHKSUM = "file://osal.h;beginline=1;endline=31;md5=ae7b9f0410f26c80dcf790ef3f622fad"

COMPATIBLE_MACHINE = "ti33x|ti43x|omap-a15|keystone|omapl1"
PACKAGE_ARCH = "${MACHINE_ARCH}"

OSAL_GIT_URI = "git://git.ti.com/keystone-rtos/osal.git"
OSAL_GIT_PROTOCOL = "git"
OSAL_GIT_BRANCH = "master"
OSAL_GIT_DESTSUFFIX = "git/ti/osal"

# Below commit ID corresponding to "DEV.OSAL.01.00.00.09"
OSAL_SRCREV = "0bb1151f3622fb65f41f1d3dcffcee63fe9724de"

BRANCH = "${OSAL_GIT_BRANCH}"
SRC_URI = "${OSAL_GIT_URI};destsuffix=${OSAL_GIT_DESTSUFFIX};protocol=${OSAL_GIT_PROTOCOL};branch=${BRANCH}"

SRCREV = "${OSAL_SRCREV}"
PV = "01.00.00.09"
INC_PR = "r0"
