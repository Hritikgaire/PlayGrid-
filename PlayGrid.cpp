#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
#define Row 22
#define Column  22
void  Maze_Printer();
void path();
void gimic();
int menu();
int tik();
int han();
int mazee();
int st();
int clo();
int bot();
int mn();
char maze[Row][Column] = {                                         // makes easy to print
    {'P',' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {' ','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
};
int pR = 0, pC = 0; // inital position of player
int main()
{
	int AN=16600;
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                  ****                                 \n");
printf("               ***    ***                              \n");
printf("              ***         ********                     \n");
printf("            ****************                           \n");
printf("           ******************                          \n");
printf("                                                       \n");

usleep(AN);
system("cls");
if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                   ****                                 \n");
printf("                ***    ***                              \n");
printf("               ***         ********                     \n");
printf("             ****************                           \n");
printf("            ******************                          \n");
printf("                                                       \n");
usleep(AN);
system("cls");
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                    ****                                 \n");
printf("                 ***    ***                              \n");
printf("                ***         ********                     \n");
printf("              ****************                           \n");
printf("             ******************                          \n");
printf("                                                       \n");
usleep(AN);
system("cls");
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                     ****                                 \n");
printf("                  ***    ***                              \n");
printf("                 ***         ********                     \n");
printf("               ****************                           \n");
printf("              ******************                          \n");
printf("                                                       \n");
usleep(AN);
system("cls");
if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                      ****                                 \n");
printf("                   ***    ***                              \n");
printf("                  ***         ********                     \n");
printf("                ****************                           \n");
printf("               ******************                          \n");
printf("                                                       \n");
usleep(AN);
system("cls");
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            \n");
printf("                    ***    ***                         \n");
printf("                   ***         ********                \n");
printf("                 ****************                      \n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");
if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            -\n");
printf("                    ***    ***                         |\n");
printf("                   ***         ********                |\n");
printf("                 ****************                      -\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---\n");
printf("                    ***    ***                         |##\n");
printf("                   ***         ********                |##\n");
printf("                 ****************                      ---\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");
if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            -----\n");
printf("                    ***    ***                         |####\n");
printf("                   ***         ********                |####\n");
printf("                 ****************                      -----\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ------\n");
printf("                    ***    ***                         |#####\n");
printf("                   ***         ********                |#####\n");
printf("                 ****************                      ------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");
	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            -------\n");
printf("                    ***    ***                         |######\n");
printf("                   ***         ********                |######\n");
printf("                 ****************                      -------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");
if(kbhit() != 0) {
           AN=0;
        } 
        
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------\n");
printf("                    ***    ***                         |########\n");
printf("                   ***         ********                |########\n");
printf("                 ****************                      ---------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            -------------\n");
printf("                    ***    ***                         |############\n");
printf("                   ***         ********                |############\n");
printf("                 ****************                      -------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ----------------\n");
printf("                    ***    ***                         |###############\n");
printf("                   ***         ********                |###############\n");
printf("                 ****************                      ----------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********@               |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ******** @              |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********  @             |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********   @            |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********    @           |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********       @        |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********            @   |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********              @ |###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                                                       \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |###################|\n");
printf("                   ***         ********                @###################|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         #\n");
printf("                                                           # # #\n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |## # ## ###### ####|\n");
printf("                   ***         ********                @ ## #### ###### ###|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                     \n");
printf("                                                       \n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         #\n");
printf("                                                           # # #\n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                       @ |## # ## ###### ####|\n");
printf("                   ***         ********                | ## #### ###### ###|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                        #  #  #  # \n");
printf("                                                          #    #   #\n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                                           # # #\n");
printf("                       ****                     @      ---------------------\n");
printf("                    ***    ***                         |## # ## ###### ####|\n");
printf("                   ***         ********                | ## #### ###### ###|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                        #  #  #  # \n");
printf("                                                          #    #   #\n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                           @                # #\n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |## # ## ###### ####|\n");
printf("                   ***         ********                | ## #### ###### ###|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                                 # \n");
printf("                                                          #  #  # #  #\n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                 @                          # #\n");
printf("                       ****                            ---------------------\n");
printf("                    ***    ***                         |## # ## #  ### ####|\n");
printf("                   ***         ********                | ## #### ##  ## ###|\n");
printf("                 ****************                      ---------------------\n");
printf("                ******************                                 # \n");
printf("                                                          #  #  ## #  #\n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                                            \n");
printf("                       ****                            ---------------------\n");
printf("                    ***    **                          |## # ## #    # ####|\n");
printf("                   ***          ******                 | ## ####     ## ###|\n");
printf("                 ******** *******                      ---------------------\n");
printf("                ******** **** ****                                   \n");
printf("           *          *  *    *                               #  #  ## #  #\n");
usleep(AN);
system("cls");	if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                                            \n");
printf("                                                         ---------------------\n");
printf("                    ***    ***                           |#  # ##        ####|\n");
printf("              *     ***         ********                 | ##         ### ###|\n");
printf("                 ***            *                        ---------------------\n");
printf("                ******************                                  \n");
printf("       **      *       ***                                   #  #  ## #  #\n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("                                                       \n");
printf("                                                       \n");
printf("                                                         \n");
printf("                                                            \n");
printf("                                                         ---------------------\n");
printf("                    ***    ***                           |                   |\n");
printf("                            ********                     |                   |\n");
printf("                 ****                                    ---------------------\n");
printf("                ******************                                  \n");
printf("    ***             ****                     **              #  #  ## #  #\n");
usleep(AN);
system("cls");if(kbhit() != 0) {
           AN=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |                   |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
	usleep(AN);
                                                                       //W
                                                                      if(kbhit() != 0) {
           AN=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     _             |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
int AS=111114;
usleep(111114);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |                   |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     _             |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      W            |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //E
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      W_           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      W            |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      W_           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      WE           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //L
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WE_           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WE            |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WE_           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WEL           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //C
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      WEL_         |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");
printf("\n");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WEL           |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WEL_          |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELC          |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //O
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELC_         |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELC          |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELC_         |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCO         |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //M
usleep(AS);		if(kbhit() != 0) {
           AS=0;
        } 
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCO_        |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCO         |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCO_        |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOM        |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
                                                                       //E
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCO_        |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOM        |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOM_       |\n"); 
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |      WELCOME      |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME __    |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME       |\n");;
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |                   |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |      _            |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     P             |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     P_            |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PL            |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PL_           |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |      PLA          |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLA_          |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLAY          |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAY_         |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYG         | \n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYG_        | \n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");			if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYGR        |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYGR_       |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYGRI       |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    | \n");
printf("                                                                          |     PLAYGRI_      |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                                WELCOME TO     \n");
printf("                                                                                PLAYGRID      \n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                                WELCOME TO     \n");
printf("                                                                                PLAYGRID      \n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLAYGRID      |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                                WELCOME TO     \n");
printf("                                                                                PLAYGRID      \n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLAYGRID      |\n");
printf("                                                                          ---------------------\n");
usleep(AS);
system("cls");	if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                                WELCOME TO     \n");
printf("                                                                                PLAYGRID       \n");
usleep(AS);
system("cls");		if(kbhit() != 0) {
           AS=0;
        } 
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLAYGRID      |\n");
printf("                                                                          ---------------------\n");
usleep(AS);

return menu();
}

int menu()
{
	int choos;
system("cls");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                                                                          ---------------------\n");
printf("                                                                          |     WELCOME TO    |\n");
printf("                                                                          |     PLAYGRID      |\n");
printf("                                                                          ---------------------\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("You can press any key to speed up animation of tank\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("\n");
printf("                       Choose whatever you like!!!\n");
printf("                       1. Tik Tac Toe \n");
printf("                       2. Hangman\n");
printf("                       3. Random maze\n");
printf("                       4. minecone\n");
printf("                       5. stop watch\n");
printf("                       6. Exit\n");
printf("\t\t\t\t\t\t\t\t\t BY:-- HRITIK GAIRE");
milena:
printf("\n");
printf("\n");
printf("                       ---------> ");
fflush(stdin);
scanf("%d",&choos);
fflush(stdin);
printf("\n");
                                                 //goto tik
if(choos==1)
{
	
	return tik();

}
                                                 //goto han
if(choos==2)
{
	return han();

}
                                                 //goto ta
if(choos==3)
{
	return mazee();

}
                                             // goto minecone 
if(choos==4)
{
	return mn();

}
                                                 //goto st
if(choos==5)
{
	return st();

}
                                                 //goto exi
if(choos==6)
{
	return 0;

}
                                                 

if(choos!=1&&choos!=2&&choos!=3&&choos!=4&&choos!=5&&choos!=6)
{
	printf("invalid choise \n");
	sleep (1);
menu();
fflush(stdin);


}

    return 0;
}
int mn() {
    
	int  up,b, c,  i, al;
int  iiii, a,  aa, bb, cc, dd, ee, ff, gg, hh, ii, aaaaaa, bbbb, cccc, random, blasting;
int aaa=1;
	int bbb=2;
	int ccc=3;
	int ddd=4;
	int eee=5;
	int fff=6;
	int ggg=7;
	int hhh=8;
	int iii=9;
    system("cls");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");

    printf("                                                                          ------WELCOME------ \n ");
    printf("                                                                          ---TO MINECON--- \n");
    printf("                                                         There are numbers, and behind some numbers, there are some bombs \n");
    printf("                                                               So be careful!!! Selecting those numbers \n");
    printf("                                                              There are three game levels in this game \n");
    printf("                                                        Level 1 has 1 bomb, level 2 has 2 bombs, and level 3 has 3 bombs \n ");
    sleep(7);
    system("cls");
    printf("ok,let's start");
    sleep(2);
    system("cls");
      
    	
    printf("                                                                                                    \n");
    printf("For level 1 select no 1, for level 2 select no 2, and for level 3 select no 3 \n");
    scanf("%d", &al);
    if(al==1){
	  system("cls");
    int aaa = 1, bbb = 2, ccc = 3, ddd = 4, eee = 5, fff = 6, ggg = 7, hhh = 8, iii = 9;

    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                        ***********************   \n");
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
    printf("                                                                        ***********************   \n");

    // Random number generator
    srand(time(NULL));
    for (iiii = 1; iiii <= 3; iiii++) {
        do {
            random = (rand() % 9) + 1; // to generate numbers 1 to 9
        } while (
            (iiii == 2 && random == aaaaaa) ||
            (iiii == 3 && (random == aaaaaa))
        );

        if (iiii == 1) {
            aaaaaa = random;
        }
    }
    // Random number end
     // Loop for number input
    for (i = 1; i < 9; i++) {
    up:
    	;
        printf("Enter a number (1 to 9): ");
        scanf("%d", &a);
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                        ***********************   \n");
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
        printf("                                                                        ***********************   \n");

        if (a < 0 || a > 10 || (i > 1 && (a == aa || a == bb || a == cc || a == dd || a == ee || a == ff || a == gg || a == hh || a == ii))) {
            printf("Invalid number. Please enter a different number between 1 to 9.\n");
            goto up;
        }

        if (i == 1) {
            aa = a;
            if (aaaaaa == aa) {
                goto theend;
            }
        }
        if (i == 2) {
            bb = a;
            if (aaaaaa == bb) {
                goto theend;
            }
        }
        if (i == 3) {
            cc = a;
            if (aaaaaa == cc) {
                goto theend;
            }
        }
        if (i == 4) {
            dd = a;
            if (aaaaaa == dd) {
                goto theend;
            }
        }
        if (i == 5) {
            ee = a;
            if (aaaaaa == ee) {
                goto theend;
            }
        }
        if (i == 6) {
            ff = a;
            if (aaaaaa == ff) {
                goto theend;
            }
        }
        if (i == 7) {
            gg = a;
            if (aaaaaa == gg) {
                goto theend;
            }
        }
        if (i == 8) {
            hh = a;
            if (aaaaaa == hh) {
                goto theend;
            }
        }
        if (i == 9) {
            ii = a;
            if (aaaaaa == ii) {
                goto theend;
            }
        }
        if (a == aaa) {
            aaa = 0;
        }
        if (a == bbb) {
            bbb = 0;
        }
        if (a == ccc) {
            ccc = 0;
        }
        if (a == ddd) {
            ddd = 0;
        }
        if (a == eee) {
            eee = 0;
        }
        if (a == fff) {
            fff = 0;
        }
        if (a == ggg) {
            ggg = 0;
        }
        if (a == hhh) {
            hhh = 0;
        }
        if (a == iii) {
            iii = 0;
        }

        printf("Number confirmed. Wait...\n");
        sleep(1);
        system("cls");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                        ***********************   \n");
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
        printf("                                                                        ***********************   \n");
    }
    // Number input end
    printf("Congratulations!!! You won \n");

    // Bomb blast start
    if (blasting == 99) {
        theend:
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                        *    *    *                                                                \n");
        printf("                                      *  1    2    3 *\n");
        printf("                                      *  4    *    6 *\n");
        printf("                                      *  7    8    9 *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                        *         *                                                               \n");
        printf("                                       * 1    *    3 *\n");
        printf("                                        *    *    * \n");
        printf("                                       * 7    *    9 *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                                \n");
        printf("                                        *    *    *\n");
        printf("                                        *    *    *\n");
        printf("                                        *    *    *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                                \n");
        printf("                                        *    *    *\n");
        printf("                                        BOOM!!!!!!!!\n");
        printf("                                        *    *    *\n");
        sleep(3);
        system("cls");
        printf("YOU LOST!!! \n");
    }   
}
	
if(al==2){
	 system("cls");
    int aaa = 1;
    int bbb = 2;
    int ccc = 3;
    int ddd = 4;
    int eee = 5;
    int fff = 6;
    int ggg = 7;
    int hhh = 8;
    int iii = 9;
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                        ***********************   \n");
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
    printf("                                                                        ***********************   \n");

    // Random number generator
    srand(time(NULL));
    for (iiii = 1; iiii <= 2; iiii++) {
        do {
            random = (rand() % 9) + 1; // to generate numbers 1 to 9
        } while (
            (iiii == 2 && random == aaaaaa) ||
            (iiii == 3 && (random == aaaaaa))
        );

        if (iiii == 1) {
            aaaaaa = random;
        } if (iiii == 2) {
            bbbb = random;
        }
    }
    // Random number end
    

    // Loop for number input
    for (i = 1; i < 8; i++) {
    upp:
        printf("Enter a number (1 to 9): ");
        scanf("%d", &a);
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                        ***********************   \n");
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
        printf("                                                                        ***********************   \n");

        if (a < 0 || a > 10 || (i > 1 && (a == aa || a == bb || a == cc || a == dd || a == ee || a == ff || a == gg || a == hh || a == ii))) {
            printf("Invalid number. Please enter a different number between 1 to 9.\n");
            goto upp;
        }

        if (i == 1) {
            aa = a;
            if (aaaaaa == aa || bbbb == aa) {
                goto ttheend;
            }
        }
        if (i == 2) {
            bb = a;
            if (aaaaaa == bb || bbbb == bb) {
                goto ttheend;
            }
        }
        if (i == 3) {
            cc = a;
            if (aaaaaa == cc || bbbb == cc) {
                goto ttheend;
            }
        }
        if (i == 4) {
            dd = a;
            if (aaaaaa == dd || bbbb == dd) {
                goto ttheend;
            }
        }
        if (i == 5) {
            ee = a;
            if (aaaaaa == ee || bbbb == ee) {
                goto ttheend;
            }
        }
        if (i == 6) {
            ff = a;
            if (aaaaaa == ff || bbbb == ff) {
                goto ttheend;
            }
        }
        if (i == 7) {
            gg = a;
            if (aaaaaa == gg || bbbb == gg) {
                goto ttheend;
            }
        }
        if (i == 8) {
            hh = a;
            if (aaaaaa == hh || bbbb == hh) {
                goto ttheend;
            }
        }
        if (i == 9) {
            ii = a;
            if (aaaaaa == ii || bbbb == ii) {
                goto ttheend;
            }
        }
        if (a == aaa) {
            aaa = 0;
        }
        if (a == bbb) {
            bbb = 0;
        }
        if (a == ccc) {
            ccc = 0;
        }
        if (a == ddd) {
            ddd = 0;
        }
        if (a == eee) {
            eee = 0;
        }
        if (a == fff) {
            fff = 0;
        }
        if (a == ggg) {
            ggg = 0;
        }
        if (a == hhh) {
            hhh = 0;
        }
        if (a == iii) {
            iii = 0;
        }

        printf("Number confirmed. Wait...\n");
        sleep(1);
        system("cls");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                                                    \n");
        printf("                                                                        ***********************   \n");
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", aaa, bbb, ccc);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ddd, eee, fff);
        printf("                                                                          |  %d  |  %d  |  %d  |   \n", ggg, hhh, iii);
        printf("                                                                        ***********************   \n");
    }
    // Number input end
    printf("Congratulations!!! You won \n");

    // Bomb blast start
    if (blasting == 99) {
        ttheend:
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                        *    *    *                                                                \n");
        printf("                                      *  1    2    3 *\n");
        printf("                                      *  4    *    6 *\n");
        printf("                                      *  7    8    9 *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                        *         *                                                               \n");
        printf("                                       * 1    *    3 *\n");
        printf("                                        *    *    * \n");
        printf("                                       * 7    *    9 *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                                \n");
        printf("                                        *    *    *\n");
        printf("                                        *    *    *\n");
        printf("                                        *    *    *\n");
        sleep(1);
        system("cls");
        printf("                                                                                                                \n");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                               \n ");
        printf("                                                                                                                \n");
        printf("                                        *    *    *\n");
        printf("                                        BOOM!!!!!!!!\n");
        printf("                                        *    *    *\n");
        sleep(3);
        system("cls");
        printf("YOU LOST!!! \n");
    }
}

if (al==3){
	system("cls");
	printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                        ***********************   \n");                   
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",aaa,bbb,ccc);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ddd,eee,fff); 
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ggg,hhh,iii);
    printf("                                                                        ***********************   \n");
 // Random number generator
 srand(time(NULL));
    for (iiii = 1; iiii <= 3; iiii++) {
        do {
            random = (rand() % 9) + 1; // to generate numbers 1 to 9
        } while (
            (iiii == 2 && random == aaaaaa) || 
            (iiii == 3 && (random == aaaaaa || random == bbbb))
        );

        if (iiii == 1) {
            aaaaaa = random;
        }  if (iiii == 2) {
            bbbb = random;
        }if (iiii == 3) {
            cccc = random;
        }
    }
    // Random number end
    
   // Loop for number input
    for (i = 1; i < 7; i++) {
    uppp:
        printf("Enter a number (1 to 9): ");
        scanf("%d", &a);
        printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                        ***********************   \n");                   
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",aaa,bbb,ccc);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ddd,eee,fff); 
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ggg,hhh,iii);
    printf("                                                                        ***********************   \n");

        if (a < 1 || a > 9 || (i > 1 && (a == aa || a == bb || a == cc || a == dd || a == ee || a == ff || a == gg || a == hh || a == ii))) {
            printf("Invalid number. Please enter a different number between 1 to 9.\n");
            goto uppp;
        }

        if (i == 1) {
            aa = a;
            if (aaaaaa == aa || bbbb == aa || cccc == aa) {
                goto tttheend;
            }
        }
        if (i == 2) {
            bb = a;
            if (aaaaaa == bb || bbbb == bb || cccc == bb) {
                goto tttheend;
            }
        }
        if (i == 3) {
            cc = a;
            if (aaaaaa == cc || bbbb == cc || cccc == cc) {
                goto tttheend;
            }
        }
        if (i == 4) {
            dd = a;
            if (aaaaaa == dd || bbbb == dd || cccc == dd) {
                goto tttheend;
            }
        }
        if (i == 5) {
            ee = a;
            if (aaaaaa == ee || bbbb == ee || cccc == ee) {
                goto tttheend;
            }
        }
        if (i == 6) {
            ff = a;
            if (aaaaaa == ff || bbbb == ff || cccc == ff) {
                goto tttheend;
            }
        }
        if (i == 7) {
            gg = a;
            if (aaaaaa == gg || bbbb == gg || cccc == gg) {
                goto tttheend;
            }
        }
        if (i == 8) {
            hh = a;
            if (aaaaaa == hh || bbbb == hh || cccc == hh) {
                goto tttheend;
            }
        }
        if (i == 9) {
            ii = a;
            if (aaaaaa == ii || bbbb == ii || cccc == ii) {
                goto tttheend;
            }
        }
        if(a==aaa){
		aaa=0;
	}
	if(a==bbb){
		bbb=0;
	}
	if(a==ccc){
		ccc=0;
	}
	if(a==ddd){
		ddd=0;
	}
	if(a==eee){
		eee=0;
	}
	if(a==fff){
		fff=0;
	}
	if(a==ggg){
		ggg=0;
	}
	if(a==hhh){
		hhh=0;
	}
	if(a==iii){
		iii=0;
	}

        printf("Number confirmed. Wait...\n");
        sleep(1);
        system("cls");
        printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                                                    \n");
    printf("                                                                        ***********************   \n");                   
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",aaa,bbb,ccc);
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ddd,eee,fff); 
    printf("                                                                          |  %d  |  %d  |  %d  |   \n",ggg,hhh,iii);
    printf("                                                                        ***********************   \n");
    }
    // Number input end
    printf("congratulations!!!You won \n ");

// Bomb blast start
if(blasting==99){
tttheend:
	sleep(1);
	system("cls");
    printf("                                                                                                                \n");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                        *    *    *                                                                \n");
    printf("                                      *  1    2    3 *\n");
    printf("                                      *  4    *    6 *\n");
    printf("                                      *  7    8    9 *\n");
    sleep(1);
    system("cls");
    printf("                                                                                                                \n");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                        *         *                                                               \n");
    printf("                                       * 1    *    3 *\n");
    printf("                                        *    *    * \n");
    printf("                                       * 7    *    9 *\n");
    sleep(1);
    system("cls");
    printf("                                                                                                                \n");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                                \n");
    printf("                                        *    *    *\n");
    printf("                                        *    *    *\n");
    printf("                                        *    *    *\n");
    sleep(1);
    system("cls");
    printf("                                                                                                                \n");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                               \n ");
    printf("                                                                                                                \n");
    printf("                                        *    *    *\n");
    printf("                                        BOOM!!!!!!!!\n");
    printf("                                        *    *    *\n");
    sleep(3);
    system("cls");
    printf("YOU LOST!!! \n ");
}
}
 return 0;

}
                                                          //tac
int tik()
{
	{
		
int acb();
char a='a',b='b',c='c',d='d',e='e',f='f',g='g',h='h',i='i',in,n,n3,cb,tst=0,av=99;
	int op,loo,lo,to,win,win2;
 int tich=0;
 system("cls");
 printf("Enter the letter of the place where you want to play!! ");

 sleep(3);

    
system("cls");

// start
printf("Do you have friends \n");
printf("\t yes: 1\n");
printf("\t no: 0");
scanf("%d",&cb);

if(cb==1){
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);




	printf("Turn for 'x'");
		in1:
	scanf("%c",&in);
	if(in=='a'&&a!='x'&&a!='o')
	{
		a='x';
	}
	else if (in=='b'&&b!='x'&&b!='o')
	{
		b='x';
	}
	else if (in=='c')
	{
		c='x';
	}
	else if (in=='d')
	{
		d='x';
	}
	else if (in=='e')
	{
		e='x';
	}
	else if (in=='f')
	{
		f='x';
}
else if (in=='g')
	{
		g='x';
	}
	else if (in=='h')
	{
		h='x';
	}
	else if (in=='i')
	{
		i='x';
	}
	else
	{
		goto in1;
			system("cls");
		printf("invalid choise");
	}


	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);




	printf("Turn for 'o'\n");
		in2:
	scanf("%c",&in);
	if(in=='a')
	{
		a='o';
	}
	else if (in=='b')
	{
		b='o';
	}
	else if (in=='c')
	{
		c='o';
	}
	else if (in=='d')
	{
		d='o';
	}
	else if (in=='e')
	{
		e='o';
	}
	else if (in=='f')
	{
		f='o';
}
else if (in=='g')
	{
		g='o';
	}
	else if (in=='h')
	{
		h='o';
	}
	else if (in=='i')
	{
		i='o';
	}
	else
	{
		goto in2;
			system("cls");
		printf("invalid choise");
	}
  if (a=='o'&&b=='o'&&c=='o'||d=='o'&&f=='o'&&e=='o'||i=='o'&&h=='o'&&g=='o'||a=='o'&&e=='o'&&i=='o'||g=='o'&&e=='o'&&c=='o'||a=='o'&&g=='o'&&d=='o'||e=='o'&&b=='o'&&h=='o'||f=='o'&&i=='o'&&c=='o')
{
	goto win2;
}
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);



	printf("Turn for 'x'");
		in3:
	scanf("%c",&in);
	if(in=='a')
	{
		a='x';
	}
	else if (in=='b')
	{
		b='x';
	}
	else if (in=='c')
	{
		c='x';
	}
	else if (in=='d')
	{
		d='x';
	}
	else if (in=='e')
	{
		e='x';
	}
	else if (in=='f')
	{
		f='x';
}
else if (in=='g')
	{
		g='x';
	}
	else if (in=='h')
	{
		h='x';
	}
	else if (in=='i')
	{
		i='x';
	}
	else
	{
		goto in3;
		system("cls");
		printf("invalid choise");
	}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);



	printf("Turn for 'o'\n");
			in4:
	scanf("%c",&in);
	if(in=='a')
	{
		a='o';
	}
	else if (in=='b')
	{
		b='o';
	}
	else if (in=='c')
	{
		c='o';
	}
	else if (in=='d')
	{
		d='o';
	}
	else if (in=='e')
	{
		e='o';
	}
	else if (in=='f')
	{
		f='o';
}
else if (in=='g')
	{
		g='o';
	}
	else if (in=='h')
	{
		h='o';
	}
	else if (in=='i')
	{
		i='o';
	}
	else
	{
		goto in4;
			system("cls");
		printf("invalid choise");
	}
	if (a=='o'&&b=='o'&&c=='o'||f=='o'&&d=='o'&&e=='o'||i=='o'&&h=='o'&&g=='o'||a=='o'&&e=='o'&&i=='o'||g=='o'&&e=='o'&&c=='o'||a=='o'&&g=='o'&&d=='o'||e=='o'&&b=='o'&&h=='o'||f=='o'&&i=='o'&&c=='o')
{
	goto win2;
}
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);

	printf("Turn for 'x'");
	 in5:
	scanf("%c",&in);
	if(in=='a')
	{
		a='x';
	}
	else if (in=='b')
	{
		b='x';
	}
	else if (in=='c')
	{
		c='x';
	}
	else if (in=='d')
	{
		d='x';
	}
	else if (in=='e')
	{
		e='x';
	}
	else if (in=='f')
	{
		f='x';
}
else if (in=='g')
	{
		g='x';
	}
	else if (in=='h')
	{
		h='x';
	}
	else if (in=='i')
	{
		i='x';
	}
	else
	{
		goto in5;
			system("cls");
		printf("invalid choise");
	}
	if (a=='x'&&b=='x'&&c=='x'||f=='x'&&d=='x'&&e=='x'||i=='x'&&h=='x'&&g=='x'||a=='x'&&e=='x'&&i=='x'||g=='x'&&e=='x'&&c=='x'||a=='x'&&g=='x'&&d=='x'||e=='x'&&b=='x'&&h=='x'||f=='x'&&i=='x'&&c=='x')
{
	goto win;
}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);



	printf("Turn for 'o'\n");
		in6:
	scanf("%c",&in);
	if(in=='a')
	{
		a='o';
	}
	else if (in=='b')
	{
		b='o';
	}
	else if (in=='c')
	{
		c='o';
	}
	else if (in=='d')
	{
		d='o';
	}
	else if (in=='e')
	{
		e='o';
	}
	else if (in=='f')
	{
		f='o';
}
else if (in=='g')
	{
		g='o';
	}
	else if (in=='h')
	{
		h='o';
	}
	else if (in=='i')
	{
		i='o';
	}
	else
	{
		goto in6;
			system("cls");
		printf("invalid choise");
	}
	if (a=='o'&&b=='o'&&c=='o'||f=='o'&&d=='o'&&e=='o'||i=='o'&&h=='o'&&g=='o'||a=='o'&&e=='o'&&i=='o'||g=='o'&&e=='o'&&c=='o'||a=='o'&&g=='o'&&d=='o'||e=='o'&&b=='o'&&h=='o'||f=='o'&&i=='o'&&c=='o')
{
	goto win2;
}
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);

	printf("Turn for 'x'");
	 in7:
	scanf("%c",&in);
	if(in=='a')
	{
		a='x';
	}
	else if (in=='b')
	{
		b='x';
	}
	else if (in=='c')
	{
		c='x';
	}
	else if (in=='d')
	{
		d='x';
	}
	else if (in=='e')
	{
		e='x';
	}
	else if (in=='f')
	{
		f='x';
}
else if (in=='g')
	{
		g='x';
	}
	else if (in=='h')
	{
		h='x';
	}
	else if (in=='i')
	{
		i='x';
	}
	else
	{
		goto in7;
			system("cls");
		printf("invalid choise");
	}
	if (a=='x'&&b=='x'&&c=='x'||f=='x'&&d=='x'&&e=='x'||i=='x'&&h=='x'&&g=='x'||a=='x'&&e=='x'&&i=='x'||g=='x'&&e=='x'&&c=='x'||a=='x'&&g=='x'&&d=='x'||e=='x'&&b=='x'&&h=='x'||f=='x'&&i=='x'&&c=='x')
{
	goto win;
}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);

	printf("Turn for 'o'\n");
	in8:
	scanf("%c",&in);
	if(in=='a')
	{
		a='o';
	}
	else if (in=='b')
	{
		b='o';
	}
	else if (in=='c')
	{
		c='o';
	}
	else if (in=='d')
	{
		d='o';
	}
	else if (in=='e')
	{
		e='o';
	}
	else if (in=='f')
	{
		f='o';
}
else if (in=='g')
	{
		g='o';
	}
	else if (in=='h')
	{
		h='o';
	}
	else if (in=='i')
	{
		i='o';
	}
	else
	{
		goto in8;
			system("cls");
		printf("invalid choise");
	}
	if (a=='o'&&b=='o'&&c=='o'||f=='o'&&d=='o'&&e=='o'||i=='o'&&h=='o'&&g=='o'||a=='o'&&e=='o'&&i=='o'||g=='o'&&e=='o'&&c=='o'||a=='o'&&g=='o'&&d=='o'||e=='o'&&b=='o'&&h=='o'||f=='o'&&i=='o'&&c=='o')
{
	goto win2;
}
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);

	printf("Turn for 'x'");
	 in9:
	scanf("%c",&in);
	if(in=='a')
	{
		a='x';
	}
	else if (in=='b')
	{
		b='x';
	}
	else if (in=='c')
	{
		c='x';
	}
	else if (in=='d')
	{
		d='x';
	}
	else if (in=='e')
	{
		e='x';
	}
	else if (in=='f')
	{
		f='x';
}
else if (in=='g')
	{
		g='x';
	}
	else if (in=='h')
	{
		h='x';
	}
	else if (in=='i')
	{
		i='x';
	}
	else
	{
		goto in9;
			system("cls");
		printf("invalid choise");
	}
	if (a=='x'&&b=='x'&&c=='x'||f=='x'&&d=='x'&&e=='x'||i=='x'&&h=='x'&&g=='x'||a=='x'&&e=='x'&&i=='x'||g=='x'&&e=='x'&&c=='x'||a=='x'&&g=='x'&&d=='x'||e=='x'&&b=='x'&&h=='x'||f=='x'&&i=='x'&&c=='x')
{
	goto win;
}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
	printf("\n TIE \n");
	if (loo==11){
		win:
		system("cls");
		printf("X WON");
	}
	if(lo==11)
	{
		win2:
			system("cls");
			printf("O won");
	}
return 56;
}


                                                                      // new bot 

if(cb==0)
{
 bot();
}
return 0;

}


        }              
		                                                //hang
int han()
{
	system("cls");
	int i,j=0,jj,won,in,ii,t,h=0,ck1=0,ck2=0,ck3=0,ck4=0,ck5=0,ck6=0,v1,v2,v3,v4,v5,v6,da=8;
	char aa,bb,cc,dd,ee,ff,a,b,c,d,e,f,g=4,val[]="_ _ _ _ _ _ ";
	fflush(stdin);
	printf("Enter six alphabet word for your opponent \n");
scanf("%c%c%c%c%c%c",&a,&b,&c,&d,&e,&f);
fflush(stdin);
printf("Now turn for your opponent \n");
sleep(1);
system("cls");
printf("Now guess the woord alphabate wise alphabet\n");
printf("\n%s\n",val);



for(i=1;i<=8;i++)
{

	fflush(stdin);
	scanf("%c",&g);
fflush(stdin);
if(val[0]==g||val[2]==g||val[4]==g||val[6]==g||val[8]==g||val[10]==g)
{

}


 if(g==a&&ck1==0)
	{
val[0]=a;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck1++;
i--;

	}


	else if(g==b&&ck2==0)
	{
val[2]=b;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck2++;
i--;

	}

	else if(g==c&&ck3==0)
	{
val[4]=c;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck3++;
i--;

	}

else if(g==d&&ck4==0)
	{
val[6]=d;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck4++;
i--;

	}

else if(g==e&&ck5==0)
	{
val[8]=e;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck5++;
i--;


	}


else if(g==f&&ck6==0)
	{
val[10]=f;
system("cls");
printf("\n");
puts(val);
printf("\n");
j++;
ck6++;
i--;

	}
	else
	{
		h++;

	}


if(j==6)
{
	goto won;
}
if(h==1)
{


system("cls");
printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O        \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");

}
if(h==2)
{
	system("cls");
	printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O       \n");
printf("|          |       \n");
printf("|          |       \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");

}
if(h==3)
{
	system("cls");
	printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O        \n");
printf("|         /|        \n");
printf("|          |        \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");

}
if(h==4)
{
	system("cls");
	printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O        \n");
printf("|         /|\\        \n");
printf("|          |        \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");

}
if(h==5)
{
	system("cls");
	printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O        \n");
printf("|         /|\\        \n");
printf("|          |        \n");
printf("|         /        \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");

}
if(h==6)
{
	system("cls");
	printf("\n");
puts(val);
printf("\n");
printf("|------------  \n");
printf("|          |   \n");
printf("|          O        \n");
printf("|         /|\\        \n");
printf("|          |        \n");
printf("|         / \\       \n");
printf("|                  \n");
printf("|                  \n");
printf("|                  \n");
printf("^^^^^^^^^^^^^^^^^^^ \n");
goto mama;
}

}




{
l:
	mama:
printf("YOU LOOSE");
}
if(jj==1111)
{
	won:
	printf("You guessed the word\n ");
}
	return 0;
}
int mazee(){
	path();
		sleep(1);
	gimic ();


	int p=1,q=1,pc=1,qc=1;
	 char move;	 
	 	 system("cls");
    printf("Maze Game!\nUse W (up), S (down), A (left), D (right) to move.\n");
    Maze_Printer();
      while (1) {
        if (kbhit()) {              
            move = getch();         

            int nR = pR;    // nR nC is the position of player
            int nC = pC;

            if (move == 'w'||move == 'W'||move==72) nR--;
            else if (move == 's'||move == 'S'||move==80) nR++;
            else if (move == 'a'||move == 'a'||move==75) nC--;
            else if (move == 'd'||move == 'd'||move==77) nC++;
            if(maze[nR][nC] == 'E')
			{
				system("cls");
				 Maze_Printer();
			printf("you won");
			break;
			 }
             if (maze[nR][nC] == ' ' || maze[nR][nC] == 'E') {

            
            maze[pR][pC] = ' ';
            pR = nR;
            pC = nC;
            maze[pR][pC] = 'P';
            
            {           //mz print
            		system("cls");   
        Maze_Printer();
			}
        } 
		else {
			system("cls"); // mz print
        Maze_Printer();
            printf("You hit a wall!\n");
        }

       
}
}
	return 0;
}
                                                            //stopwatch
int st()
{
	int sec=0,hr=0,min=0;
	mathi:
		sec=0;
	while(sec!=60)
	{
		sec=sec+1;
	sleep(1);
	system("cls");
		printf("%d:%d:%d",hr,min,sec);
	}
	min=min+1;
	if(min==60)
	{
		hr=hr+1;
	}
	if(hr==13)
	{
		hr=1;
	}
	goto mathi;
	
return 0;
}
                                                      //functions

	int bot()
{
	char a='a',b='b',c='c',d='d',e='e',f='f',g='g',h='h',i='i',in,n,n3,cb,tst=0,av=99;
	int op,loo,lo,to;
	int w1=0,w11=0,w2=0,w22=0,w3=0,w33=0,w4=0,w5=0;
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);





		a='x';

	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);


// 1st 


	printf("Bot played your turn  'o'\n");
			in4:
	scanf("%c",&in);
	if(in=='b')
	{
		b='o';
		g='x';
		w1++;
		
	}

	else if (in=='c')
	{
		c='o';
			i='x';
						w2++;
	}
	else if (in=='d')
	{
		d='o';
		c='x';
			w11++;
	}
	else if (in=='e')
	{
		e='o';
		g='x';
		//                         hard part  
w5++;
	}
	else if (in=='f')
	{
		f='o';
		g='x';
				w3++;
}
else if (in=='g')
	{
		g='o';
		i='x';
				w22++;
	}
	else if (in=='h')
	{
		h='o';
		g='x';
				w33++;
	}
	else if (in=='i')
	{
		i='o';
		g='x';
				w4++;
	}
	else
	{
		goto in4;
			system("cls");
		printf("invalid choise");
	}
	if (a=='o'&&b=='o'&&c=='o'||f=='o'&&d=='o'&&e=='o'||i=='o'&&h=='o'&&g=='o'||a=='o'&&e=='o'&&i=='o'||g=='o'&&e=='o'&&c=='o'||a=='o'&&g=='o'&&d=='o'||e=='o'&&b=='o'&&h=='o'||f=='o'&&i=='o'&&c=='o')
{
	goto win2;
	
}
//                                                                  second play
{ 
fflush(stdin);
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
	printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		                                                     //w1 ro 1                                 
	if(w1==1)
	{
		if(in=='d')
		{
			d='o';
			i='x';
			
		}
		if(in!='d')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			d='x';
			goto win;
		}
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='h')
		{
			h='o';
			e='x';
			goto win;
		}
		if(in=='e')
		{
			e='o';
			h='x';
			goto win;
		}
				if(in=='f')
		{
			e='o';
			h='x';
			goto win;
		}
					if(in=='c')
		{
			e='o';
			h='x';
			goto win;
		}
	}
                                                                            	// w11
                        	if(w11==1)
	{
		if(in=='b')
		{
			b='o';
			i='x';	
	
		}
		if(in!='b')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			b='x';		
			goto win;
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='e')
		{
			e='o';
	f='x';
			goto win;
		}
		if(in=='f')
		{
			f='o';
			e='x';
			goto win;
		}
		if(in=='g')
		{
			g='o';
			e='x';
		}
		if(in=='h')
		{
				h='o';
			f='x';
		}
		
	} 
	 
	                                                                                            // w2
	if (w2==1)
	{
		if(in=='e')
		{
			e='o';
			g='x';	
	
		}
		if(in!='e')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			e='x';		
				
			goto win;
		}
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='d')
		{
			d='o';
	h='x';
			goto win;
		}
		if(in=='h')
		{
			h='o';
			d='x';
			goto win;
		}
		if(in=='b')
		{
			b='o';
			d='x';
		}
		if(in=='f')
		{
				f='o';
			h='x';
		}
	}
	                                                    //w22
	if (w22==1)
	{
		if(in=='e')
		{
			e='o';
			c='x';	
	
		}
		if(in!='e')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			e='x';		
				
			goto win;
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='b')
		{
			b='o';
	f='x';
			goto win;
		}
		if(in=='f')
		{
			f='o';
			b='x';
			goto win;
		}
		if(in=='d')
		{
			d='o';
			b='x';
		}
		if(in=='h')
		{
				h='o';
			f='x';
		}
	}
	                                                               //w3
 	if (w3==1)
	{
		if(in=='d')
		{
			d='o';
			e='x';	
	
		}
		if(in!='d')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			d='x';		
				
			goto win;
		}
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='b')
		{
			b='o';
	c='x';
			goto win;
		}
		if(in=='h')
		{
			h='o';
			i='x';
			goto win;
		}
		if(in=='i')
		{
			i='o';
			c='x';
		}
		if(in=='c')
		{
				c='o';
			i='x';
		}
	}
	                                                //w33
	 	if (w33==1)
	{
		if(in=='d')
		{
			d='o';
			c='x';	
	
		}
		if(in!='d')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			d='x';		
				
			goto win;
		}
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='e')
		{
			e='o';
	b='x';
			goto win;
		}
		if(in=='b')
		{
			b='o';
			e='x';
			goto win;
		}
		if(in=='f')
		{
			f='o';
			b='x';
		}
		if(in=='i')
		{
				i='o';
			e='x';
		}
	}
	                                                                //w4
 	if (w4==1)
	{
		if(in=='d')
		{
			d='o';
			c='x';	
	
		}
		if(in!='d')
		{
			if(in=='a')
{
a='o';
}
if(in=='b')
{
b='o';
}
if(in=='c')
{
c='o';
}
if(in=='d')
{
d='o';
}
if(in=='e')
{
e='o';
}
if(in=='f')
{
f='o';
}if(in=='g')
{
g='o';
}
if(in=='h')
{
h='o';
}
if(in=='i')
{
i='o';
}

			d='x';		
				
			goto win;
		}
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	
		
		if(in=='e')
		{
			e='o';
	b='x';
			goto win;
		}
		if(in=='b')
		{
			b='o';
			e='x';
			goto win;
		}
		if(in=='f')
		{
			f='o';
			b='x';
		}
		if(in=='h')
		{
				h='o';
			e='x';
		}
	}
	                                                                       //w5           hard part middle 
	 	                                                //w5
	 	if (w5==1)
	{
if(in=='d'){

d='o';
f='x';
}
if(in!='d'){
d='x';
goto win;
}
	system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	if(in=='h')
	{
		h='o';
		b='x';
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	if (in=='c')
	{
		c='o';
		i='x';
		goto dr;
	}
		if (in=='i')
	{
		i='o';
		c='x';
		goto win;
	}
	}
	
	if(in=='i')
	{
		i='o';
		c='x';
				system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	if(in=='b')
	{
		b='o';
		h='x';
		goto dr;
	}
		if(in=='h')
	{
		h='o';
		b='x';
		goto win;
	}
	}
	if(in=='b')
	{
	b='o';
	h='x';
				system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	if(in=='i')
	{
		i='o';
		c='x';
		goto dr;
	}
			if(in=='c')
	{
		c='o';
		i='x';
		goto win;
	}	
	}
	if(in=='c')
	{
	c='o';
	i='x';
				system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("Bot played your turn  'o'\n");
		fflush(stdin); 
	scanf("%c",&in);
	fflush(stdin); 
	if(in=='h')
	{
		h='o';
		b='x';
		goto dr;
	}
		if(in=='b')
	{
		b='o';
		h='x';
		goto win;
	}
	}
	}
	                                                                       
}

// win screen 
dr:
		system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
	printf("\n TIE \n");
	if (loo==11){
		win:
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
		printf("You will never win because I never coded a win screen.");
		return 0;
	}
	if(lo==11)
	{
		win2:
			system("cls");
		printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",a,b,c);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",d,e,f);
	printf("\t\t\t\t\t\t\t\t\t -------------\n");
	printf("\t\t\t\t\t\t\t\t\t   %c | %c | %c \n",g,h,i);
			printf("O won");
	}
	return 0;
}
void gimic() {
    int r, c;
    int target_EmptySpaces = 250;
    int current_EmptySpaces = 0;
    int timeout = 0;

    srand(time(NULL));


    for(r = 0; r < Row; r++) {
        for(c = 0; c < Column; c++) {
            if(maze[r][c] == ' ' || maze[r][c] == 'P' || maze[r][c] == 'E') 
                current_EmptySpaces++;
        }
    }


    while (current_EmptySpaces < target_EmptySpaces && timeout < 10000) {
        timeout++;
        

        r = (rand() % (Row - 2)) + 1;
        c = (rand() % (Column - 2)) + 1;

        if (maze[r][c] == '#') {
            int neighbors = 0;
  
            if (maze[r-1][c] == ' ') neighbors++;
            if (maze[r+1][c] == ' ') neighbors++;
            if (maze[r][c-1] == ' ') neighbors++;
            if (maze[r][c+1] == ' ') neighbors++;

    
            if (neighbors == 1) {
                maze[r][c] = ' ';
                current_EmptySpaces++;
            }
        }
    }
    
  

}
void  Maze_Printer() {            // just to print maze 
    for(int i=0;i<Row;i++) {
        for(int j=0;j<Column;j++) {
            printf("%c ", maze[i][j]);
        }
        printf("\n");
    }
}
void path ()             // creats a actual path 
{
	int p=1,q=1,p_check=1,q_check=1;
	srand(time(NULL));
	 while (p!=21||q!=21){
usleep(16600);
	
		system("cls");
				 Maze_Printer();
	 int random = (rand() % 10) + 1;
	 printf("%d", random);
	 if(random==2||random==3)
	 {
	 	maze[p][q]=' ';
	 	 p++;
	 	p_check++;
}
	 if(random==1)
	 {
	 	maze[p][q]=' ';
	 	 
	 	 q++;
	 	q_check++;
}
if(p_check==20||q_check==20)
{
	maze[p][q]='E';
	system("cls");
 Maze_Printer();
break;	
}
}
}

