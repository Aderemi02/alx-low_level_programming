#include "main.h"
/**
 * closefile - used to close file descriptor
 * @fildes: used to descrine the file passed
 * Return: 0 if success
 */
int closefile(int fildes)
{
	if (fildes == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", fildes);
		exit(100);
	}
	return (0);
}
