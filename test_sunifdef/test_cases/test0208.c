/**ARGS: -xk -DFOO1 -UFOO2 */
/**SYSCODE: = 1 | 18 */
#undef FOO1
#define FOO1
#ifdef FOO1
KEEP ME
#endif
