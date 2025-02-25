# sort-string

This algorithm sorts a string of (alphabetical) characters in ascending order. Meaning a > b, b > c, c > d, and so on.

### How it works

Step 1:
Count is initialized at 0.

Start with second character of the string. If it is smaller than the previous one (e.g. a is smaller than b, b is smaller than c, c is smaller than d, and so on), swap the two and reset count to 0.

Otherwise, increment count by 1.

Step 2:
Move on with the next character and do the same as Step 1 by comparing it with the character that came before it.

Step 3:
Repeat Step 1 and 2 until the count is equal to the length of the string of characters. This means the string is successfully sorted in alphabetical order (ascending)

