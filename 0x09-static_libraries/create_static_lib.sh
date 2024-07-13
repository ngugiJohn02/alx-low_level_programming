#!/bin/bash

# Compile all .c files into object files
gcc -c *.c

# Create static library liball.a from all object files
ar rcs liball.a *.o

# Clean up: remove temporary object files
rm *.o

echo "Static library liball.a created successfully!"

