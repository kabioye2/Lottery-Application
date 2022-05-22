//////////////////////////////////////////////////////////////////////////////////////////////////////
//							ECC CIS-121 Summer 2021 												//
//																									//
//	Type of Assignment:		Lab 7																    //
//	Problem Number:			Exercise 1																//
//	Section Number			700																		//
//	Author:					Kehinde Abioye														    //
//	Date Assigned:			July 19, 2021														    //
//	Project Name:			The Number of Letters											        //
//	File Name:				Lab7Ex1.cpp													            //
//																									//
//	Purpose of Program:																				//
//		The purpose of this program is obtain user input for a string and display the number        //
//      of characters in the string, ignoring spaces in user input          						//																								        
//																							        //
//  Algorithm:																						//
//		1. Declare an array for  user input											                //
//		2. Create function to count characters in input, including spaces							//
//		3. Display string (user input) and number of characters in string							//						
//////////////////////////////////////////////////////////////////////////////////////////////////////
#include <iostream>
#include <cstring>
using namespace std;

int countLetters(char s[]);//for user input of string

int main()
{
    char s[20];//array for user input
    cout << "Enter a string : ";//user input
    cin.getline (s, 19);//ignores spaces in input


    cout << "The number of letters in \"" << s << "\" is " << countLetters(s) << endl;//display string and size of input

}

int countLetters(char s[])
{
    int size = strlen(s);//size of string
    int count = 0;//counter for characters

    for (int i = 0; i < size; i++)//go through string character by character to count number of characters including spaces
    {
        count++;//number of characters
    }
    return count;
}