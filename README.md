# transight
Simple CLI C++ application that parses GTFS data, stores in DB and performs various analysis.

### Steps
1. Detect build profile
```conan profile detect --force```

2. Install dependencies
```conan install . --output-folder=build --build=missing```

3. Configure the project
```cd build
cmake .. -DCMAKE_TOOLCHAIN_FILE=conan_toolchain.cmake -DCMAKE_BUILD_TYPE=Release -DCMAKE_PREFIX_PATH=build
```

4. Build the executable
```cmake --build .```