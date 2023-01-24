CC := g++
CCFLAGS := -g -pthread
LDFLAGS :=

# AbstractFactory/ SingletonPattern/
SUBDIRS := $(wildcard */)

CCFLAGS += $(addprefix -I , $(SUBDIRS))
LDFLAGS += $(addprefix -L , $(SUBDIRS))

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