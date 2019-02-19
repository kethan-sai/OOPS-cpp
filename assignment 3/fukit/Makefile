cc=g++
ccFLAGS=-Wall -Werror
assign3: prog1.o prog2.o


	$(cc) $(ccFLAGS) -o assign3 prog1.o prog2.o

#used to generate object file of Class.cc

prog2.o: prog2.cpp Class1.h Class2.h Class3.h Class4.h


	$(cc) $(ccFLAGS) -c prog2.cpp

#used to generate object file of assign5.cc

prog1.o: prog1.cpp Class1.h Class2.h Class3.h Class4.h

