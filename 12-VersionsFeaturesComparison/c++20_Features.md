# C++20 Features Summary with Explanations

## 🔑 Major Features

### 1. Core Language Features

-   **Concepts** Concepts provide a way to constrain template
    parameters. They allow developers to specify requirements on types,
    such as requiring them to be integral or floating point. This
    improves code readability, provides clearer error messages during
    compilation, and prevents misuse of templates.

    ``` cpp
    template <std::integral T>
    T add(T a, T b) { return a + b; }
    ```

-   **Modules** Modules replace the traditional preprocessor `#include`
    mechanism. They provide better compilation speed, stronger
    encapsulation, and avoid multiple inclusion problems. Modules are a
    step toward a more modern and reliable build system in C++.

    ``` cpp
    export module math;
    export int add(int a, int b) { return a + b; }
    ```

-   **Coroutines** Coroutines enable writing asynchronous code in a
    synchronous style using `co_await`, `co_yield`, and `co_return`.
    They simplify the creation of generators, tasks, and event-driven
    code, making concurrent programming more natural.

    ``` cpp
    task<int> foo() {
        co_return 42;
    }
    ```

-   **Ranges** The ranges library introduces composable views and
    actions on sequences. It allows functional-style operations like
    filtering, transforming, and lazy evaluation on containers, enabling
    expressive and concise code.

    ``` cpp
    auto v = std::views::iota(1, 10)
           | std::views::filter([](int x){ return x % 2 == 0; });
    ```

-   **Three-way Comparison Operator (`<=>`)** The spaceship operator
    provides a unified way to implement comparisons. It can
    automatically generate `==`, `<`, `>`, `<=`, and `>=` from one
    definition, reducing boilerplate code and ensuring consistency.

    ``` cpp
    auto result = (a <=> b);
    ```

-   **Designated Initializers** These allow initializing specific struct
    members by name, making code more readable and less error-prone.
    They also improve maintainability when struct layouts change.

    ``` cpp
    struct Point { int x; int y; };
    Point p{ .x = 1, .y = 2 };
    ```

-   **Constexpr Enhancements** C++20 greatly expands what can be done in
    `constexpr`, such as dynamic allocation and exception handling. This
    allows more computations to be performed at compile-time, improving
    runtime efficiency.

-   **Immediate Functions (`consteval`)** Functions marked `consteval`
    are guaranteed to execute at compile time. They ensure correctness
    when runtime evaluation could lead to undefined or unwanted
    behavior.

    ``` cpp
    consteval int square(int n) { return n * n; }
    ```

-   **`constinit`** This keyword ensures that a variable is initialized
    at compile-time. It prevents issues related to the "static
    initialization order fiasco" and guarantees deterministic
    initialization.

------------------------------------------------------------------------

### 2. Library Features

-   **Concepts in the STL** The standard library integrates concepts
    like `std::integral` and `std::floating_point`, enabling constraints
    directly on library templates. This improves usability and enforces
    correctness in generic programming.

-   **Ranges Library** Provides a powerful and modern approach to
    working with sequences. Instead of writing manual loops, developers
    can use pipelines for clear, concise, and safer code transformations
    and queries.

-   **Calendar & Time Zone Library** Extends `<chrono>` with calendars,
    dates, and time zones. This makes handling time much more practical
    and precise, reducing reliance on third-party libraries.

-   **`std::span`** A lightweight, non-owning view of a contiguous
    sequence of elements. It simplifies APIs by passing arrays without
    needing pointer and size pairs, increasing safety and clarity.

-   **`std::bit_cast`** Allows type-punning safely at compile time with
    well-defined behavior, unlike traditional reinterpret_cast. It's
    crucial for low-level programming and serialization.

-   **`std::format`** Provides Python-like formatting of strings with
    compile-time checks. It's safer and more flexible than `printf` or
    `std::stringstream`.

    ``` cpp
    std::format("Hello {}!", "World");
    ```

-   **`std::source_location`** Offers compile-time information about the
    current source location (file, line, function). It is particularly
    useful for logging and debugging.

-   **`std::jthread`** A joining thread that automatically joins on
    destruction. This eliminates common threading errors such as
    forgetting to join or detach a thread.

-   **`std::atomic_ref`** Enables atomic operations on existing objects
    without requiring them to be `std::atomic`. It's helpful for
    retrofitting atomic semantics into existing code.

-   **`std::unordered_map::contains`** Provides a convenient way to
    check for key existence without redundant `find` comparisons, making
    code cleaner and faster to read.

------------------------------------------------------------------------

### 3. Other Notable Features

-   **Lambda Improvements** Lambdas now support template parameters
    directly. This makes them even more powerful, letting developers
    write generic inline functions more easily.

    ``` cpp
    auto f = []<typename T>(T x) { return x + x; };
    ```

-   **Expanded Structured Bindings** Structured bindings can now be used
    in more contexts, such as within `constexpr` and class members,
    giving more expressive decomposition of objects.

-   **New Attributes**

    -   `[[likely]]` and `[[unlikely]]` allow developers to give branch
        prediction hints to the compiler, improving performance in
        critical paths.\
    -   `[[no_unique_address]]` lets compilers optimize empty base
        classes to reduce memory overhead.

------------------------------------------------------------------------

✅ **In short:**\
C++20 delivered **Concepts + Ranges + Coroutines + Modules** as the *big
four*, plus many enhancements across compile-time programming,
libraries, and usability. These features make C++ safer, faster, and
more expressive for modern software development.
