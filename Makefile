all: build run
build: 
	gcc src/*.c -Wall -o target/main
run: 
	target/main

