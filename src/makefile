
# Compiler Information

CPP := g++
CPPFLAGS := -Wall -Wextra -Wpedantic -Werror

PROGRAM := sysinfo

SRCS := $(wildcard *.cpp)
OBJS := $(patsubst %.cpp,%.o,$(wildcard *.cpp))


# Build Instructions
$(PROGRAM): $(OBJS)
	$(CPP) $(CPPFLAGS) -o ../$(PROGRAM) $(OBJS)

$(OBJS): $(SRCS)
	$(CPP) -c $(CPPFLAGS) $(SRCS)

clean:
	rm -rf $(wildcard *.o)

