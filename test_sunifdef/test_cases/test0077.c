/**ARGS: -DFOO1 -UFOO2 */
/**SYSCODE: = 0 */
// Error directive should not cause an unbalanced quote error
#ifdef TESTVAR
#error With a ' and a " a /* Comment */ and a // Comment
#else
DELETE ME
#endif
