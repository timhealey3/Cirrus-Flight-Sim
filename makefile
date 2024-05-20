# Compiler
CC = g++

# Compiler flags
CFLAGS = -std=c++11 -Wall

# Source files
SOURCES = Cirrus.cpp main.cpp Weather.cpp Lift.cpp

# Object files
OBJECTS = $(SOURCES:.cpp=.o)

# Executable name
EXECUTABLE = plane

# Build target
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $(EXECUTABLE)

# Rule for .cpp files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
