DESCRIPTION = "TI Security Accelerator LLD (SA LLD) Library"

DEPENDS = "common-csl-ip"

include sa-lld.inc

do_compile () {
#   Now build the lld in the updated directory
	make -f makefile_armv7 clean lib PDK_INSTALL_PATH=${STAGING_INCDIR}
}

do_install () {
	make -f makefile_armv7 install PDK_INSTALL_PATH=${STAGING_INCDIR} INSTALL_INC_BASE_DIR=${D}/${includedir} INSTALL_LIB_BASE_DIR=${D}${libdir}
}
