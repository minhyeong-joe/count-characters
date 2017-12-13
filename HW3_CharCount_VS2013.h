// Minhyeong Joe
// Homework3: Count Char Types in a Sentence
// Date Due: 13 April, 2016
// Visual Studio 2013
// The program prompts the user to enter sentence up to 132 characters long,
// then it will count the total number of characters in the sentence.
// The program will repeat until the user (Q)uits the program.

#ifndef _HW3_CountChar_VS2013_H
#define _HW3_CountChar_VS2013_H

int Input(char *inbuf, short size);
// precondition: inbuf is the pointer to the input characters; size is the number of characters.
// postcondition: returns the number of characters in the sentence.
void CountAndDisplay(char *inbuf, short CharCount);
// precondition: inbuf is the pointer to the input characters; CharCount is the number of characters.
// postcondition: displays the input sentence(*inbuf) and the number of characters.

#endif
