/**ARGS: -xk -DB=2 -DC="A || B" --line */
/**SYSCODE: = 1 | 48 */
#define A /* Comment 1.1 */  1 /* Comment 1.2 */
#define B /* Comment 2.1 */  2 // Comment 2.2
#define C /* Comment 3.1 */  A || B // Comment 3.2
#if 1
KEEP ME
#endif
