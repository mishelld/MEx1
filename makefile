
CC = gcc
AR = ar
OBJECTS_LOOP = basicClassification.o advancedClassificationLoop.o
OBJECTS_RECU = basicClassification.o advancedClassificationRecursion.o
FLAGS= -Wall -g

loops: libclassloops.a
libclassloops.a: $(OBJECTS_LOOP)
	$(AR) -rcs libclassloops.a $(OBJECTS_LOOP)
loops: libclassloops.a	
libclassloops.so: $(OBJECTS_LOOP)
	$(CC) -shared -o libclassloops.so $(OBJECTS_LOOP) -lm 	
recursives:libclassrec.a	
libclassrec.a: $(OBJECTS_RECU)
	$(AR) -rcs libclassrec.a $(OBJECTS_RECU)
recursived:libclassrec.so	
libclassrec.so: $(OBJECTS_RECU)
	$(CC) -shared -o libclassrec.so $(OBJECTS_RECU) -lm
mains: main.o libclassrec.a
	$(CC) $(FLAGS)  -o mains main.o libclassrec.a -lm
maindloop: main.o libclassloops.so
	$(CC) $(FLAGS)  -o maindloop main.o ./libclassloops.so -lm
maindrec: main.o libclassrec.so 
	$(CC) $(FLAGS)  -o maindrec main.o ./libclassrec.so -lm	
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
all: libclassloops.a libclassrec.a libclassloops.so libclassrec.so mains maindloop maindrec	
clean:
	rm -f *.o *.a *.so maindloop maindrec mains
.PHONY: all loops loopd recursives recursived clean	