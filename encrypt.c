#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv)
{
	char argumentList[10];
	char arg0[100];
	char arg1[100];
	char arg2[100];
	char arg3[100];
	char arg4[100];
	char arg5[100];
	char arg6[100];
	char arg7[100];
	char arg8[100];
	char arg9[100];
	char outname[100];
	char out[100];
	int encryptValue = 0;
	char outputvalid [100];
	char txt[100];
	char deoutput[100];
	
	//For loop
	for (int i = 0; i < argc; ++i)
	{
		if (i==0) 
		{
			(strncpy(arg0,argv[i],100));
		}
		else if (i==1) 
		{
			(strncpy(arg1,argv[i],100));
		}
		else if (i==2) 
		{
			(strncpy(arg2,argv[i],100));
		}
		else if (i==3) 
		{
			(strncpy(arg3,argv[i],100));
		}
		else if (i==4) 
		{
			(strncpy(arg4,argv[i],100));
		}
		else if (i==5) 
		{
			(strncpy(arg5,argv[i],100));
		}
		else if (i==6) 
		{
			(strncpy(arg6,argv[i],100));
		}
		else if (i==7) 
		{
			(strncpy(arg7,argv[i],100));
		}
		else if (i==8) 
		{
			(strncpy(arg8,argv[i],100));
		}
		else if (i==9) 
		{
			(strncpy(arg9,argv[i],100));
		}
	}	
	char decryption[100];
	// If argument0 or argument1.... is -d then decrypt
	if (strcmp(arg0, "-d")==0||strcmp(arg1, "-d")==0||strcmp(arg2, "-d")==0||strcmp(arg3, "-d")==0||strcmp(arg4, "-d")==0||strcmp(arg5, "-d")==0||strcmp(arg6, "-d")==0||strcmp(arg7, "-d")==0||strcmp(arg8, "-d")==0||strcmp(arg9, "-d")==0)
	{
		// Set decryption value to yes
		(strncpy(decryption,"yes",100));
	}
	else 
	{
		// Set decryption value to no  as the program defaults to encryption
		(strncpy(decryption,"no",100));
	}
	
	// Output
	int i=0;
	//read line from comand promt
	if (i==0) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==1) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==2) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==3) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==4) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==5) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==6) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==7) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==8) 
	{
		(strncpy(out,argv[i],100));
	}
	else if (i==9) 
	{
		(strncpy(out,argv[i],100));
	}
	//if 1st word is -o or 2nd word is -o
	if (strcmp(arg0, "-o")==0||strcmp(arg1, "-o")==0||strcmp(arg2, "-o")==0||strcmp(arg3, "-o")==0||strcmp(arg4, "-o")==0||strcmp(arg5, "-o")==0||strcmp(arg6, "-o")==0||strcmp(arg7, "-o")==0||strcmp(arg8, "-o")==0||strcmp(arg9, "-o")==0)
	{
		(strncpy(outputvalid,"yes",100));
		// If arg0 is -o then read the next argument which will be arg1 and make that a variable called outname
		if (strcmp(arg0, "-o")==0)
		{
			(strncpy(outname,arg1,100));
		}
		if (strcmp(arg1, "-o")==0)
		{
			(strncpy(outname,arg2,100));
		}
		if (strcmp(arg2, "-o")==0)
		{
			(strncpy(outname,arg3,100));
		}
		if (strcmp(arg3, "-o")==0)
		{
			(strncpy(outname,arg4,100));
		}
		if (strcmp(arg4, "-o")==0)
		{
			(strncpy(outname,arg5,100));
		}
		if (strcmp(arg5, "-o") == 0)
		{
			(strncpy(outname, arg6, 100));
		}
		if (strcmp(arg6, "-o") == 0)
		{
			(strncpy(outname, arg7, 100));
		}
		if (strcmp(arg7, "-o") == 0)
		{
			(strncpy(outname, arg8, 100));
		}
		if (strcmp(arg8, "-o") == 0)
		{
			(strncpy(outname, arg9, 100));
		}
	}
	else 
	{
		(strncpy(outputvalid,"no",100));
	}
	
	//keys
	char key [100];
	char keyval[100];
	if (i==0) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==1) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==2) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==3) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==4) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==5) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==6) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==7) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==8) 
	{
		(strncpy(key,argv[i],100));
	}
	else if (i==9) 
	{
		(strncpy(key,argv[i],100));
	}
	// If arg0 is -k or arg1 is -k.....
	if (strcmp(arg0, "-k")==0||strcmp(arg1, "-k")==0||strcmp(arg2, "-k")==0||strcmp(arg3, "-k")==0||strcmp(arg4, "-k")==0||strcmp(arg5, "-k")==0||strcmp(arg6, "-k")==0||strcmp(arg7, "-k")==0||strcmp(arg8, "-k")==0||strcmp(arg9, "-k")==0)
	{
		// If arg0 is -k then take the value next to it which will be arg1 and put that into a variable called keyval
		if (strcmp(arg0, "-k")==0)
		{
			(strncpy(keyval, arg1, 100));
		} 
		if (strcmp(arg1, "-k")==0)
		{
			(strncpy(keyval, arg2, 100));
		}
		if (strcmp(arg2, "-k")==0)
		{
			(strncpy(keyval, arg3, 100));
		}
		if (strcmp(arg3, "-k")==0)
		{
			(strncpy(keyval, arg4, 100));
		}
		if (strcmp(arg4, "-k")==0)
		{
			(strncpy(keyval, arg5, 100));
		}
		if (strcmp(arg5, "-k") == 0)
		{
			(strncpy(keyval, arg6, 100));
		}
		if (strcmp(arg6, "-k") == 0)
		{
			(strncpy(keyval, arg7, 100));
		}
		if (strcmp(arg7, "-k") == 0)
		{
			(strncpy(keyval, arg8, 100));
		}
		if (strcmp(arg8, "-k") == 0)
		{
			(strncpy(keyval, arg9, 100));
		}
		// This converts the keyvalue from a character into an integer called encryptValue
		encryptValue = atoi(keyval);
	}
	else 
	{
		// As no key is entered the key value will default to 200
		encryptValue = 200;
	}
	
	// Input
	char in[100];
	//Read line from comand promt
	if (i==0) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==1) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==2) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==3) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==4) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==5) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==6) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==7) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==8) 
	{
		(strncpy(in,argv[i],100));
	}
	else if (i==9) 
	{
		(strncpy(in,argv[i],100));
	}
	char inputname [100];
	// If arg0 equals -i or arg1 equals -i....
	if (strcmp(arg0, "-i")==0||strcmp(arg1, "-i")==0||strcmp(arg2, "-i")==0||strcmp(arg3, "-i")==0||strcmp(arg4, "-i")==0||strcmp(arg5, "-i")==0||strcmp(arg6, "-i")==0||strcmp(arg7, "-i")==0||strcmp(arg8, "-i")==0||strcmp(arg9, "-i")==0)
	{
		// If arg0 on the command line is -i then make arg1 value the inputname which is the file to open
		if (strcmp(arg0, "-i")==0)
		{
			(strncpy(inputname,arg1,100));
		}
		if (strcmp(arg1, "-i")==0)
		{
			(strncpy(inputname,arg2,100));
		}
		if (strcmp(arg2, "-i")==0)
		{
			(strncpy(inputname,arg3,100));
		}
		if (strcmp(arg3, "-i")==0)
		{
			(strncpy(inputname,arg4,100));
		}
		if (strcmp(arg4, "-i")==0)
		{
			(strncpy(inputname,arg5,100));
		}
		if (strcmp(arg5, "-i") == 0)
		{
			(strncpy(inputname, arg6, 100));
		}
		if (strcmp(arg6, "-i") == 0)
		{
			(strncpy(inputname, arg7, 100));
		}
		if (strcmp(arg7, "-i") == 0)
		{
			(strncpy(inputname, arg8, 100));
		}
		if (strcmp(arg8, "-i") == 0)
		{
			(strncpy(inputname, arg9, 100));
		}
		char same[100];
		// If the input file name is the same as the output file name then make the same value yes
		if (strcmp(inputname, outname) == 0)
		{
			(strncpy(same,"yes",100));
		}
		else // If the input file name is different to the output file name then make the same value no
		{
			(strncpy(same,"no",100));
		}
		
		//Reading the file
		FILE *fp;
		char ch;
		int len = 0;
		// Opens the file inputname which was entered after -i on the command line
		fp=fopen(inputname,"r");
		// Produces an error if it cannot open the file
		if(!fp) 
		{
			printf("Cannot open file!\n");
		    return;
		}
		// Gets the content of the file and make them into a variable
		ch=fgetc(fp);
		while(ch != EOF && ch!= '\n' && len < 100)
		{
			txt[len] = ch;
		    len++;
		    ch=fgetc(fp);
		}
		txt[len] = '\0';
		int i = 0;
		// If decryption equals yes which was worked out earlier on in the program then
	    if (strcmp(decryption, "yes")==0)
		{
			// If the inputname and outputname are the same then
			if(strcmp(same, "yes")==0)
			{
				int num[100];
				// Location in string to read from next
				char *next = txt;
				int count=0; 

				char *cur= txt;
				// Work out how many words there are in the text file
				for (;;)
				{
					while (*cur == ' ')
					{
						cur++;
					}
					if (*cur == 0)
					{
						break;
					}
					count++;
					while (*cur != 0 && *cur != ' ')
					{
						cur++;
					}
				}
				// Use the number calculated above for the for loop below
				for (int i = 0; i <count; ++i)
				{
					// Carry out the decryption
					num[i] = strtol(next, &next, 16);
					// Bit shift right by 2
					num[i] = num[i] >> 2;
					// Take away the encryptValue worked out earlier
					num[i] = num[i] - encryptValue;
					deoutput[i] = num[i];
				}
			
				deoutput[count] = '\0';
				// Output the decryption to the same file it got the data from
				FILE *output = fopen(inputname, "w");
					fprintf(output, deoutput);
				fclose(output);
			}
			// If the inputname and outputname are different then
			if(strcmp(same, "no")==0)
			{
				int num[100];
				// Location in string to read from next
				char *next = txt;
				int count=0; 
				char *cur= txt;
				// Work out how many words there are in the text file
				for (;;)
				{
					while (*cur == ' ')
					{
						cur++;
					}
					if (*cur == 0)
					{
						break;
					}
					count++;
					while (*cur != 0 && *cur != ' ')
					{
						cur++;
					}
				}
				// Use the number calculated above for the for loop below
				for (int i = 0; i <count; ++i)
				{
					// Carry out the decryption
					num[i] = strtol(next, &next, 16);
					// Bit shift right by 2
					num[i] = num[i] >> 2;
					// Take away the encryptValue worked out earlier
					num[i] = num[i] - encryptValue;
					deoutput[i] = num[i];
				}
				deoutput[count] = '\0';
				// Output the decryption to a different file, outname which was worke out earlier
				FILE *output = fopen(outname, "w");
					// Write to file
					fprintf(output, deoutput);
				// Close the file
				fclose(output);
			}
	    }
		// If decryption equals no which was worked out earlier on in the program then
	    else if (strcmp(decryption, "no")==0)
		{
			// Input upto 100 characters
			char input[100];
			int i = 0;
			int tempValue;
			// If the inputname and outputname are the same then
			if (strcmp(same, "yes")==0){
				// Open the inputname file to encrypt/write to
				FILE *output = fopen(inputname, "w");
				// While loop
				while(txt[i]) {
					tempValue = 0;
					// Add encryptValue which default is 200
					tempValue = txt[i++]+encryptValue;
					// Bitshift left by 2 each Value
					tempValue = tempValue << 2;
					// Convert to Hex and print out
					fprintf(output, "%04x ",tempValue);
				}
				// Close file
				fclose(output);
			}
			// If the inputname and outputname are different then
			else if (strcmp(same, "no")==0)
			{
				// Open the outputname file to encrypt/write to
				FILE *output = fopen(outname, "w");
				// While loop
				while(txt[i]) {
					tempValue = 0;
					// Add encryptValue which default is 200
					tempValue = txt[i++]+encryptValue;
					// Bitshift left by 2 each Value
					tempValue = tempValue << 2;
					// Convert to Hex
					fprintf(output, "%04x ",tempValue);
				}
				// Close file
				fclose(output);
			}
		}
	}
	else 
	{
		char input[100];
		int i = 0;
		int tempValue;

		if (strcmp(decryption, "yes")==0)
		{
			if (strcmp(outputvalid, "yes")==0)
			{				
				// Asks for input
				printf("Please enter a string to be decrypted\n");
				// Takes in input
				scanf("%[^\n]%*c",input);
				
				int num[100];
				// Location in string to read from next
				char *next = input;
				int count=0; 

				char *cur= input;
				// Work out how many words there are in the text file
				for (;;)
				{
					while (*cur == ' ')
					{
						cur++;
					}
					if (*cur == 0)
					{
						break;
					}
					count++;
					while (*cur != 0 && *cur != ' ')
					{
						cur++;
					}
				}
				// Use the number calculated above for the for loop below
				for (int i = 0; i <count; ++i)
				{
					// Carry out the decryption
					num[i] = strtol(next, &next, 16);
					// Bit shift right by 2
					num[i] = num[i] >> 2;
					// Take away the encryptValue worked out earlier
					num[i] = num[i] - encryptValue;
					deoutput[i] = num[i];
				}
				deoutput[count] = '\0';
				// Output the decryption to a different file, outname which was worke out earlier
				FILE *output = fopen(outname, "w");
					// Write to file
					fprintf(output, deoutput);
				// Close the file
				fclose(output);						
			}	
			else if (strcmp(outputvalid, "no")==0)
			{
				// Asks for input
				printf("Please enter a string to be decrypted\n");
				// Takes in input
				scanf("%[^\n]%*c",input);
				int num[100];
				// Location in string to read from next
				char *next = input;
				int count=0; 
				char *cur= input;
				// Work out how many words there are in the text file
				for (;;)
				{
					while (*cur == ' ')
					{
						cur++;
					}
					if (*cur == 0)
					{
						break;
					}
					count++;
					while (*cur != 0 && *cur != ' ')
					{
						cur++;
					}
				}
				// Use the number calculated above for the for loop below
				for (int i = 0; i <count; ++i)
				{
					// Carry out the decryption
					num[i] = strtol(next, &next, 16);
					// Bit shift right by 2
					num[i] = num[i] >> 2;
					// Take away the encryptValue worked out earlier
					num[i] = num[i] - encryptValue;
					deoutput[i] = num[i];
				}
				deoutput[count] = '\0';
				printf("\n");
				printf("%s\n", deoutput);
			}
		}
		else if (strcmp(decryption, "no")==0)
		{
			if (strcmp(outputvalid, "yes")==0)
			{
				// Asks for input
				printf("Please enter a string to be encrypted\n");
				// Takes in input
				scanf("%[^\n]%*c",input);
				// Open the outputname file to encrypt/write to
				printf("outputvalid\n");
				FILE *output = fopen(outname, "w");
				// While loop
				while(txt[i]) {
					tempValue = 0;
					// Add encryptValue which default is 200
					tempValue = txt[i++]+encryptValue;
					// Bitshift left by 2 each Value
					tempValue = tempValue << 2;
					// Convert to Hex
					fprintf(output, "%04x ",tempValue);
				}
				// Close file
				fclose(output);
			}
			else if (strcmp(outputvalid, "no")==0)
			{
				// Asks for input
				printf("Please enter a string to be encrypted\n");
				// Takes in input
				scanf("%[^\n]%*c",input);
				while(input[i]) 
				{
					tempValue = 0;
					tempValue = input[i++]+encryptValue;
					// Bitshift left by 2 each Value
					tempValue = tempValue << 2;
					// Convert to Hex
					printf("%04x ",tempValue);
				}
			}
		}
	}
	
	return 0;
}