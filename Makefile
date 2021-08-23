CXXFLAGS	:= -pedantic-errors -Wall -Weffc++ -Wextra -Wsign-conversion -std=c++20 
SRC			:= $(wildcard src/*.cpp)
OBJS 		:= $(patsubst %.cpp,%.o,$(wildcard src/*.cpp))
CPPFLAGS	:= $(shell wx-config-gtk3 --cxxflags --libs) -Iincl

TARGET_NAME	:= Calculator

$(TARGET_NAME): $(OBJS)
	$(CXX) $(OBJS) -o $@

%.o: %.c

clean:
	rm src/*.o $(TARGET_NAME)
