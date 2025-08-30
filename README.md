# Coding Interviews C++

A structured repository for practicing coding interview problems in C++ with comprehensive unit testing using GoogleTest.

## 🚀 Quick Start

### Prerequisites
- CMake (3.14+)
- C++17 compatible compiler
- Make

### Simple Commands

```bash
# Build the entire project
./scripts/build.sh

# Run all tests
./scripts/test.sh

# Run specific test
./scripts/test.sh two_sum_test
```

### VS Code Integration

**Keyboard Shortcuts:**
- **Cmd+Shift+B** → Build Project (runs `./scripts/build.sh`)
- **Cmd+Shift+P** → `Tasks: Run Test Task` → Run All Tests

**Available Tasks:**
- `Build Project` - Compiles the entire project
- `Run All Tests` - Runs all tests with automatic building
- `Run Two Sum Tests` - Runs only Two Sum tests
- `Run Task` → Select any specific test

**Adding New Test Tasks:**
When you add a new problem, update `.vscode/tasks.json`:
```json
{
    "label": "Run Three Sum Tests",
    "command": "./scripts/test.sh",
    "args": ["three_sum_test"],
    "group": "test"
}
```

## 📁 Project Structure

```
Coding-Interviews-Cpp/
├── scripts/
│   ├── build.sh          # Build automation script
│   └── test.sh           # Test automation script
├── Leetcode/
│   ├── CMakeLists.txt    # Leetcode-specific build config
│   └── 1_two_sum/
│       ├── two_sum.cpp   # Implementation
│       └── two_sum_test.cpp # Unit tests
├── AlgoExpert/           # Future: AlgoExpert problems
├── .vscode/
│   ├── tasks.json        # VS Code task configuration
│   ├── settings.json     # VS Code workspace settings
│   └── c_cpp_properties.json # C++ IntelliSense configuration
└── CMakeLists.txt        # Top-level build configuration
```

## 🧪 Testing

### Running Tests
- **All tests:** `./scripts/test.sh`
- **Specific test:** `./scripts/test.sh two_sum_test`
- **VS Code:** Use Command Palette → `Tasks: Run Test Task`

### Adding New Problems

1. **Create problem directory (following snake_case convention):**
   ```
   Leetcode/15_three_sum/
   ├── three_sum.cpp
   └── three_sum_test.cpp
   ```

2. **Add to Leetcode/CMakeLists.txt:**
   ```cmake
   create_test_executable(three_sum_test
       "15_three_sum/three_sum.cpp"
       "15_three_sum/three_sum_test.cpp"
   )
   ```

3. **Build and test:**
   ```bash
   ./scripts/test.sh three_sum_test
   ```

## 🛠️ Manual Build (if needed)

```bash
mkdir build && cd build
cmake ..
make
cd Leetcode && ./two_sum_test
```

## 🎯 Workflow

1. **Solve a problem** → Write `problem_name.cpp`
2. **Write tests** → Create `problem_name_test.cpp`
3. **Add to CMake** → Update `Leetcode/CMakeLists.txt`
4. **Test** → Run `./scripts/test.sh problem_name_test`
5. **Optional: VS Code integration** → Add task to `.vscode/tasks.json` (see VS Code section above)
6. **Repeat** 🔄


Happy coding! 🚀
