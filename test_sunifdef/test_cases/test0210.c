/**ARGS: -xk -DC=1 */
/**SYSCODE: = 0 */

#define A 1 /* start of comment
                      extends to next line */
#define B /* comment */ 1
#define C /* start of comment
		extends to next line
		and to next line */ 1
#undef D  /* start of comment
             extends to next line */
#ifdef E   /* start of comment
            extends to next line */
#endif
