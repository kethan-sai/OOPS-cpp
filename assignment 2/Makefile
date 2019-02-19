CC = g++
CCFLAGS = -g -Wall

assign2 : assign2.o function.o
	$(CC) -o assign2 $(CCFLAGS) assign2.o function.o

assign2.o : assign2.cc cal.h
	$(CC) -c $(CCFLAGS) assign2.cc

function.o : function.cc cal.h
	$(CC) -c function.cc

clean : 
	-rm assign2 *.o
