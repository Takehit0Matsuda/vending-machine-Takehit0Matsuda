vending_machine: main.o Dispenser.o Register.o
	g++ main.o Dispenser.o Register.o -o vending_machine
	
main.o: main.cpp Dispenser.cpp Register.cpp
	g++ main.cpp -c
	
Dispenser.o: Dispenser.cpp Dispenser.h
	g++ Dispenser.cpp -c
	
Register.o: Register.cpp Register.h
	g++ Register.cpp -c