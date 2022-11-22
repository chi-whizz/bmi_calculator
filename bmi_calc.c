#include <stdio.h>

int main(void) {
	printf("Please, enter your body weight in kg: ");

	float body_weight_in_kg;
	scanf("%f", &body_weight_in_kg);

	printf("Please, enter your body height in metres: ");

	float body_height_in_metres;
	scanf("%f", &body_height_in_metres);

	float bmi = body_weight_in_kg / (body_height_in_metres * body_height_in_metres);
	printf("Your BMI value is %.2f \n", bmi);

	return 0;
}
