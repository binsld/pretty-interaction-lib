build: main.cpp pretty-interaction.cpp pretty-interaction.h
	@echo -n -e '\e[33mCompiling...\e[0m'
	@g++ -o run main.cpp pretty-interaction.cpp -lfmt
	@echo -e '\e[2K\e[0G\e[32mRunning\e[0m'  
	@./run   

all:
	build