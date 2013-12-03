INCLUDEDIRS += -I../../include


CC             = gcc
CFLAGS     = -Wall -g $(INCLUDEDIRS)
ELF         = ../../bin/ebook   #相对于可执行文件

SOURCE = $(wildcard *.c)
OBJS   :=$(patsubst %.c,%.o,$(SOURCE))
OBJS := $(addprefix ../../bin/,$(OBJS))


all:.depend $(OBJS)

#add.o: add.c ../../include/add.h
#div.o: div.c ../../include/add.h

#########################################################################

.depend:    Makefile $(SOURCE)
	$(CC) -MM $(CFLAGS) $(SOURCE) > $@.tmp; \
	sed 's,\(.*\.o:.*\),../../bin/\1,g' < $@.tmp > $@; \
	sed 's,\(.*\.o:.*\),../bin/\1,g' < $@.tmp > $@1; \
	rm $@.tmp

#########################################################################

sinclude .depend

../../bin/%.o:%.c
	gcc -Wall $(INCLUDEDIRS) -g -c -o $@ $<
	
clean:
	rm -f *.o .depend
	rm -f $(ELF)
