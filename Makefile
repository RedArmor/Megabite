all:
	# Compile the source files into .o files
	g++ -c -o src/main.o         src/main.cpp         -std=c++0x
	g++ -c -o src/engine/light.o src/engine/light.cpp -std=c++0x
	
	# Link the .o files together
	g++ -o megabite src/main.o src/engine/light.o -lglut -lGL -std=c++0x