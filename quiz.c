#include <stdio.h>
int main()
{
    int i;
    int ans;
    int choice;
    int count =0;
    printf("Welcome to the Quiz Game \n\n");
    printf("---> Press 1 to start the game \n");
    printf("---> Press 0 to quit the game \n");
    scanf("%d",&i);
    if(i==1)
    {
        printf("\t\t\t\t--------------The game has started--------------\n\n\n\n\n");
    }
    else if(i==0)
    {
        printf("The game has ended\n\n");
    }
    else
    {
        printf("Invalid number\n\n");
    }

    if(i==1)
    {
              printf("\t\t\t\t--------------Choose the any topic you want to learn--------------\n\n");
              printf("1) basic computer quiz\n2) computer system quiz \n3) loading \n4) loading");
              scanf("%d",&choice);

    switch(choice)
    {
        case 1 :
            printf("________________________Q.no-1_______________________________\n");
        printf("Which one is the first search engine in internet?\n\n");
        printf(" 1) Google \n 2) Archie\n 3) Wais\n 4)  Altavista\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }
        
        printf("________________________Q.no-2_______________________________\n");
        printf(" Where are the contents of your computer's hard drive indexed?\n\n");
        printf(" 1) Yahoo! \n 2) Google\n 3) MSN \n 4) None of the above\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

        printf("________________________Q.no-3_______________________________\n");
        printf(" Main circuit board in a computer is:\n\n");
        printf(" 1) Decoder \n 2) Highlight\n 3) Select \n 4) Mother board\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

        printf("________________________Q.no-4_______________________________\n");
        printf(" ISP stands for:\n\n");
        printf(" 1) Internet Survey Period \n 2) Integrated Service Provider\n 3) Internet Security Protocol \n 4) Internet Service Provider\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

                printf("________________________Q.no-5_______________________________\n");
        printf(" Internet Explorer is a:\n\n");
        printf(" 1) Any person browsing the net \n 2) Web Browser\n 3) Graphing Package \n 4) News Reader\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }

                printf("________________________Q.no-6_______________________________\n");
        printf(" Lately you hear a clatter from your computer, especially when you load a program or call up information. What's going on? \n\n");
        printf(" 1) It's infested with reindeer \n 2) Your hard disk may be headed for failure\n 3) A loose wire is hitting the cooling fanct \n 4) A loud metallic clatter is normal\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }

                printf("________________________Q.no-7_______________________________\n");
        printf(" The 'http' you type at the beginning of any site's address stands for:\n\n");
        printf(" 1) HTML Transfer Technology Process\n 2)  Hyperspace Terms and Tech Protocol\n 3)  Hyperspace Techniques & Tech Progress\n 4) Hyper Text Transfer Protocol\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

                printf("________________________Q.no-8_______________________________\n");
        printf("Which company created the most used networking software in the 1980's\n\n");
        printf(" 1) Microsoft \n 2) Sun\n 3) IBM \n 4) Novell\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }

                printf("________________________Q.no-9_______________________________\n");
        printf("Which of the following operating systems is produced by IBM?\n\n");
        printf(" 1) OS-2 \n 2) Windows\n 3) DOS \n 4) UNIX\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 1\n");
        }

                printf("________________________Q.no-10_______________________________\n");
        printf("Which is the best search tool for finding We sites that have been handpicked and recommended by someone else?\n\n");
        printf(" 1) Subject directories \n 2) Search engines\n 3) Meta-search engines \n 4) Discussion groups\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

        printf("Each question holds the value of 5 points\n");
        printf("Your score is %d",5*count);
            break;




        case 2 :
            printf("________________________Q.no-1_______________________________\n");
        printf("Which of the following statements correctly describes the microcomputer disk drive?\n\n");
        printf(" 1)  A disk drive is used to transfer data to and from disks.\n 2)  The two types of disk drives are hard disks and flexible disks.\n 3) Hard disks are permanent storage devices.\n 4) All of these\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }
        
        printf("________________________Q.no-2_______________________________\n");
        printf("RAM chips\n\n");
        printf(" 1)  Store data indefinitely unless you delete it.\n 2)  Allow the computer to store data electronically\n 3)  Are always measured in thousand of bytes\n 4)  All of these\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }

        printf("________________________Q.no-3_______________________________\n");
        printf(" The CPU and memory are located on the\n\n");
        printf(" 1) Keyboard \n 2) Graphics board\n 3) Sound board \n 4) Motherboard\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

        printf("________________________Q.no-4_______________________________\n");
        printf(" The brain of any computer system is\n\n");
        printf(" 1) CPU \n 2) Memory\n 3) ALU \n 4) Control unit\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 1\n");
        }

                printf("________________________Q.no-5_______________________________\n");
        printf(" ALU stands for\n\n");
        printf(" 1)  Algorithm and logical unit \n 2)  Arithmetic and logical unit\n 3) Arithmetic and logarithm unit\n 4) Algorithm and logarithm unit\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==2)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 2\n");
        }

                printf("________________________Q.no-6_______________________________\n");
        printf(" Which of the following is the main circuit-board of the system unit? \n\n");
        printf(" 1) Control unit \n 2) Sound board\n 3) Motherboard \n 4) Graphics board\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==3)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 3\n");
        }

                printf("________________________Q.no-7_______________________________\n");
        printf(" The 'http' you type at the beginning of any site's address stands for:\n\n");
        printf(" 1) HTML Transfer Technology Process\n 2)  Hyperspace Terms and Tech Protocol\n 3)  Hyperspace Techniques & Tech Progress\n 4) Hyper Text Transfer Protocol\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

                printf("________________________Q.no-8_______________________________\n");
        printf("PCS are considered fourth-generation and contain\n\n");
        printf(" 1) Microprocessors \n 2) Information\n 3) Vacuum tubes \n 4) Data\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 1\n");
        }

                printf("________________________Q.no-9_______________________________\n");
        printf("The hardware in which data may be stored for a computer system is called\n\n");
        printf(" 1) Memory \n 2) Control unit\n 3) Bus \n 4) Register\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==1)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 1\n");
        }

                printf("________________________Q.no-10_______________________________\n");
        printf("Which bus is used to connect the monitor to the CPU?\n\n");
        printf(" 1) SCSI bus \n 2) HACK bus\n 3) KISS bus\n 4) PCI\n");
        printf("Enter your answer : \n");
        scanf("%d",&ans);
        if(ans==4)
        {
            printf("Correct answer\n");
            count++;
        }
        else
        {
            printf("Wrong answer\n");
            printf("Correct answer option is 4\n");
        }

        printf("Each question holds the value of 5 points\n");
        printf("Your score is %d",5*count);
          






            break;






        // operator doesn't match any case /
        // default:
        //     printf("Error! operator is not correct");
    }
return 0;
    
    }}
