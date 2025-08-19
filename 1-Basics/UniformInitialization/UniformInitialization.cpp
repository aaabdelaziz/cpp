#include <string>

/*
Types of Initialization:
1. Value initialization.   T obj{}; 
2. Direct initialization.  T obj{v};
3. Copy initialization        T obj = v;

Benefits of Uniform Initialization (C++11 and later):
1. It forces initialization
    (Prevents uninitialized variables).
2. Works for arrays
    (You can initialize arrays directly with {}).
3. Prevents narrowing conversions
    int x{2.5}; // ❌ Error (no implicit narrowing)
    int y = 2.5; // ✅ Allowed (but truncates)
4. Uniform syntax for all types
    (Same {} syntax works for built-in types, objects, arrays, and aggregates).
*/
int main()
{

    int a1;         // unintialized 
    int a2 = 0;     // Copy Intialization
    int a3(5);      // Direct Initialization
    std::string s1;
    std::string s2("Hello");

    //uninitialization 
    char str1[4];

    char str2[4] = {'\0'};
    char str3[4] = {'a', 'b', 'c', 'd'}; // Aggregation Initialization
    char str4[4] = {"Hello"};

    int y{}; //Value Initialization
    int y1(); // Most vexing Parse
    int y3{4}; // Direct Initialization
    char e[8]{};
    char e[8]{"Hello"};
    
    int *p1 = new int{};
    int *p2 = new char[5]{};
    int *p3 = new char[5]{"Hello"};
    
    return 0;
}

    