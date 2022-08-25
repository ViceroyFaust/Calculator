calculator:
	g++ -o calc -Wall -std=c++17 src/app.cpp src/calculator.cpp src/mainFrame.cpp -Iincl `wx-config --cxxflags --libs`