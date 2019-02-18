#include<stdio.h>
main()
{
	char in;
	int vo=0,non=0,num=0;
	printf("Enter character\n");
	while(in!='!')
	{
		scanf("%c",&in);
		if(in=='\n')
		vo=vo;
		else if(in=='o' || in=='O'||in=='u' || in=='U'||in=='i' || in=='I'||in=='e' || in=='E'||in=='a' || in=='A')
		vo++;
		else if(in=='o' || in=='l'||in=='2' || in=='3'||in=='4' || in=='5'||in=='6' || in=='7'||in=='8' || in=='9');
		num++;
		else if(in=='!')
		break;
		else
		++non;
	}
	if(vo>non)
	printf("Vowel has %d Non-vowl has %df\nVowel more than %d",vo,non,vo-non);
	if(vo<non)
	printf("Non-vowel has %c vowel has %d\nNon-Vowel more than %d",non,vo,(non-vo));
	else
	printf("Non-vowel and vowel are Equal");
	printf("\nNumber has %d digits",num);
	
}
