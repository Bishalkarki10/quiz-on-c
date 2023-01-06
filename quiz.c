#include <stdio.h>
#include <windows.h>
int main()
{
    int i;
    int ans;
    int choice;
    int count = 0;
    printf("\t\t\t\tQQQQQQ         UU    UU    IIIIIIII     ZZZZZZZZZZZZZ\n");
    printf("\t\t\t\tQ     Q        UU    UU       II                   ZZ\n");
    printf("\t\t\t\tQ     Q        UU    UU       II                 ZZ  \n");
    printf("\t\t\t\tQ     Q        UU    UU       II               ZZ    \n");
    printf("\t\t\t\tQ  QQQQQQQ     UU    UU       II             ZZ      \n");
    printf("\t\t\t\tQ  QQ Q QQ     UU    UU       II           ZZ        \n");
    printf("\t\t\t\tQ  QQ Q QQQQ   UU    UU       II        ZZ           \n");
    printf("\t\t\t\tQQQQQQ         UUUUUUUU    IIIIIIII     ZZZZZZZZZZZZZ\n");
    Sleep(500);
    printf("\n\n\n\n\t\t>>> Enter 1 to start the game \n");
    Sleep(500);
    printf("\t\t>>> Enter 0 to quit the game \n");
    scanf("%d", &i);
    system("cls");
    if (i == 1)
    {
        printf("\t\t\t\t>>>---------------some information about the quiz game---------------<<<");
        Sleep(500);
        printf("\n\t\t\t\t|> There are 5 topics in this quiz ");
        Sleep(500);
        printf("\n\t\t\t\t|> Each topic contains 10 questions ");
        Sleep(500);
        printf("\n\t\t\t\t|> Each question contains 10 points\n\n\n");
        Sleep(700);
        printf("\n\t\t\t\tEnter any key to continue");
        getch();
        
    }
    else if (i == 0)
    {
        printf("\n\n\t\t\t\tThe game has ended\n\n");
    }
    else
    {
        printf("\n\n\t\t\t\tInvalid number\n\n");
    }
    
    
    start:
    if (i == 1)
    {
        printf("\n\n\t\t\t\t--------------Choose the any topic you want to learn--------------\n\n\n");
        printf("\t\t\t\t1) Basic computer \n\t\t\t\t2) Computer system \n\t\t\t\t3) Networking \n\t\t\t\t4) C-programming \n\t\t\t\t5) JavaScript");
        printf("\n\t\t\t\tEnter your choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            system("cls");
            printf("\t\t\t\t>>>----------------------The game has started------------------------<<<\n\n\n");
            printf("\t\t\t\t________________________Q.no-1_______________________________\n");
            printf("\t\t\t\tWhich one is the first search engine in internet?\n\n");
            printf("\t\t\t\t 1) Google \n\t\t\t\t 2) Archie\n\t\t\t\t 3) Wais\n\t\t\t\t 4)  Altavista\n");
            printf("\t\t\t\tEnter your answer:");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-2_______________________________\n");
            printf("\t\t\t\t Where are the contents of your computer's hard drive indexed?\n\n");
            printf("\t\t\t\t 1) Yahoo! \n\t\t\t\t 2) Google\n\t\t\t\t 3) MSN \n\t\t\t\t 4) None of the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-3_______________________________\n");
            printf("\t\t\t\t Main circuit board in a computer is:\n\n");
            printf("\t\t\t\t 1) Decoder \n\t\t\t\t 2) Highlight\n\t\t\t\t 3) Select \n\t\t\t\t 4) Mother board\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-4_______________________________\n");
            printf("\t\t\t\t ISP stands for:\n\n");
            printf("\t\t\t\t 1) Internet Survey Period \n\t\t\t\t 2) Integrated Service Provider\n\t\t\t\t 3) Internet Security Protocol \n\t\t\t\t 4) Internet Service Provider\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-5_______________________________\n");
            printf("\t\t\t\t Internet Explorer is a:\n\n");
            printf("\t\t\t\t 1) Any person browsing the net \n\t\t\t\t 2) Web Browser\n\t\t\t\t 3) Graphing Package \n\t\t\t\t 4) News Reader\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-6_______________________________\n");
            printf("\t\t\t\t Lately you hear a clatter from your computer, especially when you load a program or call up information. What's going on? \n\n");
            printf("\t\t\t\t 1) It's infested with reindeer \n\t\t\t\t 2) Your hard disk may be headed for failure\n\t\t\t\t 3) A loose wire is hitting the cooling fanct \n\t\t\t\t 4) A loud metallic clatter is normal\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-7_______________________________\n");
            printf("\t\t\t\t The 'http' you type at the beginning of any site's address stands for:\n\n");
            printf("\t\t\t\t 1) HTML Transfer Technology Process\n\t\t\t\t 2)  Hyperspace Terms and Tech Protocol\n\t\t\t\t 3)  Hyperspace Techniques & Tech Progress\n\t\t\t\t 4) Hyper Text Transfer Protocol\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-8_______________________________\n");
            printf("\t\t\t\tWhich company created the most used networking software in the 1980's\n\n");
            printf("\t\t\t\t 1) Microsoft \n\t\t\t\t 2) Sun\n\t\t\t\t 3) IBM \n\t\t\t\t 4) Novell\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-9_______________________________\n");
            printf("\t\t\t\tWhich of the following operating systems is produced by IBM?\n\n");
            printf("\t\t\t\t 1) OS-2 \n\t\t\t\t 2) Windows\n\t\t\t\t 3) DOS \n\t\t\t\t 4) UNIX\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-10_______________________________\n");
            printf("\t\t\t\tWhich is the best search tool for finding We sites that have been handpicked and recommended by someone else?\n\n");
            printf("\t\t\t\t 1) Subject directories \n\t\t\t\t 2) Search engines\n\t\t\t\t 3) Meta-search engines \n\t\t\t\t 4) Discussion groups\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\n\n\t\t\t\tEach question holds the value of 10 points\n");
            printf("\t\t\t\tYour score is %d", 10 * count);
            printf("\n\n\t\t\t\tDo you want to learn more ?");
            printf("\n\n\t\t\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
            break;

        case 2:
            system("cls");
            printf("\t\t\t\t>>>----------------------The game has started------------------------<<<\n\n\n");
            printf("\t\t\t\t________________________Q.no-1_______________________________\n");
            printf("\t\t\t\tWhich of the following statements correctly describes the microcomputer disk drive?\n\n");
            printf("\t\t\t\t 1)  A disk drive is used to transfer data to and from disks.\n\t\t\t\t 2)  The two types of disk drives are hard disks and flexible disks.\n\t\t\t\t 3) Hard disks are permanent storage devices.\n\t\t\t\t 4) All of these\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-2_______________________________\n");
            printf("\t\t\t\tRAM chips\n\n");
            printf("\t\t\t\t 1)  Store data indefinitely unless you delete it.\n\t\t\t\t 2)  Allow the computer to store data electronically\n\t\t\t\t 3)  Are always measured in thousand of bytes\n\t\t\t\t 4)  All of these\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-3_______________________________\n");
            printf("\t\t\t\t The CPU and memory are located on the\n\n");
            printf("\t\t\t\t 1) Keyboard \n\t\t\t\t 2) Graphics board\n\t\t\t\t 3) Sound board \n\t\t\t\t 4) Motherboard\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-4_______________________________\n");
            printf("\t\t\t\t The brain of any computer system is\n\n");
            printf("\t\t\t\t 1) CPU \n\t\t\t\t 2) Memory\n\t\t\t\t 3) ALU \n\t\t\t\t 4) Control unit\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-5_______________________________\n");
            printf("\t\t\t\t ALU stands for\n\n");
            printf("\t\t\t\t 1)  Algorithm and logical unit \n\t\t\t\t 2)  Arithmetic and logical unit\n\t\t\t\t 3) Arithmetic and logarithm unit\n\t\t\t\t 4) Algorithm and logarithm unit\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-6_______________________________\n");
            printf("\t\t\t\t Which of the following is the main circuit-board of the system unit? \n\n");
            printf("\t\t\t\t 1) Control unit \n\t\t\t\t 2) Sound board\n\t\t\t\t 3) Motherboard \n\t\t\t\t 4) Graphics board\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-7_______________________________\n");
            printf("\t\t\t\t The 'http' you type at the beginning of any site's address stands for:\n\n");
            printf("\t\t\t\t 1) HTML Transfer Technology Process\n\t\t\t\t 2)  Hyperspace Terms and Tech Protocol\n\t\t\t\t 3)  Hyperspace Techniques & Tech Progress\n\t\t\t\t 4) Hyper Text Transfer Protocol\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-8_______________________________\n");
            printf("\t\t\t\tPCS are considered fourth-generation and contain\n\n");
            printf("\t\t\t\t 1) Microprocessors \n\t\t\t\t 2) Information\n\t\t\t\t 3) Vacuum tubes \n\t\t\t\t 4) Data\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-9_______________________________\n");
            printf("\t\t\t\tThe hardware in which data may be stored for a computer system is called\n\n");
            printf("\t\t\t\t 1) Memory \n\t\t\t\t 2) Control unit\n\t\t\t\t 3) Bus \n\t\t\t\t 4) Register\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-10_______________________________\n");
            printf("\t\t\t\tWhich bus is used to connect the monitor to the CPU?\n\n");
            printf("\t\t\t\t 1) SCSI bus \n\t\t\t\t 2) HACK bus\n\t\t\t\t 3) KISS bus\n\t\t\t\t 4) PCI\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\tEach question holds the value of 10 points\n");
            printf("\t\t\t\tYour score is %d", 10 * count);
            printf("\n\n\t\t\t\tDo you want to learn more ?");
            printf("\n\n\t\t\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }

            break;

        case 3:
            system("cls");
            printf("\t\t\t\t>>>----------------------The game has started------------------------<<<\n\n\n");
            printf("\t\t\t\t________________________Q.no-1_______________________________\n");
            printf("\t\t\t\tWhat is the frequency range of the IEEE 802.11a standard?\n\n");
            printf("\t\t\t\t 1) 2.4Gbps \n\t\t\t\t 2) 5Gbps\n\t\t\t\t 3) 2.4GHz\n\t\t\t\t 4) 5GHz\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-2_______________________________\n");
            printf("\t\t\t\t What is the maximum distance running the lowest data rate for 802.11b?\n\n");
            printf("\t\t\t\t 1) About 100 feet \n\t\t\t\t 2) About 175 feet\n\t\t\t\t 3) About 300 feet \n\t\t\t\t 4) About 350 feet\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-3_______________________________\n");
            printf("\t\t\t\t What is the maximum distance with maximum data rate for 802.11a?\n\n");
            printf("\t\t\t\t 1) About 65-75 feet \n\t\t\t\t 2) About 90-100 feet\n\t\t\t\t 3) About 150 feet \n\t\t\t\t 4) Over 200 feet\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-4_______________________________\n");
            printf("\t\t\t\t What is the frequency range of the IEEE 802.11b standard?\n\n");
            printf("\t\t\t\t 1) 2.4Gbps \n\t\t\t\t 2) 5Gbps\n\t\t\t\t 3) 2.4GHz \n\t\t\t\t 4) 5GHz\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-5_______________________________\n");
            printf("\t\t\t\t You have a Cisco mesh network. What protocol allows multiple APs to connect with many redundant connections between nodes?\n\n");
            printf("\t\t\t\t 1) LWAPP \n\t\t\t\t 2) AWPP\n\t\t\t\t 3) STP \n\t\t\t\t 4) IEEE\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-6_______________________________\n");
            printf("\t\t\t\t Which layer 1 devices can be used to enlarge the area covered by a single LAN segment? \n\n");
            printf("\t\t\t\t 1) Switch\n\t\t\t\t 2) NIC\n\t\t\t\t 3) Hub and repeater\n\t\t\t\t 4) Repeater\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-7_______________________________\n");
            printf("\t\t\t\t Routers operate at layer _____. LAN switches operate at layer _____. Ethernet hubs operate at layer _____. Word processing operates at layer _____.\n\n");
            printf("\t\t\t\t 1) 3, 3, 1, 7\n\t\t\t\t 2) 3, 2, 1, none\n\t\t\t\t 3) 3, 2, 1, 7\n\t\t\t\t 4) 3, 3, 2, none\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-8_______________________________\n");
            printf("\t\t\t\tWhich of the following describe router functions?\n\n");
            printf("\t\t\t\t 1) Packet switching \n\t\t\t\t 2) Packet filtering\n\t\t\t\t 3) Internetwork communication \n\t\t\t\t 4) Path selection\n 5) All of the above \n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 5)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 5\n");
            }

            printf("\t\t\t\t________________________Q.no-9_______________________________\n");
            printf("\t\t\t\tWhy does the data communication industry use the layered OSI reference model?\n\n");
            printf("\t\t\t\t A) It divides the network communication process into smaller and simpler components, thus aiding component development, design, and troubleshooting. \n B) It enables equipment from different vendors to use the same electronic components, thus saving research and development funds.\n C) It supports the evolution of multiple competing standards and thus provides business opportunities for equipment manufacturers. \n D) It encourages industry standardization by defining what functions occur at each layer of the model.\n");
            printf("\t\t\t\t 1) A only \n\t\t\t\t 2) A and D\n\t\t\t\t 3) B and C \n\t\t\t\t 4) C only\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-10_______________________________\n");
            printf("\t\t\t\tA receiving host has failed to receive all of the segments that it should acknowledge. What can the host do to improve the reliability of this communication session?\n\n");
            printf("\t\t\t\t 1) Send a different source port number. \n\t\t\t\t 2) Restart the virtual circuit.\n\t\t\t\t 3) Decrease the sequence number. \n\t\t\t\t 4) Decrease the window size.\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\tEach question holds the value of 10 points\n");
            printf("\t\t\t\tYour score is %d", 10 * count);

            printf("\n\n\t\t\t\tDo you want to learn more ?");
            printf("\n\n\t\t\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
            break;

        case 4:
            system("cls");
            printf("\t\t\t\t>>>----------------------The game has started------------------------<<<\n\n\n");
            printf("\t\t\t\t________________________Q.no-1_______________________________\n");
            printf("\t\t\t\tIdentify the incorrect file opening mode from the following. \n\n");
            printf("\t\t\t\t 1) r \n\t\t\t\t 2) w \n\t\t\t\t 3) x\n\t\t\t\t 4)  a\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-2_______________________________\n");
            printf("\t\t\t\tWhich of the following operator can be used to access value at address stored in a pointer variable?\n\n");
            printf("\t\t\t\t 1) * \n\t\t\t\t 2) #\n\t\t\t\t 3) && \n\t\t\t\t 4) @ \n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-3_______________________________\n");
            printf("\t\t\t\t An operation with only one operand is called unary operation.\n\n");
            printf("\t\t\t\t 1) Yes \n\t\t\t\t 2) An operation with two operand is called unary operation\n\t\t\t\t 3)  An operation with unlimited operand is called unary operation \n\t\t\t\t 4) None of the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-4_______________________________\n");
            printf("\t\t\t\t The maximum combined length of the command-line arguments as well as the spaces between adjacent arguments is – a) 120 characters, b) 56 characters, c) Vary from one OS to another\n\n");
            printf("\t\t\t\t 1) a\n\t\t\t\t 2) a,b\n\t\t\t\t 3) a,b,c \n\t\t\t\t 4) c\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-5_______________________________\n");
            printf("\t\t\t\t C is a:\n\n");
            printf("\t\t\t\t 1) general-purpose computer programming language \n\t\t\t\t 2) procedural computer programming language\n\t\t\t\t 3) multi-paradigm computer programming language \n\t\t\t\t 4)  All the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-6_______________________________\n");
            printf("\t\t\t\t C first appeared in \n\n");
            printf("\t\t\t\t 1)  1972 \n\t\t\t\t 2)  1974\n\t\t\t\t 3) 1982 \n\t\t\t\t 4) 1984\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-7_______________________________\n");
            printf("\t\t\t\t  Filename extension of C language is\n\n");
            printf("\t\t\t\t 1) .cp\n\t\t\t\t 2) cl\n\t\t\t\t 3)   .c\n\t\t\t\t 4)  All the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-8_______________________________\n");
            printf("\t\t\t\t C influenced by\n\n");
            printf("\t\t\t\t 1) Assembly language \n\t\t\t\t 2) FORTRAN\n\t\t\t\t 3)  ALGOL 68 \n\t\t\t\t 4) All the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-9_______________________________\n");
            printf("\t\t\t\t C influenced\n\n");
            printf("\t\t\t\t 1)  C++, C#, and Objective-C \n\t\t\t\t 2) Java and JavaScript\n\t\t\t\t 3) Perl, PHP, and Python \n\t\t\t\t 4) All the above\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-10_______________________________\n");
            printf("\t\t\t\tWho is father of C Language ?\n\n");
            printf("\t\t\t\t 1)Bjarne Stroustrup \n\t\t\t\t 2)  Dennis Ritchie\n\t\t\t\t 3) Dr. E.F. Codd\n\t\t\t\t 4)  James A. Gosling\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\tEach question holds the value of 10 points\n");
            printf("\t\t\t\tYour score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }

            break;

        case 5:
            system("cls");
            printf("\t\t\t\t>>>----------------------The game has started------------------------<<<\n\n\n");
            printf("\t\t\t\t________________________Q.no-1_______________________________\n");
            printf("\t\t\t\tWhich of the following is correct about features of JavaScript?\n\n");
            printf("\t\t\t\t 1) JavaScript is a lightweight, interpreted programming language\n\t\t\t\t 2) JavaScript is designed for creating network-centric applications.\n\t\t\t\t 3) JavaScript is complementary to and integrated with Java.\n\t\t\t\t 4) All of the above.\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-2_______________________________\n");
            printf("\t\t\t\tHow can you get the total number of arguments passed to a function?\n\n");
            printf("\t\t\t\t 1) Using args.length property\n\t\t\t\t 2) Using arguments.length property\n\t\t\t\t 3) Both of the above.\n\t\t\t\t 4)  None of the above.\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-3_______________________________\n");
            printf("\t\t\t\t Which built-in method removes the last element from an array and returns that element?\n\n");
            printf("\t\t\t\t 1) last() \n\t\t\t\t 2) get()\n\t\t\t\t 3) pop()\n\t\t\t\t 4) None of the above.\n");
            printf("\t\t\t\tEnter your answer :");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-4_______________________________\n");
            printf("\t\t\t\t Which built-in method returns the string representation of the number's value?\n\n");
            printf("\t\t\t\t 1) toValue() \n\t\t\t\t 2)  toNumber()\n\t\t\t\t 3) toString() \n\t\t\t\t 4) None of the above.\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 3)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 3\n");
            }

            printf("\t\t\t\t________________________Q.no-5_______________________________\n");
            printf("\t\t\t\t Which of the following function of Number object defines how many total digits to display of a number?\n\n");
            printf("\t\t\t\t 1) toExponential()\n\t\t\t\t 2)  toFixed()\n\t\t\t\t 3)  toLocaleString()\n\t\t\t\t 4) toPrecision()\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-6_______________________________\n");
            printf("\t\t\t\t Which of the following function of String object returns the index within the calling String object of the first occurrence of the specified value? \n\n");
            printf("\t\t\t\t 1) substr() \n\t\t\t\t 2) search()\n\t\t\t\t 3)  lastIndexOf() \n\t\t\t\t 4)  indexOf()\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-7_______________________________\n");
            printf("\t\t\t\t Which of the following function of String object creates an HTML anchor that is used as a hypertext target?\n\n");
            printf("\t\t\t\t 1) anchor()\n\t\t\t\t 2) link()\n\t\t\t\t 3) blink()\n\t\t\t\t 4) big()\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\t________________________Q.no-8_______________________________\n");
            printf("\t\t\t\tWhich of the following function of String object causes a string to be italic, as if it were in an <i> tag?\n\n");
            printf("\t\t\t\t 1) fixed()\n\t\t\t\t 2) fontcolor()\n\t\t\t\t 3) fontsize()\n\t\t\t\t 4)  italics()\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 4)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 4\n");
            }

            printf("\t\t\t\t________________________Q.no-9_______________________________\n");
            printf("\t\t\t\tWhich of the following function of Array object joins all elements of an array into a string?\n\n");
            printf("\t\t\t\t 1) concat() \n\t\t\t\t 2)  join()\n\t\t\t\t 3)  pop() \n\t\t\t\t 4)  map()\n");
            printf("\t\t\t\tEnter your answer : ");
            scanf("%d", &ans);
            if (ans == 2)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 2\n");
            }

            printf("\t\t\t\t________________________Q.no-10_______________________________\n");
            printf("\t\t\t\t Which of the following function of Array object represents the source code of an object?\n\n");
            printf("\t\t\t\t 1) toSource() \n\t\t\t\t 2) splice()\n\t\t\t\t 3)  toString()\n\t\t\t\t 4) unshift()\n");
            printf("Enter your answer : ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                printf("\n\t\t\t\tCorrect answer\n");
                count++;
            }
            else
            {
                printf("\n\t\t\t\tWrong answer\n");
                printf("\t\t\t\tCorrect answer option is 1\n");
            }

            printf("\t\t\t\tEach question holds the value of 10 points\n");
            printf("\t\t\t\tYour score is %d", 10 * count);
            printf("\n\n\t\tDo you want to learn more ?");
            printf("\n\n\t\tpress 1 for continue and press 2 for quit ");
            scanf("%d", &ans);
            if (ans == 1)
            {
                goto start;
            }
            else
            {
                goto end;
            }
        }
    end:
        printf("\n\n\t\t\nThank you for playing");
    }
    return 0;
}
