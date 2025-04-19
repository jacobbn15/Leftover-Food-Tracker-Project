CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = LeftOverRecord.cc LeftoverReport.cc LeftOverTracker.cpp
OBJ = $(SRC:.cpp=.o)
OBJ := $(OBJ:.cc=.o)
EXEC = leftover_tracker

# Rule for building everything
all: build

# Rule for building the executable
build: $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Rule for creating object files from cc/cpp files
%.o: %.cc
	$(CXX) $(CXXFLAGS) -c $< -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and executable
clean:
	rm -f *.o $(EXEC)