/**ARGS: -DFOO1 -UFOO2 */
/**SYSCODE: = 0 */
/* Left(unk) || Right(unk) := Keep */
#if 1 || defined(UNKNOWN)
KEEP ME
#else
KEEP ME
#endif
