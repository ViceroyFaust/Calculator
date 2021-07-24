CXXFLAGS	:= -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -std=c++20 
SRC			:= $(wildcard src/*.cpp)
OBJS 		:= $(patsubst %.cpp,%.o,$(wildcard src/*.cpp))
INCL_DIR	:= incl/
LIBS		:= $(pkg-config gtkmm-4.0 --cflags --libs)

TARGET_NAME	:= Calculator

$(TARGET_NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) -I$(INCL_DIR) $(LIBS) $(SRC) -o $@

%.o: %.c

clean:
	rm *.o $(TARGET_NAME)
