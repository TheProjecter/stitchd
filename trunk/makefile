TARGET = Stitchd
OBJS = main.o

INCDIR = 
CFLAGS = -G4 -Wall -O2
CXXFLAGS = $(CFLAGS) -fno-exceptions -fno-rtti
ASFLAGS = $(CFLAGS)

LIBDIR =
LDFLAGS =
STDLIBS= -lstdc++ -losl -lpng -lz \
		-lpsphprm -lpspsdk -lpspctrl -lpspumd -lpsprtc -lpsppower \
		-lpspgu -lpspaudiolib -lpspaudio -lm -ljpeg
LIBS=$(STDLIBS)$(YOURLIBS)


EXTRA_TARGETS = EBOOT.PBP
PSP_EBOOT_TITLE = Stitchd
PSP_EBOOT_ICON = eboot/ICON0.png
PSP_EBOOT_PIC1 = eboot/PIC1.png
PSP_EBOOT_SND0 = eboot/SND0.AT3

PSPSDK=$(shell psp-config --pspsdk-path)
include $(PSPSDK)/lib/build.mak
