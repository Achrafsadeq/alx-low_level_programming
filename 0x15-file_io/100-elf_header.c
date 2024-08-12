#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void validate_elf_format(unsigned char *e_ident);
void display_elf_magic(unsigned char *e_ident);
void show_elf_class(unsigned char *e_ident);
void describe_elf_data(unsigned char *e_ident);
void reveal_elf_version(unsigned char *e_ident);
void show_elf_abi_version(unsigned char *e_ident);
void describe_elf_osabi(unsigned char *e_ident);
void identify_elf_type(unsigned int e_type, unsigned char *e_ident);
void reveal_elf_entry_point(unsigned long int e_entry, unsigned char *e_ident);
void safely_close_elf_file(int elf);

/**
 * validate_elf_format - Confirms the file format as ELF.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: Terminates with exit code
 * 98 if the file is not recognized as ELF.
 */
void validate_elf_format(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
		if (e_ident[index] != 127 &&
		    e_ident[index] != 'E' &&
		    e_ident[index] != 'L' &&
		    e_ident[index] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * display_elf_magic - Outputs the ELF header's magic numbers.
 * @e_ident: Pointer to an array containing the ELF magic numbers.
 *
 * Description: Magic numbers are displayed as hexadecimal values,
 * separated by spaces.
 */
void display_elf_magic(unsigned char *e_ident)
{
	int index;

	printf("  Magic:   ");

	for (index = 0; index < EI_NIDENT; index++)
	{
		printf("%02x", e_ident[index]);

		if (index == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * show_elf_class - Outputs the class of the ELF file.
 * @e_ident: Pointer to an array containing the ELF class.
 */
void show_elf_class(unsigned char *e_ident)
{
	printf("  Class:                             ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * describe_elf_data - Displays the ELF data encoding format.
 * @e_ident: Pointer to an array containing the ELF data encoding.
 */
void describe_elf_data(unsigned char *e_ident)
{
	printf("  Data:                              ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_DATA]);
	}
}

/**
 * reveal_elf_version - Displays the ELF file version.
 * @e_ident: Pointer to an array containing the ELF version.
 */
void reveal_elf_version(unsigned char *e_ident)
{
	printf("  Version:                           %d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * show_elf_abi_version - Outputs the ABI version in the ELF header.
 * @e_ident: Pointer to an array containing the ELF ABI version.
 */
void show_elf_abi_version(unsigned char *e_ident)
{
	printf("  ABI Version:                       %d\n",
	       e_ident[EI_ABIVERSION]);
}

/**
 * describe_elf_osabi - Displays the OS/ABI identifier in the ELF header.
 * @e_ident: Pointer to an array containing the ELF OS/ABI.
 */
void describe_elf_osabi(unsigned char *e_ident)
{
	printf("  OS/ABI:                            ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * identify_elf_type - Displays the ELF file type.
 * @e_type: The ELF type.
 * @e_ident: Pointer to an array containing the ELF class.
 */
void identify_elf_type(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf("  Type:                              ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * reveal_elf_entry_point - Displays the ELF header's entry point address.
 * @e_entry: The address of the ELF entry point.
 * @e_ident: Pointer to an array containing the ELF class.
 */
void reveal_elf_entry_point(unsigned long int e_entry, unsigned char *e_ident)
{
	printf("  Entry point address:               ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);
	else
		printf("%#lx\n", e_entry);
}

/**
 * safely_close_elf_file - Closes the ELF file descriptor.
 * @elf: The file descriptor of the ELF file.
 *
 * Description: Exits with code 98 if the file descriptor cannot be closed.
 */
void safely_close_elf_file(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}

/**
 * main - Displays the information contained in the
 *        ELF header at the start of an ELF file.
 * @argc: The number of arguments supplied to the program.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the file is not an ELF file or
 *              the function fails - exit code 98.
 */
int main(int __attribute__((__unused__)) argc, char *argv[])
{
	Elf64_Ehdr *header;
	int o, r;

	o = open(argv[1], O_RDONLY);
	if (o == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		safely_close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	r = read(o, header, sizeof(Elf64_Ehdr));
	if (r == -1)
	{
		free(header);
		safely_close_elf_file(o);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}

	validate_elf_format(header->e_ident);
	printf("ELF Header:\n");
	display_elf_magic(header->e_ident);
	show_elf_class(header->e_ident);
	describe_elf_data(header->e_ident);
	reveal_elf_version(header->e_ident);
	describe_elf_osabi(header->e_ident);
	show_elf_abi_version(header->e_ident);
	identify_elf_type(header->e_type, header->e_ident);
	reveal_elf_entry_point(header->e_entry, header->e_ident);

	free(header);
	safely_close_elf_file(o);
	return (0);
}
