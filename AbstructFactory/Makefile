CC = g++
INCLUDE = -I /usr/incude
LIB = -L /usr/lib64 -L /usr/local/lib64
OPT = -O0 -g3 -Wall -fmessage-length=0

TARGET = confirmFactory

SRC = main.cpp AbstractFactoryClient.cpp

all: $(SRC)
	$(CC) $(INCLUDE) $(LIB) $(OPT) -o $(TARGET) $(SRC) -lLEDDriver

clean:
	$(RM) *.o $(TARGET) gmon.out *.gc* *.xml *.exe
