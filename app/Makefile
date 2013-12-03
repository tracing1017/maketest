TOPDIR    := $(shell if [ "$$PWD" != "" ]; then echo $$PWD; else pwd; fi)
export    TOPDIR

INCLUDE := -I$(TOPDIR)/include
export    INCLUDE

SUBDIRS = $(shell ls -F | grep "/")

FILES := $(foreach dir,$(SUBDIRS),$(wildcard $(dir)*.c))
OBJS := $(notdir $(FILES))
OBJS := $(OBJS:.c=.o)
OBJS := $(addprefix ../bin/,$(OBJS))

all:mh

mh:$(OBJS)
	gcc -o mh $(OBJS)
#depend dep:
#	@for dir in $(SUBDIRS) ; do $(MAKE) -C $$dir .depend ; done

sinclude source/.depend
sinclude a/.depend
sinclude b/.depend

TEST1:
	$(MAKE) -C source

TEST2:
	$(MAKE) -C a

TEST3:
	$(MAKE) -C b

clean:
	rm -f ../bin/*
