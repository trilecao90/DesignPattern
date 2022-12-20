SOURCES := $(wildcard *.cpp)
OBJECTS := $(SOURCES:.cpp=.o)

APP := Final.out

.PHONY : all clean

all : $(APP)

$(APP) : $(OBJECTS)
	$(CC) $(CCFLAGS) $(LDFLAGS) $^ -o $@

%.o : %.cpp
	$(CC) $(CCFLAGS) $(LDFLAGS) -c $< -o $@

clean :
	rm -rf *.o
	rm -rf *.out