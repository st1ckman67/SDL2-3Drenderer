build:
	gcc -Wall -std=c99 ./src/*.c -mwindows -lmingw32 -lSDL2main -lSDL2 -o renderer.exe

run:
	renderer.exe

clean:
	del renderer.exe
