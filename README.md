# 🚀 Prime Number Benchmark

[![License: MIT](https://img.shields.io/badge/License-MIT-blue.svg)](https://opensource.org/licenses/MIT)
[![GitHub issues](https://img.shields.io/github/issues/brandonleekoch/prime-numbers-benchmark-testing)](https://github.com/brandonleekoch/prime-numbers-benchmark-testing/issues)
[![GitHub forks](https://img.shields.io/github/forks/brandonleekoch/prime-numbers-benchmark-testing?style=social)](https://github.com/brandonleekoch/prime-numbers-benchmark-testing)

This repository contains programs that generate the first **100 prime numbers** in three different programming languages:

- **🔵 C** (`prime_Numbers.c`)
- **🟡 Python** (`main.py`)
- **🟢 Node.js** (`Prime_Numbers.js`)

---

## 📌 Table of Contents
- [🚀 Prime Number Benchmark](#-prime-number-benchmark)
- [📌 Table of Contents](#-table-of-contents)
- [🏎️ Performance Comparison](#️-performance-comparison)
- [📜 How to Run](#-how-to-run)
- [🛠️ Installation](#️-installation)
- [📊 Benchmark Results](#-benchmark-results)
- [📌 License](#-license)

---

## 🏎️ Performance Comparison

| Language  | Expected Speed | Notes |
|-----------|---------------|--------|
| **C**     | ⚡ Fastest 🚀   | Compiled, optimized execution |
| **Node.js** | 🔥 Moderate ⚡  | JIT-compiled, event-driven |
| **Python**  | 🐢 Slowest    | Interpreted, function call overhead |

---

## 📜 How to Run

### **C**
```sh
gcc -O3 prime_Numbers.c -o prime_Numbers -lm
./prime_Numbers

### **Python**
python3 main.py

### **Node.js**
node prime_Numbers.js
