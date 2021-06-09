# Caesar’s cipher

#### Written in C, this program encrypts messages using Caesar's cipher
This project is part of Harvard's CS50x course.

### Overview

Supposedly, Caesar (yes, that Caesar) used to “encrypt” (i.e., conceal in a reversible way) confidential messages by <b>shifting each letter therein by some number of places</b>. For instance, he might write A as B, B as C, C as D, …, and, wrapping around alphabetically, Z as A. And so, to say HELLO to someone, Caesar might write IFMMP. Upon receiving such messages from Caesar, recipients would have to “decrypt” them by shifting letters in the opposite direction by the same number of places.

The secrecy of this “cryptosystem” relied on only Caesar and the recipients knowing a secret, the number of places by which Caesar had shifted his letters (e.g., 1). Not particularly secure by modern standards, but, hey, if you’re perhaps the first in the world to do it, pretty secure!

<b>Unencrypted text is called plaintext</b>. <b>Encrypted text is called ciphertext</b>. And the <b>secret used is called a key</b>.

To be clear, then, here’s how encrypting HELLO with a key of 1 yields IFMMP:

<b>plaintext	H	E	L	L	O
+ key	1	1	1	1	1
= ciphertext	I	F	M	M	P</b>

More formally, Caesar’s algorithm (i.e., cipher) encrypts messages by “rotating” each letter by k positions. If p is some plaintext (i.e., an unencrypted message), pi is the ith character in p, and k is a secret key (i.e., a non-negative integer), then each letter, ci, in the ciphertext, c, is computed as

ci = (pi + k) % 26

wherein % 26 here means “remainder when dividing by 26”. 

### Usage

User must provide a key, which should be a number between 0 and 26, as an argument. After that, user will be prompted to provide a plaintext. The program then will return the corresponding ciphertext.

Here’s how the program might work if the user provides a key of 13 and a plaintext of hello, world:

$ ./caesar 13

plaintext:  hello, world

ciphertext: uryyb, jbeyq


### Author

*caiomilanic*

find me @ https://github.com/caiomilanic
