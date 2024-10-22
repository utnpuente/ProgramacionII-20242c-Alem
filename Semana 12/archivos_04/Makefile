# Variables  
OBJS = main.o 
BINARY = ej_make 
 
# Build todo el programa, borrar e iniciar 
all: run clean start 
 
# Compila el programa principal 
run: $(OBJS) 
	@g++ -o $(BINARY) $(OBJS) 
 
main.o: main.cpp 
	@g++ -c main.cpp 
 
# Limpiar los archivos objetos 
clean: 
	@del /s *.o 
 
# Limpiar consola e iniciar .exe 
start: 
	@cls 
	@$(BINARY).exe 
