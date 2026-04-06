cmake_minimum_required(VERSION 3.20)
project(PC1_BestStock)

# Esto crea la librería con tu lógica (lo que el profesor llama sem1_algorithms)
add_library(pc1_logic STATIC
    "src/solution.cpp"
)

# Define dónde están tus headers (.hpp)
target_include_directories(pc1_logic PUBLIC
    "${CMAKE_CURRENT_SOURCE_DIR}/include"
    "${CMAKE_CURRENT_SOURCE_DIR}/src"
)

# Crea el ejecutable principal
add_executable(main_app "src/main.cpp")

# Une el main con la lógica (el estilo que él usa)
target_link_libraries(main_app PRIVATE pc1_logic)

# Crea el ejecutable de benchmark
add_executable(benchmark "bench/benchmark.cpp")
target_link_libraries(benchmark PRIVATE pc1_logic)