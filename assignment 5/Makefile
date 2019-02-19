cc=g++
ccFLAGS=-Wall
assign5: assign5.o String.o 


	$(cc) $(ccFLAGS) -o assign5 assign5.o String.o

#used to generate object file of assign5.cc

assign5.o: assign5.cc String.h


	$(cc) $(ccFLAGS) -c -std=c++11 assign5.cc

String.o: String.cc String.h
	$(cc) $(ccFLAGS) -c -std=c++11 String.cc

#used to generate object file of assign5.cc
clean :
	rm -f *.o assign5



