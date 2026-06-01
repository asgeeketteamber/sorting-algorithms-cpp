# Sorting Algorithms in C++ 🗂️

A hands-on implementation of classic sorting algorithms in C++, built as part of my DSA foundations journey. Each algorithm is implemented from scratch with complexity analysis, and the repo includes an **interactive terminal visualizer** that animates the sorting process in real time.

---

## 📁 Repository Structure

```
sorting-algorithms-cpp/
├── README.md
├── bubble_sort.cpp
├── selection_sort.cpp
├── merge_sort.cpp
├── quick_sort.cpp
└── visualizer/
    └── main.cpp          ← interactive terminal visualizer
```

---

## 🧠 Algorithms Implemented

| Algorithm | Best Case | Average Case | Worst Case | Space | Stable |
|---|---|---|---|---|---|
| Bubble Sort | O(n) | O(n²) | O(n²) | O(1) | ✅ Yes |
| Selection Sort | O(n²) | O(n²) | O(n²) | O(1) | ❌ No |
| Merge Sort | O(n log n) | O(n log n) | O(n log n) | O(n) | ✅ Yes |
| Quick Sort | O(n log n) | O(n log n) | O(n²) | O(log n) | ❌ No |

---

## 🎮 Terminal Visualizer

The highlight of this repo — an interactive C++ program that lets you pick an array size, choose a sorting algorithm, and watch it sort step by step with animated ASCII bars.

```
Enter size of array: 6

[####################        ]48
[########################################]98
[####################        ]51
[############                ]30
[##############################      ]74
[####                        ]12

====SORTING VISUALIZER====
1. Bubble Sort
2. Selection Sort
3. Merge Sort
4. Quick Sort
5. Exit
```

Each swap or merge step clears the screen and redraws the bars, so you can watch values bubble, partition, and merge in real time.

### How to run the visualizer

**Requirements:** MinGW / g++ compiler, Windows terminal (CMD recommended)

```bash
cd visualizer
g++ main.cpp -o visualizer.exe
./visualizer.exe
```

---

## 📌 Key Concepts & Personal Notes

**Bubble Sort**
Simple but inefficient. The early-exit optimisation (stop if no swaps in a pass) is what brings best case down to O(n) for already-sorted arrays. Easiest algorithm to visualise.

**Selection Sort**
Always makes exactly n-1 swaps regardless of input — useful when writes are expensive. Watching it find the minimum each pass is very satisfying in the visualizer.

**Merge Sort**
The recursion clicked once I drew out the split tree on paper. The merge step is the real work — two sorted halves combining into one. Requires extra O(n) space which is the tradeoff for guaranteed O(n log n).

**Quick Sort**
Fast in practice but the worst case (already sorted array with first element as pivot) caught me off guard. Pivot choice matters a lot. Used the Lomuto-style partition with first element as pivot here.

---

## 🛠️ Tech Stack

- Language: C++
- Compiler: g++ (MinGW 6.3.0)
- Libraries: `bits/stdc++.h`, `windows.h` (for Sleep in visualizer)
- IDE: VS Code / Cursor

---

## 🚀 What I Learned

- How to implement divide-and-conquer recursion from scratch (merge sort, quick sort)
- Why stable vs unstable sorting matters
- How pivot selection affects quick sort performance
- Building a real interactive terminal program with animations in C++

---

## 📬 Connect

Made by **Amber Singh** — B.Tech ECE graduate exploring DSA and software development.

[![GitHub](https://img.shields.io/badge/GitHub-black?style=flat&logo=github)](https://github.com/asgeekette)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-blue?style=flat&logo=linkedin)](https://linkedin.com/in/amber-sharma-544748256/)

