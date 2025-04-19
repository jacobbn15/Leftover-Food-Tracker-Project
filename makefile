CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = LeftOverRecord.cpp LeftOverReport.cpp LeftOverTracker.cpp
OBJ = $(SRC:.cpp=.o)
EXEC = leftover_tracker

# Rule for building everything
all: build

# Rule for building the executable
build: $(OBJ)
	$(CXX) $(OBJ) -o $(EXEC)

# Rule for creating object files from cpp files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean rule to remove object files and executable
clean:
	rm -f *.o $(EXEC)
