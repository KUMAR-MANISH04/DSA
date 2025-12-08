# Cheat Sheet – Spiral Traversal

Step	Direction	Loop Bounds	Action After
1. Top	→ (left→right)	j: left to right	top++
2. Right	↓ (top→bottom)	i: top to bottom	right--
3. Bottom	← (right→left)	j: right to left	bottom-- (if top≤bottom)
4. Left	↑ (bottom→top)	i: bottom to top	left++ (if left≤right)

Variables
- top = 0        Current top row
- bottom = R-1   Current bottom row
- left = 0       Current left column
- right = C-1    Current right column

Main Loop Pattern:
while (top <= bottom && left <= right) {
  // Four operations (Top, Right, Bottom, Left)
}

Complexity:
- Time: O(R × C)
- Space: O(1) (excluding output storage)
