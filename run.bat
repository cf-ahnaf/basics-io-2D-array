@echo off
setlocal

:: Check if the filename is provided
if "%~1"=="" (
    echo Usage: run.bat filename.cpp
    exit /b 1
)

:: Extract filename without extension
set "filename=%~n1"

:: Compile the C++ file
g++ -std=c++17 -O2 -Wall -Wextra "%~1" -o "%filename%.exe"
if %errorlevel% neq 0 (
    echo Compilation failed.
    exit /b 1
)

:: Run the compiled executable with input redirection
if exist in.txt (
    "%filename%.exe" < in.txt > out.txt
) else (
    "%filename%.exe"
)

endlocal