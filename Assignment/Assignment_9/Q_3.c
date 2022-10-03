#include <stdio.h>
int main()
{
    // code
    int x;

    printf("enter the number of day: ");
    scanf("%d",&x);

    switch (x)
    {

    case 1:

        printf("All the very best for the day. May luck be with your sides always and forever. I wish you have a great day ahead. ");
        break;

    case 2:

        printf("I hope your heart brims with joy and your body with energy throughout this lovely day. Have a good day! ");
        break;
        break;

    case 3:

        printf("May you find the reasons to love yourself and the world a bit more today. Enjoy your day! ");
        break;
    case 4:

        printf("Every day comes with renewed hope and new opportunities, make sure to seize them! Have a nice day!  ");
        break;
    case 5:

        printf(" No matter what you are going through, I wish all the bad things disappear and happiness comes to you. Have a wonderful day! ");
        break;
    case 6:

        printf(" Hope you find passion in your work and peace in your workplace. Have a great day at work! ");
        break;

    case 7:
        printf("Follow your passion. Go where your heart takes you. This is your day, make it count!");

        break;
    default:

        printf("invalid choice");
    }

    return 0;
}
