CC = g++
INCLUDE = -I /usr/incude
OPT = -O0 -g3 -Wall -fmessage-length=0 -shared -fPIC 

TARGET = libLEDDriverFreeBSD.so

SRC = DriverFactoryFreeBSD.cpp LEDDriverFreeBSD.cpp

all: $(SRC)
	$(CC) $(INCLUDE) $(OPT) -o $(TARGET) $(SRC)

clean:
	$(RM) *.o $(TARGET) gmon.out *.gc* *.xml *.exe
