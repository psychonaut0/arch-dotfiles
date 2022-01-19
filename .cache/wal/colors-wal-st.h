const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0f18", /* black   */
  [1] = "#A94F34", /* red     */
  [2] = "#966859", /* green   */
  [3] = "#A09473", /* yellow  */
  [4] = "#DBAA54", /* blue    */
  [5] = "#728082", /* magenta */
  [6] = "#A0A394", /* cyan    */
  [7] = "#e0dcd0", /* white   */

  /* 8 bright colors */
  [8]  = "#9c9a91",  /* black   */
  [9]  = "#A94F34",  /* red     */
  [10] = "#966859", /* green   */
  [11] = "#A09473", /* yellow  */
  [12] = "#DBAA54", /* blue    */
  [13] = "#728082", /* magenta */
  [14] = "#A0A394", /* cyan    */
  [15] = "#e0dcd0", /* white   */

  /* special colors */
  [256] = "#0b0f18", /* background */
  [257] = "#e0dcd0", /* foreground */
  [258] = "#e0dcd0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
