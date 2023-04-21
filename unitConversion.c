int main(){
	char input;
	float kmsToMiles = 0.621371;
	float inchesToFoot = 0.083333;
	float cmsToInches = 0.390701;
	float poundTokgs = 0.453592;
	float inchesToMeters = 0.0254;
	float first,second;
	while(1){
		printf("Enter the input character.q to Quit\n 1.kmstoMiles\n 2.inchesToFoot\n 3.cmsToInches\n 4.poundToKgs\n 5.inchesToMeters\n");
		scanf("%c",&input);
		switch(input)
		{
			case 'q':
				printf("Quitting...\n\n");
				goto end;
				break;
			case '1':
				printf("Enter the quantity in terms of first unit\n");
				scanf("%f",&first);
				second = first *kmsToMiles;
				printf("%.2f Kms is equal to %.2f Miles\n\n",first,second);
				break;
			case '2':
				printf("Enter the quantity in terms of first unit\n");
				scanf("%f",&first);
				second = first *inchesToFoot;
				printf("%.2f inches is equal to %.2f foot\n\n",first,second);
				break;
			case '3':
				printf("Enter the quantity in terms of first unit\n");
				scanf("%f",&first);
				second = first *cmsToInches;
				printf("%.2f cms is equal to %.2f inches\n\n",first,second);
				break;
			case '4':
				printf("Enter the quantity in terms of first unit\n");
				scanf("%f",&first);
				second = first *poundTokgs;
				printf("%.2f pounds is equal to %.2f Kgs\n\n",first,second);
				break;
			case '5':
				printf("Enter the quantity in terms of first unit\n");
				scanf("%f",&first);
				second = first *inchesToFoot;
				printf("%.2f inches is equal to %.2f foot\n\n",first,second);
				break;
			default:
				break;
		}
	}
	end:
	return 0;
}

