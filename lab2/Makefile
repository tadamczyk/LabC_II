sources = zad0.c zad1.c zad2.c zad3.c

programs = $(basename $(sources))

CFLAGS = -Wall -std=c11
LDLIBS = -lm

.PHONY : clean
clean :
	-$(RM) $(objects) $(programs) *~

all : $(programs)
