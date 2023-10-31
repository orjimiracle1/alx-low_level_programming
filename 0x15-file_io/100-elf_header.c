#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <string.h>

/**
 * print_elf_info - The function name
 * @header: The header
 */
void print_elf_info(Elf64_Ehdr *header)
{
	int i = 0;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x", header->e_ident[i]);
		if (i < EI_NIDENT - 1)
		{
			printf(" ");
		}
	}
	printf("\n");

	printf("Class: %s\n", header->e_ident[EI_CLASS] == ELFCLASS32 ?
			"ELF32" : "ELF64");
	printf("Data: %s\n", header->e_ident[EI_DATA] == ELFDATA2LSB ?
			"2's complement, little endian" : "2's complement, big endian");
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type: %d\n", header->e_type);
	printf("Entry point address: 0x%lx\n", (unsigned long)header->e_entry);
}

/**
 * main - The functionb name
 * @argc: The arg c
 * @argv: the arg v
 * Return: 1
 */
int main(int argc, char *argv[])
{
	Elf64_Ehdr header;
	int fd;
	ssize_t n;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		perror("Error opening file");
		return (98);
	}

	n = read(fd, &header, sizeof(header));
	if (n != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return (98);
	}

	if (memcmp(header.e_ident, ELFMAG, SELFMAG) != 0)
	{
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return (98);
	}

	print_elf_info(&header);
	close(fd);
	return (0);
}
