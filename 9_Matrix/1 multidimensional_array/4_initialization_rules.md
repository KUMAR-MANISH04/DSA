# 4. INITIALIZATION RULES

## Rule 1: Internal Brackets Are Optional
- Valid (with brackets):
```
int arr[3][2] = {{10, 20}, {30, 40}, {50, 60}};
```
- Valid (without brackets):
```
int arr[3][2] = {10, 20, 30, 40, 50, 60};
```
- Best Practice: Use internal brackets + multiple lines for readability

## Rule 2: Omitting First Dimension Only
- For 2D arrays: Can omit first dimension
```
int arr[][2] = {{10, 20}, {30, 40}, {50, 60}};
// Compiler calculates: 3 rows
```
- For 3D arrays: Can only omit first dimension
```
int arr[][2][2] = {{{1,2},{3,4}}, {{5,6},{7,8}}};
```
- Cannot omit any middle or last dimension (compiler error)
