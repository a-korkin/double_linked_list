all: build run
build: 
	mkdir -p target
	gcc src/*.c -Wall -o target/main
run: 
	target/main

