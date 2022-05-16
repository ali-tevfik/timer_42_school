#include <stdio.h>
#include <stdlib.h>
# include <readline/readline.h>

int main(int argc, char *argv[])
{
	int a = 0;
	double total_seconden = 0;
	int i = 1;
	int x = 1;
	int value = 0;
	char *write_txt[3] = {"uur","minuten","second"};
	double nodig_tijd;

	printf("\033[0;32m"); //Set the text to the color green
	printf("how many days?\n");
	scanf("%d", &i);
	while(i > 0)
	{
		printf("[Days %d-%s] = ",x, write_txt[a]);

		scanf("%d", &value);
		if (a == 0)
			total_seconden += value * 3600;
		else if (a == 1)
			total_seconden += value * 60;
		else
			total_seconden += value;
		if (a == 2){
			a = -1;
			i--;
			x++;
		}
		a++;
	}


	nodig_tijd = (24 * 3600) - total_seconden;
	int h, m, s;
	h = (nodig_tijd/3600);

	m = (nodig_tijd -(3600*h))/60;

	s = (nodig_tijd -(3600*h)-(m*60));

	int o_h,o_m,o_s;
	o_h = (total_seconden/3600);
	o_m = (total_seconden -(3600*o_h))/60;
	o_s = (total_seconden -(3600*o_h)-(o_m*60));
	printf("\033[0;33m"); //Set the text to the color green
	printf("\n\n----------------------------------\n");
	printf("\033[0;32m"); //Set the text to the color green
	printf("finished\t=\t%d:%d:%d\t|\n\n", o_h, o_m, o_s);
	if (h > 0)
	{
		printf("\033[0;31m"); //Set the text to the color red
		printf("nodig tijd\t=\t%d:%d:%d\t|\n",h,m,s);
	}
	else
	{
		printf("\033[0;32m"); //Set the text to the color red
		printf("finished!\n");
	}
	printf("\033[0;33m"); //Set the text to the color green
	printf("----------------------------------\n");

}
