#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * check_elf - checks if file is an ELF file
 * @e_ident: ELF magic numbers
 */
void check_elf(unsigned char *e_ident)
{
    if (e_ident[0] != 0x7f || e_ident[1] != 'E' ||
        e_ident[2] != 'L' || e_ident[3] != 'F')
    {
        dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
        exit(98);
    }
}

/**
 * print_magic - prints ELF magic numbers
 * @e_ident: ELF magic numbers
 */
void print_magic(unsigned char *e_ident)
{
    int i;

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
        printf("%02x%s", e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - prints ELF class
 * @e_ident: ELF identification
 */
void print_class(unsigned char *e_ident)
{
    printf("  Class:                             ");
    switch (e_ident[EI_CLASS])
    {
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_CLASS]);
    }
}

/**
 * print_data - prints ELF data encoding
 * @e_ident: ELF identification
 */
void print_data(unsigned char *e_ident)
{
    printf("  Data:                              ");
    switch (e_ident[EI_DATA])
    {
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_DATA]);
    }
}

/**
 * print_version - prints ELF version
 * @e_ident: ELF identification
 */
void print_version(unsigned char *e_ident)
{
    printf("  Version:                           ");
    if (e_ident[EI_VERSION] == EV_CURRENT)
        printf("1 (current)\n");
    else
        printf("%d\n", e_ident[EI_VERSION]);
}

/**
 * print_osabi - prints ELF OS/ABI
 * @e_ident: ELF identification
 */
void print_osabi(unsigned char *e_ident)
{
    printf("  OS/ABI:                            ");
    switch (e_ident[EI_OSABI])
    {
        case ELFOSABI_SYSV:      printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX:      printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD:    printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX:     printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS:   printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX:      printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD:   printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64:     printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM:       printf("ARM\n"); break;
        case ELFOSABI_STANDALONE:printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", e_ident[EI_OSABI]);
    }
}

/**
 * print_abiversion - prints ELF ABI version
 * @e_ident: ELF identification
 */
void print_abiversion(unsigned char *e_ident)
{
    printf("  ABI Version:                       %d\n", e_ident[EI_ABIVERSION]);
}

/**
 * print_type - prints ELF file type
 * @e_type: ELF type
 */
void print_type(unsigned int e_type)
{
    printf("  Type:                              ");
    switch (e_type)
    {
        case ET_NONE:   printf("NONE (Unknown)\n"); break;
        case ET_REL:    printf("REL (Relocatable file)\n"); break;
        case ET_EXEC:   printf("EXEC (Executable file)\n"); break;
        case ET_DYN:    printf("DYN (Shared object file)\n"); break;
        case ET_CORE:   printf("CORE (Core file)\n"); break;
        default:        printf("<unknown: %x>\n", e_type);
    }
}

/**
 * print_entry - prints ELF entry point address
 * @e_entry: entry point address
 * @e_ident: ELF identification (for class)
 */
void print_entry(unsigned long e_entry, unsigned char *e_ident)
{
    printf("  Entry point address:               ");
    if (e_ident[EI_CLASS] == ELFCLASS32)
        printf("0x%x\n", (unsigned int)e_entry);
    else
        printf("0x%lx\n", e_entry);
}

/**
 * main - displays ELF header information
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success, 98 on error
 */
int main(int ac, char **av)
{
    int fd;
    Elf64_Ehdr header;
    ssize_t bytes_read;

    if (ac != 2)
    {
        dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
        exit(98);
    }

    fd = open(av[1], O_RDONLY);
    if (fd == -1)
    {
        dprintf(STDERR_FILENO, "Error: Cannot open file %s\n", av[1]);
        exit(98);
    }

    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header))
    {
        dprintf(STDERR_FILENO, "Error: Cannot read ELF header\n");
        close(fd);
        exit(98);
    }

    check_elf(header.e_ident);

    printf("ELF Header:\n");
    print_magic(header.e_ident);
    print_class(header.e_ident);
    print_data(header.e_ident);
    print_version(header.e_ident);
    print_osabi(header.e_ident);
    print_abiversion(header.e_ident);
    print_type(header.e_type);
    print_entry(header.e_entry, header.e_ident);

    close(fd);
    return (0);
}
