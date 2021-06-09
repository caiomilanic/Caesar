#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

//1.Get argunent
int main(int argc, string argv[])
{


//2.Verify argument
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");

        return 1;
    }

    int k = atoi(argv[1]); 
//3.Prompt for the message that should be encrypted
    string s = get_string("plaintext: ");
    printf("ciphertext: "); // print out cipher

//4.Iterate the key in each character using caeser's %26 method
//5.Verify upper and lower cases and mantain their case
    for (int i = 0, n = strlen(s) ; i < n; i++)
    {
        // If its lowercase (97 = a to 112 = z) and 13+ characters long
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Print out lowercase with key
            printf("%c", (((s[i] - 'a') + k) % 26) + 'a'); 
        } 
        // If its between uppercase A and C
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            // Maintain upper case
            printf("%c", (((s[i] - 'A') + k) % 26) + 'A'); 
        }
        else
        {
            printf("%c", s[i]);
        }
    }
    printf("\n");
    return 0;
}
