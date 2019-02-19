assign7:StringInt.o assign7.o #Creates an executable file from the available object files.
	g++ -o assign7 assign7.o StringInt.o
assign7.o:assign7.cc StringInt.cc #Creates object file
	g++ -c -Wall assign7.cc
StringInt.o:StringInt.cc StringInt.h #Creates object file
	g++ -c -Wall StringInt.cc
clean:  #cleans the object files and executable files.
	rm *.o assign7
