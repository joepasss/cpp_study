### HOW TO START PROJECT

```
$./configure.sh
$./run.sh

// if no edit on CMakeLists.txt or cmake related files do this
$./run.sh
```

&nbsp;

#### LITERALS

---

1. what is "literal"?

   - literal is data that is directly represented in code without going through some other variable stored in memory

2. what is different to regular variables and literal variables

   - if i create some variable it called "A" it located somewhere in memory, so compiler should find that varaible. literals has no memory location.

   ```
   int a {10};   // variable
   int b {10};   // variable
   int c;        // literal -> stored directly in binary code

   c = a + b;
   ```
