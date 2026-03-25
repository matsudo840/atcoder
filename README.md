# AtCoder

This repository is for solving problems on AtCoder.

## 🔗 Profile
- [AtCoder: matsudo840](https://atcoder.jp/users/matsudo840)

## 📁 Directory Structure

Collections of problems and learning records:

- `abs/`: [AtCoder Beginners Selection](https://atcoder.jp/contests/abs) (10 introductory problems)
- `apg4b/`: [C++ Introduction Course (APG4B)](https://atcoder.jp/contests/APG4B)
- `tessoku-book/`: [The Essentials of Competitive Programming (Tessoku-book)](https://atcoder.jp/contests/tessoku-book)
- `ac-library/`: [AtCoder Library (ACL)](https://github.com/atcoder/ac-library) *Excluded from Git tracking
- `templates/`: Code templates (`main.cpp`, `main.py`)
- `practice/`: Miscellaneous practice code
- Other directories are created per contest.

## 🛠️ My Development Environment & Setup

Steps to reproduce or reference this environment in other setups.

### 1. Tool Configuration
- **Languages**: C++23 (GCC), Python 3.11+ (uv)
- **Libraries**: [ac-library (C++)](https://github.com/atcoder/ac-library), [ac-library-python](https://github.com/not522/ac-library-python)
- **CLI Tools**: `atcoder-cli (acc)` + `online-judge-tools (oj)`

### 2. Library Setup (Important)
Since `ac-library` is excluded via `.gitignore`, you need to clone or download it manually.

```bash
# Execute at the project root
git clone https://github.com/atcoder/ac-library.git
```

### 3. Setup (Using Docker)
Using Docker allows you to quickly start an environment with all compilers and CLI tools ready.

```bash
# Build & Run
docker-compose build
docker-compose run atcoder bash
```

### 4. Setup (Local)
For running directly on macOS or similar environments:
1. `brew install gcc node uv`
2. `npm install -g atcoder-cli`
3. `uv pip install online-judge-tools`
4. Check `acc` configuration referring to `atcoder-cli-nodejs/config.json`.


## 📖 Usage (Workflow)

Basic flow when starting a new problem:

1. **Fetch Problems**
   ```bash
   # Example: Create directory for abc300
   acc new abc300
   cd abc300/a
   ```

2. **Write Solution**
   Edit `main.cpp` or `main.py`. Templates are located in `templates/`.

3. **Test & Submit**
   ```bash
   acc test    # Run sample tests
   acc submit  # Submit solution. If submission fails due to AtCoder's restrictions, submit via the web GUI.
   ```

## 💡 Notes
- C++ templates are configured to include `ac-library` via relative paths (`../../ac-library`).
- The Python environment is managed with `uv`, and `ac-library-python` is already installed.
