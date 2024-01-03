/**ARGS: -xk -DB=2 -DC="A || B" --line */
/**SYSCODE: = 1 | 48 */
#define A   1
#define B   2
#define C   A || B
#if 1
KEEP ME
#endif
