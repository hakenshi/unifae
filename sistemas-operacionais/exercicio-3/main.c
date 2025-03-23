#include <stdio.h>
#include <stdlib.h>
#define FILE_NAME "file.txt"
#ifdef _WIN32
#define OS 1
#else
#define OS 0
#endif

char *file_content[10] = {"ls -la", "pwd", "echo $PATH", "echo $HOME", "echo $USER", "cd $HOME", "cat file.txt", "dir", "npm init -y", "cd .."};

void create_file()
{
    FILE *file = fopen(FILE_NAME, "w");
    if (file != NULL)
    {
        printf("File created successfully\n");
        fclose(file);
    }
}

void write_to_file()
{
    FILE *file = fopen(FILE_NAME, "a");
    if (file != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            char *text = file_content[i];
            printf("Writing %s to file\n", text);
            fprintf(file, "%s\n", text);
        }
        fclose(file);
    }
}

void read_file()
{
    FILE *file = fopen(FILE_NAME, "r");
    if (file != NULL)
    {
        char line[100];
        while (fgets(line, sizeof(line), file))
        {
            printf("%s", line);
        }
        fclose(file);
    }
}

void delete_file()
{
    FILE *file = fopen(FILE_NAME, "r");
    if (file != NULL)
    {
        fclose(file);
        remove(FILE_NAME);
        printf("File deleted successfully\n");
    }
}

void list_directory()
{
    if (OS == 1)
    {
        system("dir file.txt");
    }
    else
    {
        system("ls file.txt");
    }
}

int main(int argc, char const *argv[])
{
    create_file();
    read_file();
    write_to_file();
    list_directory();
    delete_file();
    return 0;
}
