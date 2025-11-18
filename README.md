# WARP.md

This file provides guidance to WARP (warp.dev) when working with code in this repository.
``

## Overview

This repository contains small C++ exercises (TPs) for an object‑oriented programming course at Centrale Marseille. Each TP directory (e.g. `TP_2`, `TP_4`, `TP_6`) is a self‑contained, simple C++ program illustrating basic OOP concepts.

There is currently **no build system, test framework, or linting configuration** checked into the repo. All commands below assume a standard C++ toolchain is available on the PATH (e.g. `g++`).

## Common commands

### Build and run individual TPs

Each TP directory is independent and typically consists of a header (`.h`) declaring a class, a source file (`.cpp`) implementing it, and a `main.cpp` that exercises the class.

**TP_2** (`point` class):

```bash path=null start=null
g++ -std=c++11 -Wall -Wextra TP_2/Point.cpp TP_2/main.cpp -o tp2
./tp2   # on Windows PowerShell: .\tp2.exe
```

**TP_4** (`date` class):

```bash path=null start=null
g++ -std=c++11 -Wall -Wextra TP_4/Date.cpp TP_4/main.cpp -o tp4
./tp4   # on Windows PowerShell: .\tp4.exe
```

**TP_6** (`personne` class):

```bash path=null start=null
g++ -std=c++11 -Wall -Wextra TP_6/personne.cpp TP_6/main.cpp -o tp6
./tp6   # on Windows PowerShell: .\tp6.exe
```

> Note: some `main.cpp` files currently `#include` the corresponding `.cpp` implementation file. When compiling with the commands above, this double‑inclusion can lead to duplicate symbol errors. If that happens, either:
> * remove the `#include "*.cpp"` line from `main.cpp`, or
> * compile only `main.cpp` (relying on the `#include` of the `.cpp` file inside it).

Example of compiling only `main.cpp` for TP_4:

```bash path=null start=null
g++ -std=c++11 -Wall -Wextra TP_4/main.cpp -o tp4
```

### Linting / static analysis

There is no repository‑configured linter. If `cppcheck` or `clang-tidy` is installed locally, you can run ad‑hoc checks such as:

```bash path=null start=null
cppcheck --enable=all TP_2 TP_4 TP_6
```

### Tests

There is **no automated test suite** or test framework configured in this repository. To "test" changes, compile and run the specific TP executable(s) that exercise the code you modified, as shown above.

## Project structure and architecture

### Top‑level layout

- `README.md`: minimal description of the repository (C++ OOP TPs for S7 at Centrale Marseille).
- `TP_2/`, `TP_4/`, `TP_6/`: independent, small C++ programs focusing on different classes and OOP concepts.

Future TPs are expected to follow the same pattern: one directory per TP with a small set of `.h`/`.cpp` files plus a `main.cpp` entry point.

### Per‑TP patterns

Each TP directory currently follows a similar structural pattern:

- **Domain class header (`.h`)**
  - Declares a single class (`point`, `date`, `personne`).
  - Exposes constructors, simple getters and setters, and a few domain‑specific methods.
  - Uses include guards (`#ifndef` / `#define` / `#endif`).

- **Domain class implementation (`.cpp`)**
  - Includes its corresponding header.
  - Defines constructors and member functions declared in the header.
  - Uses very simple logic (assigning member fields, basic validation, printing to `std::cout`).

- **`main.cpp` entry point**
  - Includes the header and (currently) also the `.cpp` implementation file.
  - Instantiates the domain class with hard‑coded values.
  - Calls a small set of methods (e.g. `affiche()`, getters) and writes output to the console.

This means each TP is effectively a tiny standalone program demonstrating a single class and its behavior rather than a shared library or multi‑module application.

### Object model snapshot

- **TP_2 – `point`**
  - Class `point` with integer coordinates `x`, `y`, `z`.
  - Simple constructor from three ints and standard getters/setters.
  - `main.cpp` constructs a `point` and prints its coordinates via getters.

- **TP_4 – `date`**
  - Class `date` with fields `jour`, `mois`, `annee`.
  - Default constructor initializes to `1/1/2000`.
  - Methods for basic validation (`Bool_checkDate`) and formatted printing via `affiche()`.
  - `main.cpp` constructs a `date`, sets the year, and prints it.

- **TP_6 – `personne`**
  - Class `personne` representing a person with `nom`, `prenom`, `adresse`, and `tel`.
  - Constructor initializes `nom` and `prenom`, with `adresse` and `tel` defaulting to empty strings.
  - `affiche()` prints a simple textual representation.
  - Getters provide read access; setters mutate each field.

### How to extend or add new TPs

When adding a new TP directory, follow the existing pattern:

1. Create a new folder, e.g. `TP_7/`.
2. Define a new domain class in `TP_7/<ClassName>.h` and its implementation in `TP_7/<ClassName>.cpp`.
3. Create `TP_7/main.cpp` that includes the header (and optionally the `.cpp`, mirroring current style) and exercises the class.
4. Compile and run it using a `g++` command analogous to the ones listed above.

Keeping this consistent structure allows future Warp instances to quickly locate entry points and relevant classes for each exercise.