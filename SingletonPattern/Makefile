SOURCES := $(wildcard *.cpp)
OBJECTS := $(SOURCES:.cpp=.o)

APP := Final.out

.PHONY : all clean distclean

all : $(APP)

$(APP) : $(OBJECTS)
	$(CC) $(CCFLAGS) $(LDFLAGS) $^ -o $@

%.o : %.cpp
	$(CC) $(CCFLAGS) $(LDFLAGS) -c $< -o $@

clean distclean :
	rm -rf *.o
	rm -rf *.out