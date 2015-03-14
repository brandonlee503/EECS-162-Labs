CC = g++
output = tables

#Link the object files together
${CC}: main.o tables.o
	${CC} main.o tables.o -o ${output}

#Compile each source file to an object file
main.o: main.cpp
	${CC} -c main.cpp

tables.o: tables.cpp
	${CC} -c tables.cpp

clean:
	rm -f *.o ${output}