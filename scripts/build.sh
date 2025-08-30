#!/bin/bash

# Build script for Coding Interviews C++
# Usage: ./scripts/build.sh

set -e  # Exit on any error

echo "🔨 Building Coding Interviews C++ project..."

# Create build directory if it doesn't exist
if [ ! -d "build" ]; then
    mkdir build
fi

# Navigate to build directory and build
cd build
cmake ..
make

echo "✅ Build completed successfully!"
echo ""
echo "Available executables:"
find . -name "*test" -type f | grep -v "googletest" | sed 's|^\./||'
