flags= -02 Wall -Wextra -pedantic -std=c2x
ldflags=-lbu

.PHONY : clean all

all: clean firewalld
	

firewalld: firewall.o
	cc $(flags) $^ -o $@ $(ldflags)


firewall.o: firewall.c firewall.h
	cc  $(flags) -c $<


clean:
	rm -f *.o firewalld