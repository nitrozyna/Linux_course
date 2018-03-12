#CC represents the compiler
CC=gcc
# compiler flags: -std=gnu99 used  for the for loop with index defined inside
#the loop, -g to enable debugging
CCFLAGS=-std=gnu99 -g -lm

# creating result files given the library and the ex 2 file
draw:	lab05_ex2.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@

polygon: lab05_ex2.o libturtle.a
	$(lab05_ex2.oCC) $(CCFLAGS) libturtle.a $^ -o $@

square:	lab05_ex2.o libturtle.a
	$(CC) $(CCFLAGS) libturtle.a $^ -o $@

#any file ending in ‘.o’ depends upon a similarly-named ‘.c’ file
#create '.o' files
lab05_ex2.o: lab05_ex2.c
	$(CC) $(CCFLAGS) -c $^

#this target removes .o files when user types make clean
.PHONY:	clean

clean:
	rm -f *.o
