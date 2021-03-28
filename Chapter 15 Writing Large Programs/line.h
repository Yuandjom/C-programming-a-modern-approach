#ifndef LINE_H
#define LINE_H

void clear_line(void);
// clear_line : clears the current line 
void add_word(const char *word);
/* add_word: adds word to the end of the current line. 
   if this is not the first word on the line, 
   puts one space before word.*/
int space_remaining(void);
/*space_remaining: Returns the number of characters left in the 
  current line. */
void write_line(void);
/* write_line: Writes the current line with justification*/
void flush_line(void);
/*flush_line: Writes the current line without justification. If the line is 
  empty, does nothing.*/

#endif 