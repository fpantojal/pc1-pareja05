### Reporte de Profiling

Procedimiento a seguir para ver el reporte del profiling sobre el benchmark.cpp (comparacion algoritmo eficiente contra fuerza bruta). 

```bass
    g++ -std=c++17 -O2 -pg bench/benchmark.cpp src/solution.cpp -o bench/benchmark.exe -I include/ -I src/
    ./bench/benchmark.exe
    gprof bench/benchmark.exe gmon.out > reports/profiling_report.txt
    code reports/profiling_report.txt

