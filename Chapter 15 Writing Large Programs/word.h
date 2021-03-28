#ifndef WORD_H //use ifndef to protect the word.h header file from being included more than once 
#define WORD_H
// Read word: Reads the next word from the input and stores it in word. 
// Makes word empty if no word could be read because of end-of-file. 
//Truncates the word if its length exceeds len.
void read_word(char *word, int len) ;
#endif
