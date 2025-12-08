# 9. WHY EACH CORNER

Top-Right: (recommended)
- If current > x → move LEFT (eliminate column)
- If current < x → move DOWN (eliminate row)

Bottom-Left: (also works)
- If current > x → move UP
- If current < x → move RIGHT

Top-Left / Bottom-Right: ambiguous decisions; avoid these corners.
