# DeezNuts Programming Language
## DeezNuts is a Esoteric Programming Language, made in C++ with only 1 file and 255 lines.

## How to compile?
### Enter file name of code at the command line argument on the executable
### Example:
### `deeznut test.nut`
### Official Deeznut file extension: `.nut`

## How to create executable?
### You need to have clang installed.
### Command:
### cd to source code and enter command `./run`
### and now you have the Executable built.

## How to code it?
### Available Key:
- `+`
- `-`
- `<`
- `>`
- `^`
- `$`
- `.`
- `0~9`
### Key's Explaination:
- `+` ~~~~~~ `Increase value of current Position block`
- `-` ~~~~~~ `Decrease value of current Position block`
- `<` ~~~~~~ `Decrease value of Position`
- `>` ~~~~~~ `Increase valye of Position`
- `^` ~~~~~~ `Create Input`
- `$` ~~~~~~ `Get value of Input`
- `.` ~~~~~~ `Create and switch to new Block`
- `0~9` ~~~~ `Multiply number given and value, change value of block to multiplied value`
### How it work:
#### Each Block stands for each Character, each value stands for each Character's value. Value table: [here](https://github.com/MaybeELEMENT/DeezNuts#value-table)
#### Example:
Code:
```diff
+++++++++++++++++++++++++++++++++++++.+++++++.++++++++++++++.++++++++++++++.+++++++++++++++++.+.
++++++++++++++++++++++++++++++++++++++++++++++++++++.+++++++++++++++++.+++++++++++++++++++++.++++++++++++++.++++++.
```
Ouput:
```
Hello World
```
Code explaination:
#### As you see. `Hello World` has 11 character, which is 11 blocks.So we need to create 11 blocks using `.`, so theres 11 `.`. `H`'s value is 37 so theres 37 `+` on first block, `e`'s value is 7 so theres 7 `+`, `l`'s value is 14 so theres 14 `+` on both blocks .etc

#### But dont you think its too long? Well, we can make it shorter using multiply!
#### Example:
```diff
+75++.+7.+72.+72.+82+.+.+77+++.+82+.+73.+72.+6.
```
Output:
```
Hello World
```
Code explaination:
#### So, `H`'s value is 37. `+75++` equal to 37 because the first `+` mean 1, and theres `7` after first `+`. So `+`(`1`) multiply `7` equal to `7`, and theres `5` afters `7`. So the result of (1 * 7) multiply `5` equal to `35`. Which is `F`, but F is not we want and H is `37` so we can just add 2 `+` after `+75` so it equal to `37` (35 + 2 = 37). Which is `H`, so we now get out result. Other block's logic is the same.

## Value Table:
 1: space
 
 2: new line(\n)

 3: a

 4: b

 5: c

 6: d

 7: e

 8: f

 9: g

10: h

11: i

12: j

13: k

14: l

15: m

16: n

17: o

18: p

19: q

21: r

22: s

23: t

24: u

25: v

26: w

27: x

28: y

29: z

30: A

31: B

32: C

33: D

34: E

35: F

36: G

37: H

38: I

39: J

40: K

41: L

42: M

43: N

44: O

45: P

46: Q

47: R

48: S

49: T

50: U

51: V

52: W

53: X

54: Y

55: Z

56: 0

57: 1

58: 2

59: 3

60: 4

61: 5

62: 6

63: 7

64: 8

65: 9

66: !

67: \`

68: ~

69: !

70: @

71: $

72: %

73: ^

74: &

75: *

76: (

77: )

78: -

79: _

80: =

81: +

82: {

83: }

84: [

85: ]

86: |

87: \

88: :

89: ;

90: '

91: "

92: <

93: >

94: ,

95: .

96: ?

97: /
