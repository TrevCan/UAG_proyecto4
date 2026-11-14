.PHONY = run

run: main
	./main

main: src/main.c 
	gcc -o main -lm -lncurses -lpanel -lmenu -lform $^
