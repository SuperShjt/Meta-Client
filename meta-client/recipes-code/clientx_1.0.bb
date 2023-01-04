DESCRIPTION = "Simple hello world application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COREBASE}/meta/files/common-licenses/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

DEPENDS += " qtbase"
FILES_${PN} += " ${bindir}/socketTest "

inherit qmake5


SRC_URI = "file://main.cpp \
	   file://socketclass.cpp \
	   file://socketclass.h \
	   file://socketTest.pro \
	   "

S = "${WORKDIR}"

do_install(){

	install -d ${D}${bindir}
	install -m 0775 socketTest ${D}${bindir}
}


