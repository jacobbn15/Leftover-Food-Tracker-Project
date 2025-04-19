CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra

SRC = main.cpp leftover_tracker_backend.cc LeftoverRecord.cpp LeftoverTracker.cpp LeftoverReport.cpp
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

# Test rules
test_add_record: build
	./tests/test_add_record

test_get_records: build
	./tests/test_get_records

# Clean rule to remove object files and executable
clean:
	rm -f *.o $(EXEC) tests/*.o
