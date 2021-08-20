CXXFLAGS	:= -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -std=c++20 
SRC			:= $(wildcard src/*.cpp)
OBJS 		:= $(patsubst %.cpp,%.o,$(wildcard src/*.cpp))
CPPFLAGS	:= $(shell pkg-config gtkmm-4.0 --cflags) -Iincl
LDFLAGS		:= $(shell pkg-config gtkmm-4.0 --libs)


TARGET_NAME	:= Calculator

$(TARGET_NAME): $(OBJS)
	$(CXX) $(LDFLAGS) $(OBJS) -o $@

%.o: %.c

clean:
	rm src/*.o $(TARGET_NAME)
