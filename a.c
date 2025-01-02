#include <stdio.h>
#include <string.h> // Added this header for string functions (strcpy, strcat)
#include <stdint.h> // For uint8_t
#include <stddef.h> // For size_t

// Our custom memset function
void *my_memset(void *data, uint8_t c, size_t n)
{
    uint8_t *data_as_bytes = (uint8_t *)data;
    for (size_t i = 0; i < n; i++)
    {
        data_as_bytes[i] = c;
    }
    return data;
}

int main(void)
{
    // Example 1: Basic function chaining with memory functions
    char buffer[50];

    // Chain memset and strcpy
    strcpy(my_memset(buffer, 0, sizeof(buffer)), "Hello");
    printf("Example 1: %s\n", buffer);

    // Example 2: Multiple operations in one line
    char another_buffer[50];

    // Chain multiple operations: memset -> strcpy -> strcat
    strcat(strcpy(my_memset(another_buffer, 0, sizeof(another_buffer)),
                  "Hello"),
           " World!");
    printf("Example 2: %s\n", another_buffer);

    // Example 3: Storing intermediate results
    char *ptr = my_memset(buffer, 0, sizeof(buffer)); // Clear buffer
    ptr = strcpy(ptr, "Test");                        // Copy "Test" into buffer
    ptr = strcat(ptr, "ing");                         // Append "ing"
    printf("Example 3: %s\n", ptr);

    return 0;
}