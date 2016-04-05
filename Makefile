CXX	=g++
LIBS	=-lgmp -std=c++0x
CFLAGS	=-O4 -Wall

OBJS=test1.o Integer.o

default:
	make test1

test1: $(OBJS)
	$(CXX) $(CFALGS) -o test1 $(OBJS) $(LIBS)

clean:
	rm -f *.o test1 $(OBJS)
