#!/bin/bash

# Test script for Coding Interviews C++
# Usage: ./scripts/test.sh [test_name]

set -e  # Exit on any error

# Build first
echo "🔨 Building project..."
./scripts/build.sh

echo ""
echo "🧪 Running tests..."

cd build

if [ $# -eq 0 ]; then
    # Run all tests using CTest
    echo "Running all tests..."
    ctest --output-on-failure
else
    # Run specific test
    echo "Running test: $1"
    if [ -f "Leetcode/$1" ]; then
        ./Leetcode/$1
    else
        echo "❌ Test executable '$1' not found!"
        echo "Available tests:"
        find . -name "*Test" -type f | sed 's|^\./||'
        exit 1
    fi
fi

echo "✅ Tests completed!"
