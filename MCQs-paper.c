// Created by SULAIMAN HUSSAIN*

#include <stdio.h>
#include <stdlib.h>

int main()
{
  int score=0;
  char answer;
  char name[30];
  int enroll;
  puts("***********************************************************");
  puts("***********************************************************");
  puts("          Multiple Choice Questions Examination            ");
  puts("            Total Marks = 10*5 = 50                        ");
  puts("           No. of Questions = 10                           ");
  puts("***********************************************************");
  puts("***********************************************************");

  // users basic data
  printf("Candidate NAme : ");
  gets(name);
  // questions and their answers
  puts("\n 1.What is the full form of HTML ? ");
  puts("A.Hyper type markup language \nB.Hyper text manual language \nC.Hyper text markup language");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='c') || (answer=='C'))
     {
         score=score+5;
         printf("\n\nanswer is correct\n\n");
     }
     else
     {
         printf("answer is incorrect\n\n");
     }
     


  puts("\n 2.HTML is a ----------- language ? ");
  puts("A.Programming language \nB.Markup language  \nC.Urdu language ");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='b') || (answer=='B'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     }
      else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 3.What is the correct command to change directory in linux OS? ");
  puts("A.cd .. \nB.cd \nC.Change directory");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='b') || (answer=='B'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 4.what is the command to copy the file or folder? ");
  puts("A.mv (file name) \nB.cd (file name) \nC.cp (file name)");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='c') || (answer=='C'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 5.Correct command to pull the image from docker hub? ");
  puts("A.docker images pull (image name ) \nB.docker images ls  \nC.docker pull (image name) \nD.A and C both are correct");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='d') || (answer=='D'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 6.To stop the container ? ");
  puts("A.docker container stop (id or image name ) \nB.docker stop (id or image name ) \nC.docker images stop");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='a') || (answer=='A'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 7.What is the purpose to use bachslash n(\\n) in C-language? ");
  puts("A.Backspace  \nB.Move to new line  \nC.Audiable bell (alert)");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='b') || (answer=='B'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 8.what is the command to start minikube ? ");
  puts("A.both of B and C \nB.Minikube start \nC.Start Minikube ");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='b') || (answer=='B'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 9.To show the pod listing with labels ? ");
  puts("A.Kubectl get pods --show-labels \nB.listing pods --show-labels \nC.kubectl get pods");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='a') || (answer=='A'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }

  puts("\n 10.Create a pod with yaml file . ");
  puts("A.create -f (file name) \nB.kubectl create (file name) \nC.kubectl create -f (file name)");
  printf(" \nAns: ");
  scanf(" %c" , &answer);
  if ((answer=='c') || (answer=='C'))
     {
         score=score+5;
          printf("answer is correct\n\n");
     } else
     {
         printf("answer is incorrect\n\n");
     }
     puts ("***BEST OF LUCK***");

     // score
     puts("\n**********************************************************");
     puts("      ***************************************\n");
     printf("      %s scored %d out of 50\n" , name ,score);
     puts("\n    ***************************************");
     puts("************************************************************\n");
     puts("     Press Enter for Answer Sheet  ");
     getch();
     puts("1.C  2.B  3.B  4.C  5.D  6.A  7.B  8.B  9.A  10.C ");
}
