CC := g++
CCFLAGS := -g -pthread
LDFLAGS :=

# AbstractFactory/ Singleton/
SUBDIRS := $(wildcard */)

CCFLAGS += -I $(SUBDIRS)
LDFLAGS += -L $(SUBDIRS)

export CC
export CCFLAGS
export LDFLAGS

.PHONY : all clean distclean $(SUBDIRS)

all : $(SUBDIRS)

$(SUBDIRS) :
	$(MAKE) all -C $@

clean distclean :
	for dir in $(SUBDIRS) ; do \
		$(MAKE) $@ -C $$dir ; \
	done