#include<stdio.h>
int main()
{
    int matchsticks=21;
    int user,computer;
    printf("Welcome to matchstick game");
    printf("Rules:\n");
    printf("The game starts with 21 matchsticks.\n");
    printf("You can pick 1,2,3 or 4 matchsticks on your turn\n");
    printf("The player forced to pick last matchstick losses\n");

    while(matchsticks>1)
    {
      printf("matchsticks left:%d\n",matchsticks);
      printf("your turn:pick 1,2,3 or 4 matchsticks\n");
      scanf("%d",&user);

      if(user<1 || user>4)
      {
          printf("invalid input.\n");
          continue;
      }

      matchsticks-=user;

      if(matchsticks==1)
      {
          printf("only one matchstick left. you have to pick it up\n");
          printf("you lost,computer wins\n");
          break;
      }
      computer=5-user;
      printf("computer will pick %d matchsticks\n",computer);
      matchsticks-=computer;
      if (matchsticks==1)
      {
          printf("computer is forced to pick the last matchstick\n");
          printf("you win,computer losses\n");
          break;
      }
      }
      return 0;

    }
