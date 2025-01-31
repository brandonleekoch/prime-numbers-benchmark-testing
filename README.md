# Prime Number Benchmark

This repository contains programs that generate the first 100 prime numbers in three different languages:
- **C** (`prime_Numbers.c`)
- **Python** (`main.py`)
- **Node.js** (`Prime_Numbers.js`)

## 🏎️ Performance Comparison
| Language  | Expected Speed | Notes |
|-----------|---------------|--------|
| **C**     | Fastest 🚀   | Compiled, optimized execution |
| **Node.js** | Moderate ⚡  | JIT-compiled, event-driven |
| **Python**  | Slowest 🐢   | Interpreted, function call overhead |

## 📜 How to Run

### **C**
```sh
gcc -O3 prime_Numbers.c -o prime_Numbers -lm
./prime_Numbers

### **Python**
python3 main.py

### **Node.js**
node Prime_Numbers.js
>>>>>>> 65c7c7c (Inital commit: added prime number programs in C, Python and Node.js)
