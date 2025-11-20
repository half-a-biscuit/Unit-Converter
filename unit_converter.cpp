// unti_converter.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#include <math.h>  
//Want to have user select what type of unit he/she wishes to convert from 
//and then input a number.
//Afterwards, the program will perform the necessary calculations in converting 
//one unit into another.


//Declaring Variables
char category;      //Separate category for temp, currency and mass
int userinput;
int decimalcounter = 0; //Counts number of decimals present in user input
int temperature;
int currency;
int mass;
int usertemp;       //Temperature value from user
int usermass;       //Mass value from user
int usercurrency;   //Currency value from user
float result;       //Stores the result of conversions

/*void errorcheck()//Checks to see whether user input is correct or not
{
    for (int i = 0; userinput[i-1]; i++)
    {
        if (userinput == '.')
        {
            decimalcounter++;
            if (decimalcounter > 1)
            {
                printf("Too many decimals points.");
            }
        }
    }
} 
*/

void calculateTemperature()
{
    scanf("%d", &usertemp);
    
    if (usertemp == 1)      // C --> F
    {
        printf("Please enter value in Celsius: \n");
        scanf("%d", &userinput);
        result = ((9 / 5) * userinput + 32);
        printf("Fahrenheit: %.3f degrees", result); 
    }
    else if(usertemp == 2)  // C --> K
    {
        printf("Please enter value in Celsius: \n");
        scanf("%d", &userinput);
        result = userinput + 273.15;
        printf("Kelvin: %.3f degrees", result);
    }
    else if (usertemp == 3) // F --> C
    {
        printf("Please enter value in Fahrenheit: \n");
        scanf("%d", &userinput);
        result = ((5 / 9) * userinput - 32);
        printf("Celsius: %.3f degrees", result);
    }
    else if (usertemp == 4) // F --> K
    {
        printf("Please enter value in Fahrenheit: \n");
        scanf("%d", &userinput);
        result = ((userinput - 32)/1.8 + 273.15);
        printf("Kelvin: %.3f degrees", result);
    }
    else if (usertemp == 5) // K --> C
    {
        printf("Please enter value in Kelvin: \n");
        scanf("%d", &userinput);
        result = (userinput - 273.15);
        printf("Celsius: %.3f degrees", result);
    }
    else if (usertemp == 6) // K --> F
    {
        printf("Please enter value in Kelvin: \n");
        scanf("%d", &userinput);
        result = (1.8 * (userinput - 273.15) + 32);
        printf("Fahrenheit: %.3f degrees", result);
    }
    else
    {
        printf("Selection was incorrect");
    }
}
void calculateMass()
{
    scanf("%d", &usermass);
    if (usermass == 1)      //Grams
    {
        printf("You have selected Grams \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Metric Tonne|\n");
        printf("|Enter |2| Kilogram    |\n");
        printf("|Enter |3| Milligram   |\n");
        printf("|Enter |4| Microgram   |\n");
        printf("|Enter |5| Pound       |\n");
        printf("|Enter |6| Ounce       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);
        
        if (userinput == 1)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 6));
            printf("%d grams = %.5f Metric Tonnes",userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 3));
            printf("%d grams = %.5f Kilograms", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 3));
            printf("%d grams = %.5f Milligrams", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 6));
            printf("%d grams = %.5f Micrograms", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput / 453.6;
            printf("%d grams = %.5f Pounds (lbs)", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in grams \n");
            scanf("%d", &userinput);
            result = userinput / 28.35;
            printf("%d grams = %.5f Ounces (oz) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else if (usermass == 2)  // Metric Tonne
    {
        printf("You have selected Metric Tonnes \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Grams       |\n");
        printf("|Enter |2| Kilogram    |\n");
        printf("|Enter |3| Milligram   |\n");
        printf("|Enter |4| Microgram   |\n");
        printf("|Enter |5| Pound       |\n");
        printf("|Enter |6| Ounce       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 6));
            printf("%d Metric Tonnes = %.5f Grams", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 3));
            printf("%d Metric Tonnes = %.5f Kilograms", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 9));
            printf("%d Metric Tonnes = %.5f Milligrams", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 12));
            printf("%d Metric Tonnes = %.5f Micrograms", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * 2205;
            printf("%d Metric Tonnes = %.5f Pounds (lbs)", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in Metric Tonnes \n");
            scanf("%d", &userinput);
            result = userinput * 35270;
            printf("%d Metric Tonnes = %.5f Ounces (oz) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else if (usermass == 3) // Milligram
    {
        printf("You have selected Millgrams \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Grams       |\n");
        printf("|Enter |2| Metric Tonne|\n");
        printf("|Enter |3| Kilogram    |\n");
        printf("|Enter |4| Microgram   |\n");
        printf("|Enter |5| Pound       |\n");
        printf("|Enter |6| Ounce       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 3));
            printf("%d Millgrams = %.5f Grams", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 9));
            printf("%d Millgrams = %.5f Metric Tonnes", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 6));
            printf("%d Millgrams = %.5f Kilograms", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput * (1 * pow(10, 3));
            printf("%d Millgrams = %.5f Micrograms", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput / 453600;
            printf("%d Millgrams = %.5f Pounds (lbs)", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in Millgrams \n");
            scanf("%d", &userinput);
            result = userinput / 28350;
            printf("%d Millgrams = %.5f Ounces (oz) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else if (usermass == 4) // Microgram
    {
        printf("You have selected Micrograms \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Gram        |\n");
        printf("|Enter |2| Metric Tonne|\n");
        printf("|Enter |3| Kilogram    |\n");
        printf("|Enter |4| Milligram   |\n");
        printf("|Enter |5| Pound       |\n");
        printf("|Enter |6| Ounce       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 6));
            printf("%d Micrograms = %.2f Grams", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 12));
            printf("%d Micrograms = %.2f Metric Tonnes", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 9));
            printf("%d Micrograms = %.2f Kilograms", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(10, 3));
            printf("%d Micrograms = %.2f Milligram", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / (1 * pow(4.536, 8));
            printf("%d Micrograms = %.2f Pounds (lbs)", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in Micrograms \n");
            scanf("%d", &userinput);
            result = userinput / pow(2.835, 7);
            printf("%d Micrograms = %.3f Ounces (oz) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else if (usermass == 5) // Pound
    {
        printf("You have selected Pounds \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Grams       |\n");
        printf("|Enter |2| Metric Tonne|\n");
        printf("|Enter |3| Kilogram    |\n");
        printf("|Enter |4| Milligram   |\n");
        printf("|Enter |5| Microgram   |\n");
        printf("|Enter |6| Ounce       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = (userinput * 453.6);
            printf("%d Pounds = %.5f Grams", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = userinput / 2205;
            printf("%d Pounds = %.5f Metric Tonnes", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = userinput / 2.205;
            printf("%d Pounds = %.5f Kilograms", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = userinput * 453600;
            printf("%d Pounds = %.5f Milligrams", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = userinput * pow(4.536, 8);
            printf("%d Pounds = %.5f Micrograms", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in Pounds \n");
            scanf("%d", &userinput);
            result = userinput * 16;
            printf("%d Pounds = %.5f Ounces (oz) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else if (usermass == 6) // Ounce
    {
        printf("You have selected Ounces \n");
        printf("Which unit of mass would you like to convert into? \n");
        printf("------------------------\n");
        printf("|Enter |1| Grams       |\n");
        printf("|Enter |2| Metric Tonne|\n");
        printf("|Enter |3| Kilogram    |\n");
        printf("|Enter |4| Milligram   |\n");
        printf("|Enter |5| Microgram   |\n");
        printf("|Enter |6| Pound       |\n");
        printf("------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput * 28.35;
            printf("%d Ounces = %.5f Grams", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput / 35270;
            printf("%d Ounces = %.5f Metric Tonnes", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput / 35.274;
            printf("%d Ounces = %.5f Kilograms", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput * 28350;
            printf("%d Ounces = %.5f Milligrams", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput * pow(2.835, 7);
            printf("%d Ounces = %.5f Micrograms", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in Ounces \n");
            scanf("%d", &userinput);
            result = userinput / 16;
            printf("%d Ounces = %.5f Pound (lbs) ", userinput, result);
        }
        else
        {
            printf("Selection was incorrect.");
        }
    }
    else
    {
        printf("Selection was incorrect");
    }
    

}
void calculateCurrency()
{
    scanf("%d", &usercurrency);
    if (usercurrency == 1)
    {
        printf("You have selected US dollar (USD) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  Euro               (EUR)|\n");
        printf("|Enter |2|  Japanese Yen       (JPY)|\n");
        printf("|Enter |3|  Pound sterling     (GBP)|\n");
        printf("|Enter |4|  Australian dollar  (AUD)|\n");
        printf("|Enter |5|  Canadian dollar    (CAD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);
        
        if (userinput == 1)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 1.0035875;
            printf("%d USD = %f Euros", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 147.497;
            printf("%d USD = %f JPY", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 0.861060;
            printf("%d USD = %f GPB", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 1.55806;
            printf("%d USD = %f AUD", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 1.36196;
            printf("%d USD = %f CAD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 0.995762;
            printf("%d USD = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 7.2707;
            printf("%d USD = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 7.84931;
            printf("%d USD = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in USD \n");
            scanf("%d", &userinput);
            result = userinput * 1.71980;
            printf("%d USD = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }

    }
    else if (usercurrency == 2)
    {
        printf("You have selected Euro (EUR) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Japanese Yen       (JPY)|\n");
        printf("|Enter |3|  Pound sterling     (GBP)|\n");
        printf("|Enter |4|  Australian dollar  (AUD)|\n");
        printf("|Enter |5|  Canadian dollar    (CAD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 0.99645966;
            printf("%d EUR = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 146.9418;
            printf("%d EUR = %f JPY", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 0.85803208;
            printf("%d EUR = %f GPB", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 1.5503013;
            printf("%d EUR = %f AUD", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 1.357763;
            printf("%d EUR = %f CAD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 0.99277017;
            printf("%d EUR = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 7.2148181;
            printf("%d EUR = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 7.8212668; 
            printf("%d EUR = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in EUR \n");
            scanf("%d", &userinput);
            result = userinput * 1.7139951;
            printf("%d EUR = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }

    }
    else if (usercurrency == 3)
    {
        printf("You have selected Japanese Yen (JPY) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Pound sterling     (GBP)|\n");
        printf("|Enter |4|  Australian dollar  (AUD)|\n");
        printf("|Enter |5|  Canadian dollar    (CAD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.0067813219;
            printf("%d JPY = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.0068054154;
            printf("%d JPY = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.0058392647;
            printf("%d JPY = %f GPB", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.010550445;
            printf("%d JPY = %f AUD", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.0092401411;
            printf("%d JPY = %f CAD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.0067562134;
            printf("%d JPY = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.049124341;
            printf("%d JPY = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.053227497;
            printf("%d JPY = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in JPY \n");
            scanf("%d", &userinput);
            result = userinput * 0.011663497;
            printf("%d JPY = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }

    }
    else if (usercurrency == 4)
    {
        printf("You have selected Pound Sterling (GBP) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Australian dollar  (AUD)|\n");
        printf("|Enter |5|  Canadian dollar    (CAD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.1613252;
            printf("%d GBP = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.1654301;
            printf("%d GBP = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 171.25351;
            printf("%d GBP = %f JPY", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.8076811;
            printf("%d GBP = %f AUD", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.5818522;
            printf("%d GBP = %f CAD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.1570252;
            printf("%d GBP = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 8.4163053;
            printf("%d GBP = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 0.053227497;
            printf("%d GBP = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.9974148;
            printf("%d GBP = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 5)
    {
        printf("You have selected Australian Dollar (AUD) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Canadian dollar    (CAD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in AUD \n");
            scanf("%d", &userinput);
            result = userinput * 0.64243919;
            printf("%d AUD = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in AUD \n");
            scanf("%d", &userinput);
            result = userinput * 0.64471004;
            printf("%d AUD = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in AUD \n");
            scanf("%d", &userinput);
            result = userinput * 94.736572;
            printf("%d AUD = %f JPY", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in AUD \n");
            scanf("%d", &userinput);
            result = userinput * 0.55319493;
            printf("%d AUD = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 0.87507259;
            printf("%d GBP = %f CAD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 0.6400605;
            printf("%d GBP = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 4.6558574;
            printf("%d GBP = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 5.0425907;
            printf("%d GBP = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in GBP \n");
            scanf("%d", &userinput);
            result = userinput * 1.1049598;
            printf("%d GBP = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 6)
    {
        printf("You have selected Canadian dollar (CAD) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Swiss franc        (CHF)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 0.73415532;
            printf("%d CAD = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 0.73675036;
            printf("%d CAD = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 108.26139;
            printf("%d CAD = %f JPY", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 0.63217033;
            printf("%d CAD = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 1.1427623;
            printf("%d CAD = %f AUD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 0.73143703;
            printf("%d CAD = %f CHF", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 5.3205385;
            printf("%d CAD = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 5.7624827;
            printf("%d CAD = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in CAD \n");
            scanf("%d", &userinput);
            result = userinput * 1.2627064;
            printf("%d CAD = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 7)
    {
        printf("You have selected Swiss franc (CHF) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Canadian dollar    (CAD)|\n");
        printf("|Enter |7|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 1.0037077;
            printf("%d CHF = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 1.0072555;
            printf("%d CHF = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 148.01062;
            printf("%d CHF = %f JPY", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 0.8642779;
            printf("%d CHF = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 1.5629475;
            printf("%d CHF = %f AUD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 1.3667765;
            printf("%d CHF = %f CAD", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 7.2756152;
            printf("%d CHF = %f CNH", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 7.8782585;
            printf("%d CHF = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in CHF \n");
            scanf("%d", &userinput);
            result = userinput * 1.7262314;
            printf("%d CHF = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 8)
    {
        printf("You have selected Chinese Renminbi (CNH) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Canadian dollar    (CAD)|\n");
        printf("|Enter |7|  Swiss franc        (CHF)|\n");
        printf("|Enter |8|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.13795503;
            printf("%d CNH = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.13844266;
            printf("%d CNH = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 20.343383;
            printf("%d CNH = %f JPY", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.11879104;
            printf("%d CNH = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.21481998;
            printf("%d CNH = %f AUD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.18785717;
            printf("%d CNH = %f CAD", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.13744542;
            printf("%d CNH = %f CHF", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 1.0828306;
            printf("%d CNH = %f HKD", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in CNH \n");
            scanf("%d", &userinput);
            result = userinput * 0.2372626;
            printf("%d CNH = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 9)
    {
        printf("You have selected Hong Kong dollar (HKD) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Canadian dollar    (CAD)|\n");
        printf("|Enter |7|  Swiss franc        (CHF)|\n");
        printf("|Enter |8|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |9|  New Zealand dollar (NZD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.12740223;
            printf("%d HKD = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.12785256;
            printf("%d HKD = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 18.787226;
            printf("%d HKD = %f JPY", userinput, result);
        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.10970418;
            printf("%d HKD = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.19838744;
            printf("%d HKD = %f AUD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.17348714;
            printf("%d HKD = %f CAD", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.12693161;
            printf("%d HKD = %f CHF", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.92350552;
            printf("%d HKD = %f CNH", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in HKD \n");
            scanf("%d", &userinput);
            result = userinput * 0.21911332;
            printf("%d HKD = %f NZD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else if (usercurrency == 10)
    {
        printf("You have selected New Zealand Dollar (NZD) \n");
        printf("Which currency would you like to convert into? \n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US Dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Canadian dollar    (CAD)|\n");
        printf("|Enter |7|  Swiss franc        (CHF)|\n");
        printf("|Enter |8|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |9|  Hong Kong dollar   (HKD)|\n");
        printf("-------------------------------------\n");
        scanf("%d", &userinput);

        if (userinput == 1)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.58144446;
            printf("%d NZD = %f USD", userinput, result);
        }
        else if (userinput == 2)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.58349971;
            printf("%d NZD = %f EUR", userinput, result);
        }
        else if (userinput == 3)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 85.742052;
            printf("%d NZD = %f JPY", userinput, result);

        }
        else if (userinput == 4)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.50067326;
            printf("%d NZD = %f GBP", userinput, result);
        }
        else if (userinput == 5)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.90541021;
            printf("%d NZD = %f AUD", userinput, result);
        }
        else if (userinput == 6)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.791769;
            printf("%d NZD = %f CAD", userinput, result);
        }
        else if (userinput == 7)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 0.57929661;
            printf("%d NZD = %f CHF", userinput, result);
        }
        else if (userinput == 8)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 4.2147392;
            printf("%d NZD = %f CNH", userinput, result);
        }
        else if (userinput == 9)
        {
            printf("Please enter the amount in NZD \n");
            scanf("%d", &userinput);
            result = userinput * 4.5638484;
            printf("%d NZD = %f HKD", userinput, result);
        }
        else
        {
            printf("Selection was incorrect\n");
        }
    }
    else
    {
        printf("Selection was incorrect");
    }
}

int main()
{
    printf("Welcome to the unit converter\n");
    printf("Please select one of the following units you wish to convert from\n");
    printf("Temperature (T), Currency (C) or Mass (M)\n");
    printf("--------------------------------------------------------------------\n");
    scanf("%c", &category);//Remember to always reference back to the variable which has been created
     printf("--------------------------------------------------------------------\n");

    //Getting user input
    if (category == 'T')
    {
        printf("You have selected to Temperature category\n");
        printf("Which of the following units would you like to convert from?\n");
        printf("----------------------------------\n");
        printf("|Enter |1| Celsius to Fahrenheit |\n");
        printf("|Enter |2| Celsius to Kelvin     |\n");
        printf("|Enter |3| Fahrenheit to Celsius |\n");
        printf("|Enter |4| Fahrenheit to Kelvin  |\n");
        printf("|Enter |5| Kelvin to Celcius     |\n");
        printf("|Enter |6| Kelvin to Fahrenheit  |\n");
        printf("----------------------------------\n");
        calculateTemperature();
    }
    else if (category == 'C')
    {
        printf("You have selected to Currency category");
        printf("Which of the following units would you like to convert from?\n");
        printf("-------------------------------------\n");
        printf("|Enter |1|  US dollar          (USD)|\n");
        printf("|Enter |2|  Euro               (EUR)|\n");
        printf("|Enter |3|  Japanese Yen       (JPY)|\n");
        printf("|Enter |4|  Pound sterling     (GBP)|\n");
        printf("|Enter |5|  Australian dollar  (AUD)|\n");
        printf("|Enter |6|  Canadian dollar    (CAD)|\n");
        printf("|Enter |7|  Swiss franc        (CHF)|\n");
        printf("|Enter |8|  Chinese Renminbi   (CNH)|\n");
        printf("|Enter |9|  Hong Kong dollar   (HKD)|\n");
        printf("|Enter |10| New Zealond dollar (NZD)|\n");
        printf("-------------------------------------\n");
        calculateCurrency();
    }
    else if (category == 'M')
    {
        printf("You have selected to Mass category\n");
        printf("Which of the following units would you like to convert from?\n");
        printf("-------------------------\n");
        printf("|Enter |1| Grams        |\n");
        printf("|Enter |2| Metric Tonne |\n");
        printf("|Enter |3| Milligram    |\n");
        printf("|Enter |4| Microgram    |\n");
        printf("|Enter |5| Pound        |\n");
        printf("|Enter |6| Ounce        |\n");
        printf("-------------------------\n");
        calculateMass();
    }
    else
    {
        printf("Wrong input, please select again");
    }
    return 0;
}