#include <stdio.h>
#include <stdlib.h>
#include <intrin.h>
#include <sysinfoapi.h>
#include <time.h>   
#include <conio.h>
#include <windows.h>

void ascii_art1()

/*This function prints an ASCII art to the console.*/

{  
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);                          //Gets a handle to the console window
    SetConsoleTextAttribute(hConsole, FOREGROUND_BLUE | FOREGROUND_GREEN);      //Sets the text color combination to cyan

    printf(" _____                                    _                                     _             \n");
    printf("|  __ \\                                  | |                                   | |            \n");
    printf("| |__) |_ _ ___ _____      _____  _ __ __| |     __ _  ___ _ __   ___ _ __ __ _| |_ ___  _ __ \n");
    printf("|  ___/  _` / __/ __\\ \\/\\ / / _ \\| | _/ _` |   / _` |/ _ \\ '_ \\ / _ \\ '__/ _` | __/ _ \\|   __|\n");
    printf("| |   | (_| \\__ \\__ \\ V  V / (_) | | | (_| |  | (_| |  __/ | | |  __/ | | (_| | || (_) | |   \n");
    printf("|_|   \\__,_|___/___/ \\_/\\_/ \\___/|_|  \\__,_|   \\__, |\\___|_| |_|\\___|_|  \\__,_|\\__\\___/|_|   \n");
    printf("                                                __/ |                                        \n");
    printf("                                               |___/                                         ");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);         //Sets the text color back to white
}

void ascii_art2()

/*This function prints an ASCII art to the console.*/

{    
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);              
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);       //Sets the text color combination to orange

    printf("  _________                      _____\n");
    printf(" /    ___  \\                    /  _   \\  \n");
    printf("|    /   )__)                   |  ( )__)\n");
    printf("|   |             _____   _____ |  |   ______  _____  __      _____\n");
    printf("|   |     _____ /  _ \\ |  _   \\ |  |__(_    _)|   __)|  |    |     \\ \n");
    printf("|   |   (_   _)|  (_)  || (_) / |   __) |  |  |  (__ |  |    |  |\\  |\n");
    printf("|   \\____/  |  |       ||    <  |  |    |  |  |   __)|  |    |  | ) |\n");
    printf("|           |  |   _   ||    \\  |  |   _|  |_ |  (__ |  |___ |  |/  |\n");
    printf("\\__________/   |__( )__||__(\\__\\|__|  (______)|_____)|______)|_____/\n");
    printf("  _____  __  __  ____ \n");
    printf(" |_   _|| (_) | |  __) \n");
    printf("   | |  |  _  | |  __) \n");
    printf("   |_|  |_( )_| |____)                      _   _ \n");
    printf("  ________         ________              ``/_\\/_\\''\n");
    printf(" /        \\       (__    __)             /-(o).(o)-\\ \n");
    printf("|     __   |  _____  |  |                \\-\\_/-\\_/-/____,\n");
    printf("|    |  )__) /  _  \\ |  |                 \\-      =  =  =\\ \n");
    printf("|    |   __ |  (_)  ||  |                 /-             -\\,\n");
    printf("|    |__)  )|       ||  |                (=   |      /-    -\\_\n");
    printf("|          ||   _   ||  |                 \\, _/-    _\\-   __|_-\\\n ");
    printf("\\________/ |__( )__||__|                (__(__/___(____/(_____/\n");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

void ascii_art3()

/*This function prints an ASCII art to the console.*/

{   
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);             
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_GREEN);        //Sets the text color combination to Yellow

    printf("                                            _______\n");
    printf("                                       ---/        \\\n");
    printf("                                      |   \\______   |\n");
    printf("        _ooo--.                         - ---^^- / /\n");
    printf("     @@@=@MMM\\.`,_.',-                          ||/\n");
    printf("   _.\\X// \" \"   \\  33,                            |||\n");
    printf("  ===A   |     \\ P\"\"B                    . .. .:'':.\n");
    printf("    /@,_ (  __,/\"\"\\.M\\                  /^/^^\\/     \\\n");
    printf("    |; \"/\"_,/ / .'.A              0___O_\\O_/       |\n");
    printf("    \\,\\._><-__./    \"V             |                /\n");
    printf("     \\F _       a_3R\"---,.         |        .._    /\n");
    printf("      _>\"#           _   )          \\ ____/   |   |             /\n");
    printf("     (  /           .@J  /                    |   |           //\n");
    printf("     ) /           /    )               (((((  |  |          || \n");
    printf("     ( |           \\    /,           ((((((((((|  \\       __ /|\n");
    printf("     | \\            `,._,/ ___      ((((((   ((|   \\     /     \\ \n");
    printf("      \"=\\,          ]@7,.n| P @\\    (((((    __|    \\__/        |\n");
    printf("          7-______.  \\____.,   .)     (((    \\    /             |\n");
    printf("          /  /     \\ \\      \\WWW/              \\-/        (_     \\ \n");
    printf("          |  |     |  |      ""'                  |  |\\________\\   |\n");
    printf("   ___   /   \\.   ,/  \\._                      /|  |        \\ \\  |\n");
    printf("/             \\ (           \\           ____  | |  |   ______\\ \\  \\ \n");
    printf("|(       ___.-'  \"--.       \\)        /    ____/   |  /    ____/   \\ \n");
    printf(" ""-`""""                  `--(__)/         \\(_ /         \\ \\(_ /        |\n");
    printf("                                             \\_(____.../     \\_(_____/");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);   
}

void ascii_art4()

/*This function prints an ASCII art to the console.*/

{   
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_INTENSITY);          //Sets the text color combination to red

    printf("                       _____\n");
    printf("                   .d88888888bo.\n");
    printf("                 .d8888888888888b.\n");
    printf("                 8888888888888888b\n");
    printf("                888888888888888888\n");
    printf("                 888888888888888888\n");
    printf("                  Y8888888888888888\n");
    printf("            ,od888888888888888888P\n");
    printf("         .'`Y8P'```'Y8888888888P'\n");
    printf("      .'_   `  _     'Y88888888b\n");
    printf("      /  _`    _ `      Y88888888b   ____\n");
    printf("   _  | /  \\  /  \\      8888888888.d888888b.\n");
    printf("  d8b | | /|  | /|      8888888888d8888888888b\n");
    printf(" 8888_\\ \\_|/  \\_|/      d888888888888888888888b\n");
    printf(" .Y8P  `'-.            d88888888888888888888888\n");
    printf("/          `          `      `Y8888888888888888\n");
    printf("|                        __    888888888888888P\n");
    printf(" \\                       / `   dPY8888888888P\n");
    printf("  '._                  .'     .'  `Y888888P`\n");
    printf("     `\"'-.,__    ___.-'    .-'\n");
    printf("         `-._````  __..--'`\n");
    printf("             ``````\n");
    printf("");

    SetConsoleTextAttribute(hConsole, FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
}

void choose_ascii()

/*This function randomly selects an ASCII art to output*/

{
    int choice=rand() % 3;          //Generates a number from 0 to 2 to call its respective function
    switch(choice)
    {
        case 0 : 
            ascii_art2();
            break;
        case 1 : 
            ascii_art3();
            break;
        case 2:
            ascii_art4();
            break;
    }
}

void generate_linenumber_filenumber(int *pfileGenerated, int *plineGenerated)

/*This function generates random numbers to be used later in the program*/

{   
    *plineGenerated = rand() % 500 + 1;       //Generates a random line to read from a file and a random file to be read from
    *pfileGenerated = rand() % 4 + 4;      
}

void get_line(int index, int lineGenerated, FILE *fileHandle, char *line)

/*This function reads all the lines in a file up to the given line number */

{       
        if  (fgets(line, 100, fileHandle) == NULL)      //Checks if end of file has been reached or that an error has occured
        {
            return;
        }

        if (index == lineGenerated || index > 500)      //Checks if line specified has been reached or the end of the file has been reached
        {   
            return ;             
        }   
        else
        {   
            get_line(index + 1, lineGenerated, fileHandle, line);       //Recursive call 
        }
}

char get_char() 

/*This function reads all the special characters stored in the file character.txt into an array and 
randomly returns a special character from the array*/

{
    int index = rand()  % 26;       //Initialise index to randomly read a special character from the array
    char array[25];
    int i = 0;
    char c;
    FILE *fp = fopen("character.txt", "r");

    if (fp == NULL) 
    {
        printf("Error: failed to open the file\n");         //Prints an error message in case file cannot be opened
        return '\0';
    }
    
    while ((c = fgetc(fp)) != EOF)      
    {
        if (c != '\n')              //If the characters that has been read is not a newline or the EOF constant, it is assigned to the array
        {                               
            array[i++] = c;            
        }
    }
    fclose(fp);

    return array[index];
}

void get_word(int count, int lineGenerated, FILE *fileHandle, char password[], const char *numberDictionary[])

/*The purpose of this function is to generate a password by combining , a randomly selected digit
a word read from a file, and a special character and concatenating it to the password string*/

{   
    int randomIndex = rand() % 10 ;
    char line[7];
   
    get_line(1, lineGenerated, fileHandle, line);       //Calls get_line function to read a word from a given file

    line[strlen(line) - 1] = '\0';                  //Removes the newline from the line array by replacing it with a null character

    printf("%d %s\n", count , line);

    char charStr[2] = {get_char() , '\0'};          //Creating a string with a speacial character and a null character

    sprintf(password + strlen(password), "%s%s%s-",numberDictionary[randomIndex], line, charStr);      /*concatenates a random digit  , a word from the file, a special characterfrom the number dictionary
                                                                                                        a hyphen and assigns it into the password string*/ 
}

void create_password(int num, int count, char password[], int fileGenerated, int lineGenerated, const char *numberDictionary[])

/*This function calls get_word then it calls itself recursively until 
a specified number of words have been appended to the password string.*/

{
    FILE *fileHandle;
    int randomIndex = 0;
    char fileName[10];
    // char *line = malloc(sizeof(line));
    
    count = count + 1;

    generate_linenumber_filenumber(&fileGenerated, &lineGenerated);      //Calls this function to generate a file number and a line number

    sprintf(fileName, "%d", fileGenerated);         //Write the value of fileGenerated variable to fileName array as a string
    fileHandle = fopen(fileName,"r");

    if (fileHandle == NULL) 
    {
        printf("Error: Failed to open file\n");     //Prints an error message in case file cannot be opened
        fclose(fileHandle);
        return;
    }

    get_word(count, lineGenerated, fileHandle, password, numberDictionary);     //Calls get_word to build the string password 

    if (num > 1)
    {
        create_password(num - 1, count, password, fileGenerated, lineGenerated, numberDictionary);      //Recursively calls itself till the number of words specified has been met
    }

    fclose(fileHandle);
}          

void write_file(char password[])

/*This function writes the password generated to the file "password.txt"*/

{
    FILE *fp = fopen("passwords.txt", "a");

    if (fp == NULL)
    {
        printf("Error: Failed to open the file.\n");        //Prints an error message in case file cannot be opened
        return ;
    }

    time_t current_time = time(NULL);                
    
    char *time_str = ctime(&current_time);              // Convert the current time to a string

    fprintf(fp, " %s %s \n \n ", time_str, password);       

    fclose(fp);
}

int input()

/*This function prompts the user to enter a number between 3 and 4 and continues prompting until a valid number is entered. 
It returns the valid number*/

{   
    int answer, result = 0;

    printf("\n\nEnter the number of words you want for your password: ");       //Prompts user to enter number of words
    result = scanf("%d", &answer);
    printf("\n");

    while (answer < 3 || answer > 4 || result != 1)             //Validates the input of the user
    {
        if (result != 1)            
        {
            //Discards any remaining characters in the input buffer
            while (getchar() != '\n');  
        }

        printf("You should choose between 3 and 4!\n");
        printf("Enter the number of words you want for your password: "); //Prompts user to again enter number of words
        result = scanf("%d", &answer);

        printf("\n");
    }

    return answer;
}

void main()
{   
    int noOfWords = 0;
    int count = 0;
    int fileGenerated = 0;
    int lineGenerated = 0;
    int seed = _rdtsc() ^ GetTickCount();                       /*The seed variable takes value of XOR operation between the number of clock cycles since the last reset(_rdtsc function)
                                                                and the number of miliseconds that have elapsed since the system was started*/
    char password[100] = "";
    const char *numberDictionary[] = {"1","2","3","4","5","6","7","8","9","0"};     //Declaration of a number dictionary 

    ascii_art1();           

    srand(seed);            //Seed the rand() function

    noOfWords = input();

    create_password(noOfWords, count, password, fileGenerated, lineGenerated,(const char **)numberDictionary);      //Call this function to generate the password

    password[strlen(password) - 1] = '\0';          //Removes the trailing hyphen in the string password

    printf("\nYour e-t-r password is %s \n\n", password);  

    write_file(password);           //Stores the password in a file
    
    printf("The password has been saved to the file \"passwords.txt\"\n");

    choose_ascii();                 //Display a random ASCII art               
}