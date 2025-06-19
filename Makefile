CXXFLAGS := -Wall -std=c++11

# Target executables
HELLO_WORLD_BIN := hello_world.out
POINTERS_BIN := pointers.out

# Source files
HELLO_WORLD_SRC := hello_world.cpp
POINTERS_SRC := pointers.cpp

# Default target
all: $(HELLO_WORLD_BIN) $(POINTERS_BIN)

# Build hello_world binary
$(HELLO_WORLD_BIN): $(HELLO_WORLD_SRC)
    $(CXX) $(CXXFLAGS) -g -o $(HELLO_WORLD_BIN) $(HELLO_WORLD_SRC)

# Build pointers binary
$(POINTERS_BIN): $(POINTERS_SRC)
    $(CXX) $(CXXFLAGS) -g -o $(POINTERS_BIN) $(POINTERS_SRC)