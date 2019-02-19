cc=g++
ccFLAGS=-Wall
assign3: Prog1.o Class.o


	$(cc) $(ccFLAGS) -o assign3 Prog1.o Class.o

#used to generate object file of Class.cc

Class.o: Class.cc Class.h


	$(cc) $(ccFLAGS) -c -std=c++11 Class.cc

#used to generate object file of assign5.cc

Prog1.o: Prog1.cc Class.h

