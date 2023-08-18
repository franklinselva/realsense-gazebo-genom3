
ACLOCAL_AMFLAGS=	-I autoconf

# IDL source files
idldir=		$(datadir)/idl/realsense_gazebo
nobase_dist_idl_DATA= realsense-gazebo.gen

pkgconfigdir=	$(libdir)/pkgconfig
pkgconfig_DATA=
pkgconfig_DATA+= realsense_gazebo-genom3.pc

# we don't want generated templates in the distribution
#
DIST_SUBDIRS=		codels
SUBDIRS=		${DIST_SUBDIRS}

# recursion into templates directories configured with --with-templates
#
SUBDIRS+=		${AG_TEMPLATES_SUBDIRS}

distclean-local:
	-rm -rf ${AG_TEMPLATES_SUBDIRS}

# a rule to invoke skeleton merge mode
#
merge: merge-interactive
merge-%:
	cd ${top_srcdir} && ${GENOM3}  \
		skeleton -l 'c++' -m $* realsense-gazebo.gen

# documentation
dist_doc_DATA=	README.html README.adoc

%.html: %.adoc
	$(ASCIIDOCTOR) $(ASCIIDOCTOR_ARGS) -b html5 -o $@ $<
