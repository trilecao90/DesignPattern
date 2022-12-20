CC := g++
CCFLAGS := -pthread
LDFLAGS :=

# AbstractFactory/ Singleton/
SUBDIRS := $(wildcard */)

CCFLAGS += $(addprefix -I , $(SUBDIRS))
LDFLAGS += $(addprefix -L, $(SUBDIRS))

export CC
export CCFLAGS
export LDFLAGS

.PHONY : all clean $(SUBDIRS)

all : $(SUBDIRS)

$(SUBDIRS) :
	$(MAKE) all -C $@

clean :
	for dir in $(SUBDIRS) ; do \
		$(MAKE) $@ -C $$dir ; \
	done