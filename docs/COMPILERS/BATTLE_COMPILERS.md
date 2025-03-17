### [Return At Main Page](../README.md)

### Compilers C++
* `gcc` asta și este `G++` sau ele sunt diferite ?
* Clang posibil ca este mai crutoi ka gcc. nu sunt sigur dar trebuie sa ferific: {
	Для программистов Clang дает лучший контроль ошибок, оптимизации и unpredictable behavior. -fdebug-macro, -fsanitize=address, -fsanitize=memory, -fsanitize=undefined, -fsanitize=thread, -fsanitize=cfi, -fstack-protector, -fstack-protector-strong, -fstack-protector-all, -Rpass=inline, -Rpass=unroll, -Rpass=loop-vectorize, -Rpass-missed=loop-vectorize, -Rpass-analysis=loop-vectorize и т.д.
}
* LLVM - la fel e crutoi
* MinGw

### Battle Clang Vs GCC. Or. Clang vs GCC (GNU Compiler Collection)
**Pro's of GCC vs clang:**
* GCC supports languages that clang does not aim to, such as Java, Ada, FORTRAN, etc.
* GCC front-ends are very mature and already support C++. clang's support for C++ is nowhere near what GCC supports.
* GCC supports more targets than LLVM.
* GCC is popular and widely adopted.
* GCC does not require a C++ compiler to build it.

**Pro's of clang vs GCC:**
* The Clang ASTs and design are intended to be easily understandable by anyone who is familiar with the languages involved and who has a basic understanding of how a compiler works. GCC has a very old codebase which presents a steep learning curve to new developers.
* Clang is designed as an API from its inception, allowing it to be reused by source analysis tools, refactoring, IDEs (etc) as well as for code generation. GCC is built as a monolithic static compiler, which makes it extremely difficult to use as an API and integrate into other tools. Further, its historic design and current policy makes it difficult to decouple the front-end from the rest of the compiler.
* Various GCC design decisions make it very difficult to reuse: its build system is difficult to modify, you can't link multiple targets into one binary, you can't link multiple front-ends into one binary, it uses a custom garbage collector, uses global variables extensively, is not reentrant or multi-threadable, etc. Clang has none of these problems.
* For every token, clang tracks information about where it was written and where it was ultimately expanded into if it was involved in a macro. GCC does not track information about macro instantiations when parsing source code. This makes it very difficult for source rewriting tools (e.g. for refactoring) to work in the presence of (even simple) macros.
* Clang does not implicitly simplify code as it parses it like GCC does. Doing so causes many problems for source analysis tools: as one simple example, if you write "x-x" in your source code, the GCC AST will contain "0", with no mention of 'x'. This is extremely bad for a refactoring tool that wants to rename 'x'.
* Clang can serialize its AST out to disk and read it back into another program, which is useful for whole program analysis. GCC does not have this. GCC's PCH mechanism (which is just a dump of the compiler memory image) is related, but is architecturally only able to read the dump back into the exact same executable as the one that produced it (it is not a structured format).
* Clang is much faster and uses far less memory than GCC.
* Clang aims to provide extremely clear and concise diagnostics (error and warning messages), and includes support for expressive diagnostics. GCC's warnings are sometimes acceptable, but are often confusing and it does not support expressive diagnostics. Clang also preserves typedefs in diagnostics consistently, showing macro expansions and many other features.
* GCC is licensed under the GPL license. clang uses a BSD license, which allows it to be used by projects that do not themselves want to be GPL.
* Clang inherits a number of features from its use of LLVM as a backend, including support for a bytecode representation for intermediate code, pluggable optimizers, link-time optimization support, Just-In-Time compilation, ability to link in multiple code generators, etc.

### Exten Links :
* [Wiki : List Compilers](https://en.wikipedia.org/wiki/List_of_compilers)
* Link 2
* Link 3
