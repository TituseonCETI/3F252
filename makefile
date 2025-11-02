run : bin/Espacio
	./bin/Espacio
	
	
bin/Espacio : src/Espacio.cpp include/*.hpp
	@mkdir -p bin
	c++ -Iinclude -o bin/Espacio src/Espacio.cpp -lftxui-component -lftxui-dom -lftxui-screen