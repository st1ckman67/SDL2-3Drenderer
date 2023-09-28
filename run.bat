@echo off
cls

if exist "renderer.exe" (
    del "renderer.exe"
)

gcc -Wall -std=c99 ./src/*.c -mwindows -lmingw32 -lSDL2main -lSDL2 -o renderer.exe

if not errorlevel 1 (
    "renderer.exe"
)
