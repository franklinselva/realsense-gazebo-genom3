
lib_LTLIBRARIES = librealsense_gazebo_codels.la

librealsense_gazebo_codels_la_SOURCES  =	realsense_gazebo_c_types.h
librealsense_gazebo_codels_la_SOURCES +=	realsense_gazebo_codels.cc
librealsense_gazebo_codels_la_SOURCES +=	realsense_gazebo_publish_codels.cc

librealsense_gazebo_codels_la_CPPFLAGS =	$(requires_CFLAGS)
librealsense_gazebo_codels_la_LIBADD   =	$(requires_LIBS)
librealsense_gazebo_codels_la_CPPFLAGS+=	$(codels_requires_CFLAGS)
librealsense_gazebo_codels_la_LIBADD  +=	$(codels_requires_LIBS)
librealsense_gazebo_codels_la_LDFLAGS  =	-release $(PACKAGE_VERSION)


# idl  mappings
BUILT_SOURCES=	realsense_gazebo_c_types.h
CLEANFILES=	${BUILT_SOURCES}

realsense_gazebo_c_types.h: ${top_srcdir}/realsense-gazebo.gen
	${GENOM3}  mappings \
	  -MD -MF .deps/$@.d -MT $@ --signature -l c $< >$@

-include .deps/realsense_gazebo_c_types.h.d
