#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int main()
{
	double weight, height, bmi;

	printf("Please enter your weight (in kg) and height (in cm):\n");

	while (1)
	{
		if( (scanf("%lf %lf", &weight, &height)!=2) || (weight <= 0 || height <= 0) )	/*User input test*/
		{
			printf("Wrong weight or height input, use only positive numbers, please!\n");
			while (getchar() != '\n') //Crear scanf buffer
			{
				continue;
			}
		}
		else break;
	}

	bmi = weight / (pow(height * 0.01, 2));	/*BMI furmula*/

	if (bmi < 18.5)
		printf("Underweight!\n");
	else if (bmi >= 17.5 && bmi < 25)
		printf("Normal weight\n");
	else if (bmi >= 25 && bmi < 30)
		printf("Increased weight\n");
	else if (bmi >= 30 && bmi < 40)
		printf("Obese\n");
	else printf("Very high obese\n");

	system("pause");
	return 0;
}
