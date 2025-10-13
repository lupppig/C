#ifndef LINE_H
#define LINE_H
// cleear_line: cleas the current line
void clear_line(void);

// add_word: add words to the end of the current line if this is not the first word on the lin puts one space before word
void add_word(const char *word);

// space_remaining: returns the number of characters left in the current line
int space_remaining(void);

// write_line: write the current line with justification
void write_line(void);

// flush_line: write the current line without justification. If the line is empty does nothingo
void write_line(void);

// flush_line: write the current line without justification. If the line is empty, does nothing
void flush_line(void);
#endif