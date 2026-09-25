# Trace Table: Max Heap Insertions

| Step | Element Inserted | Action / Swap Performed | Resulting Max Heap Arrangement |
| :--- | :--- | :--- | :--- |
| 1 | **78** | Inserted at root | `[78]` |
| 2 | **92** | Inserted at index 1; 92 > 78, swapped with parent | `[92, 78]` |
| 3 | **65** | Inserted at index 2; 65 < 78, no swap needed | `[92, 78, 65]` |
| 4 | **88** | Inserted at index 3; 88 > 78, swapped with parent | `[92, 88, 65, 78]` |
| 5 | **95** | Inserted at index 4; swapped with 88, then swapped with 92 | `[95, 92, 65, 78, 88]` |
| 6 | **72** | Inserted at index 5; 72 > 65, swapped with parent | `[95, 92, 72, 78, 88, 65]` |
| 7 | **84** | Inserted at index 6; 84 > 72, swapped with parent | `[95, 92, 84, 78, 88, 65, 72]` |
| 8 | **90** | Inserted at index 7; 90 > 78, swapped with parent | `[95, 92, 84, 90, 88, 65, 72, 78]` |
