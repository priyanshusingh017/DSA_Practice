# DSA Practice (C++)

This repository contains my practice solutions and notes for Data Structures & Algorithms using C++. It includes problems from Codeforces, LeetCode, GFG, Striver’s DSA Sheet, and topic-wise implementations (arrays, sorting, searching, recursion, and more).

## Repository Layout

- **codeforces/**: Contest/problem solutions.
- **Dsa_quest/**: Practice sets and topic-focused questions.
	- **Array1/**, **Array 2/**: Array problems and patterns.
- **DSA_Sheet/**: Striver/curated sheets by topic (arrays, subarrays, intervals, sorting, etc.).
- **GFG/** and **GFG_160/**: GeeksforGeeks practice and curated sets.
- **Leetcode 75/**: LeetCode 75 problems and related practice.
- **Practice_Set/**: Additional problem sets (set1, set2).
- **striver/**: Striver sheet solutions organized by topic.
- **Learn the basics/**, **Recursion/**, **Search Algorithm/**, **Sorting Algorithm/**: Foundational implementations and algorithms.

Folder and file names may include spaces. When compiling/running from the terminal, wrap paths in quotes.

## Prerequisites

- Windows with MSYS2 (UCRT64) or another C++ toolchain.
- VS Code with the Microsoft C/C++ extension.
- A `g++` compiler (MSYS2 path typically: `C:\msys64\ucrt64\bin\g++.exe`).

## Build & Run (VS Code Task)

This workspace includes a VS Code task: “C/C++: g++.exe build active file”. It compiles the currently open `.cpp` file and places the `.exe` alongside the source.

Steps:
1. Open the desired `.cpp` file.
2. Run: Terminal → Run Task → “C/C++: g++.exe build active file”.
3. Execute the generated `.exe` from the same folder.

Notes:
- The task uses debug info (`-g`) and colored diagnostics. If you need C++17 or optimizations, prefer manual compile commands below or customize the task to add `-std=c++17 -O2`.

## Build & Run (PowerShell)

Example: compile and run a Codeforces solution. Adjust paths as needed.

```powershell
"C:\msys64\ucrt64\bin\g++.exe" -std=c++17 -O2 -g "codeforces\Pathless.cpp" -o "codeforces\Pathless.exe"
.\codeforces\Pathless.exe
```

Run with input/output redirection (common for competitive programming):

```powershell
.\codeforces\Pathless.exe < input.txt > output.txt
```

If `g++` is on your PATH, you can simply run:

```powershell
g++ -std=c++17 -O2 -g "codeforces\Pathless.cpp" -o "codeforces\Pathless.exe"
.\codeforces\Pathless.exe
```

## Conventions

- Use C++17 features where helpful (`-std=c++17`).
- Prefer fast I/O for large inputs (e.g., `ios::sync_with_stdio(false); cin.tie(nullptr);`).
- Keep problem files minimal and focused on the solution.
- Place new problems in the most relevant folder (e.g., arrays in the array folder, contest problems in `codeforces/`).
- When using spaces in file/folder names, quote the path in terminal commands.

## Tips

- For frequent compilation, consider adding `-Wall -Wextra -Wshadow` locally to catch common issues.
- Use input redirection to simulate online judge input quickly.
- Keep example inputs in small `input.txt` files next to solutions for quick testing.

---

Happy coding! Contributions, refinements, and new problems are welcome.

