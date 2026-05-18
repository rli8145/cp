Competitive programming practice

- `codeforces/` - miscellaneous Codeforces contests and problems
- `leetcode/` - miscellaneous LeetCode problems

`.vscode` configs

- **tasks.json** - two build tasks for the active file:
  - `build` (`Cmd+Shift+B`): optimized (`-O2`)
  - `build (debug)`: debug symbols + STL bounds checking (`-O0 -g -D_GLIBCXX_DEBUG`)
  - Output goes to `build/` in the same directory as the source file
- **settings.json** - autocomplete off; `Tab` expands snippets
- **c_cpp_properties.json** - IntelliSense set to C++20
- **cpp.json** - workspace snippets; `!cp` + `Tab` inserts the C++ template
