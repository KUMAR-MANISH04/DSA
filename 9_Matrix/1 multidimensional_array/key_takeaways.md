# KEY TAKEAWAYS

Choose Your Method Based On:
1. Need Speed + Fixed Size? → Static 2D Array
2. Need Dynamic Rows/Cols + Simplicity? → Vector of Vectors
3. Need Jagged Arrays? → Double Pointer or Vector of Vectors
4. Need Best Performance? → Static 2D Array (contiguous memory)
5. Need Easy Function Passing? → Vector of Vectors or Double Pointer

Memory Layout Impact:
- Static arrays: All in ONE contiguous block (best for CPU cache)
- Pointer methods: Scattered across memory (poor cache locality)
- Vectors: Better organization than raw pointers but still scattered
