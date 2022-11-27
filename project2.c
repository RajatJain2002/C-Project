//Effective way of Ranking in Olympics

#include <stdio.h>
#include<string.h>

//to print the array 
void printArray(int arr[], int size)
{
	int i;
	for (i = 0; i < size; i++)
	printf("%d ", arr[i]);
	printf("\n");
}

//Function to convert the number of medal into score
void value(int arr[], int size, int num)
{
    //num is the number through which the number of medals are multiplied 
	for(int i=0; i<size; i++)
    {
		arr[i] = arr[i]*num;
	}

}

int main()
{
    printf("**********************************************************************\n");
    printf("\t\t     CSF302_A  \t\t\n");
    printf("\t    Design and Analysis of Algorithms \n");
    printf("          EFFECTIVE WAY OF RANKING IN OLYMPICS \n");
    printf("***********************************************************************\n");
    
    
    //Number of gold medals
    int gold[] = { 16,12,9,8,8,8,7,7,6,5,4,3,2,2,2,2,2,1,1,1};

    //Number of silver medals
    int silver[] = {8,10,4,10,5,5,7,2,12,7,8,6,7,5,3,2,1,2,1,0};
    
    //Number of bronze medals
    int bronze[] = {13,5,2,7,5,4,4,5,14,5,14,2,14,2,14,9,8,2,2,4,0,1,0,2};
    
    //to find the size of the array i.e. number of participating countries
    int n = sizeof(gold) / sizeof(gold[0]);
    
    // In country array the countries are mentioned which participated
    char country[50][50]={
	"Norway", "Germany", "China    ", "United State", "Sweden", "Netherlands",
	"Austria", "Switzerland", "ROC    ", "France", "Canada   ", "Japan   ",
	"Italy   ", "South Korea", "Slovenia", "Finland", "Australia", 
	"New Zealand", "Great Britain", "Hungary"
    };
    
    printf("\n\n TABLE representing the number of medals by the countries\n");
    //printing the number of medals of each country
    printf("\n\n \t\t\t *MEDAL TALLY* \n");
    {
    printf("-------------------------------------------------------------");
    printf("\n");
    printf("COUNTRY");
    printf("\t\t\t\tGOLD");
    printf("\tSILVER");
    printf("\tBRONZE");
    printf("\n");
    printf("-------------------------------------------------------------");
    printf("\n");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s  ", country[i]);
        printf("\t\t\t %d", gold[i]);
        printf("\t %d", silver[i]);
        printf("\t %d", bronze[i]);
        printf("\n");
    }
    printf("------------------------------------------------------------- \n\n");
    
    //providing value to the madals 
    //Multiplying the number of medals by its respective value
    value(gold, n, 15);
    value(silver, n, 10);
    value(bronze, n, 5);

    printf("VALUE BASED TABLE representing the value of medals:\n");
    printf("Gold as 15 \n");
    printf("Silver as 10 \n");
    printf("Bronze as 5 \n");



    printf("\n\n \t\t*VALUE BASED TABLE* \n");
    {
    printf("-------------------------------------------------------------\n");
    printf("COUNTRY");
    printf("\t\t\t\tGOLD");
    printf("\tSILVER");
    printf("\tBRONZE");
    printf("\n");
    printf("-------------------------------------------------------------\n\n");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s  ", country[i]);
        printf("\t\t\t %d", gold[i]);
        printf("\t %d", silver[i]);
        printf("\t %d", bronze[i]);
        printf("\n");
    }
    printf("-------------------------------------------------------------\n\n");

    int score[n];
    
    //Calculating the score by adding the values of gold, silver and bronze 

    for(int i=0; i<n; i++)
    {
	    score[i] = (gold[i] + silver[i] + bronze[i]);

    }

    printf("SCORE TABLE is the sum of all the values of gold, silver and bronze \n");

    printf("\n\n \t\t* SCORE TABLE * \n");
    {
    printf("-------------------------------------------------------------");
    printf("\n");
    printf("COUNTRY");
    printf("\t\t\t\tGOLD");
    printf("\tSILVER");
    printf("\tBRONZE");
    printf("\t SCORE");
    printf("\n");
    printf("-------------------------------------------------------------\n\n");
    }

    for (int i = 0; i < n; i++) 
    {
        printf("%s  ", country[i]);
        printf("\t\t\t %d", gold[i]);
        printf("\t %d", silver[i]);
        printf("\t %d", bronze[i]);
        printf("\t %d", score[i]);
        printf("\n");
    }
    printf("-------------------------------------------------------------\n\n");


    //Applying sorting algorithm 

    int i, j;
    char var[n];
	for (i = 0; i < n-1; i++)
    {
		for (j = 0; j < n - i - 1; j++)
        {
			if (score[j] > score[j + 1])
				{
	                int temp = score[j];
                    score[j]= score[j+1];
                    score[j+1] = temp;

                    strcpy(var,country[j]);
                    strcpy(country[j], country[j+1]);
                    strcpy(country[j+1], var);


                }
        }
    }

    //printing score table i.e final table 

    printf("EFFECTIVE RANKING is the sorted array  \n");
    printf("\n\n \t\t* EFFECTIVE RANKING * \n");
    {
    printf("-------------------------------------------\n");
    printf("RANK");
    printf("\tCOUNTRY");
    printf("\t\tSCORE");
    printf("\n");
    printf("-------------------------------------------\n");
    }

    for (int i = n-1; i > 0; i--) 
    {
        printf("%d ", n-i);
        printf("\t %s  ", country[i]);
        printf("\t %d",score[i]);
        printf("\n");
    }
    printf("-------------------------------------------\n\n");

printf("\n***************************************************************************************\n");
printf("Rajat Jain");
printf("***************************************************************************************\n");


    return 0;
}
