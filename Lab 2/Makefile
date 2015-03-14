CC = g++
OUTPUT = hello

OBJECTS = hello.o

#Link the object files together
${OUTPUT} : $(OBJECTS)
	$(CC) $(OBJECTS) -o ${OUTPUT}

#Compile each source file to an object file
%.o : %.cpp
	$(CC) -c $<

#Clean all the things!
clean:
	rm -f *.o ${OUTPUT}