# C++20 Features Summary

## 🔑 Major Features

### 1. Core Language Features

-   **Concepts**

    ``` cpp
    template <std::integral T>
    T add(T a, T b) { return a + b; }
    ```

-   **Modules**

    ``` cpp
    export module math;
    export int add(int a, int b) { return a + b; }
    ```

-   **Coroutines**

    ``` cpp
    task<int> foo() {
        co_return 42;
    }
    ```

-   **Ranges**

    ``` cpp
    auto v = std::views::iota(1, 10)
           | std::views::filter([](int x){ return x % 2 == 0; });
    ```

-   **Three-way Comparison Operator (`<=>`)**

    ``` cpp
    auto result = (a <=> b);
    ```

-   **Designated Initializers**

    ``` cpp
    struct Point { int x; int y; };
    Point p{ .x = 1, .y = 2 };
    ```

-   **Constexpr Enhancements** (dynamic allocation, try/catch allowed)

-   **Immediate Functions (`consteval`)**

    ``` cpp
    consteval int square(int n) { return n * n; }
    ```

-   **`constinit`** -- ensures variable is initialized at compile-time.

------------------------------------------------------------------------

### 2. Library Features

-   **Concepts in the STL** (`std::integral`, `std::floating_point`)

-   **Ranges Library** (`std::views::filter`, `std::views::transform`)

-   **Calendar & Time Zone Library** in `<chrono>`

-   **`std::span`** -- view over contiguous sequence

-   **`std::bit_cast`** -- safe type punning

-   **`std::format`**

    ``` cpp
    std::format("Hello {}!", "World");
    ```

-   **`std::source_location`** -- debugging info (file, line, func)

-   **`std::jthread`** -- joins automatically on destruction

-   **`std::atomic_ref`** -- atomic operations on existing objects

-   **`std::unordered_map::contains`** and similar helpers

------------------------------------------------------------------------

### 3. Other Notable Features

-   **Lambda improvements**

    ``` cpp
    auto f = []<typename T>(T x) { return x + x; };
    ```

-   **Expanded structured bindings**

-   **New attributes**

    -   `[[likely]]`, `[[unlikely]]` (branch prediction hints)
    -   `[[no_unique_address]]` (optimize memory layout)

------------------------------------------------------------------------

✅ **In short:**\
C++20 delivered **Concepts + Ranges + Coroutines + Modules** as the *big
four*, plus many small improvements that make C++ cleaner, safer, and
easier to use.
