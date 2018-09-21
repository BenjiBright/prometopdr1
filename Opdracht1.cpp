#include <iostream>
using namespace std;

int main ()
{
    //Deze drie variabelen worden gedeclareerd en gelijk geinitaliseerd
    const int currentYear = 2018;
    const int currentMonth = 9;
    const int currentDay = 24;

    //Deze variabelen worden alleen gedeclareerd
    int yearOfBirth;
    int monthOfBirth;
    int dayOfBirth;

    int movedWeekdays;
    int yearsSince1901;

    //Laat een welkom bericht zien
    std::cout << "Welcome." << std::endl;

    //Vraag het geboortejaar op
    std::cout << "Please enter your year of birth." << std::endl;
    std::cin >> yearOfBirth;

    //Vraag de geboortemaand op
    std::cout << "Now please enter your month of birth." << std::endl;
    std::cin >> monthOfBirth;

    //Vraag de geboortedag op
    std::cout << "Please enter your birth day." << std::endl;
    std::cin >> dayOfBirth;

    //Bereken de huidige leeftijd, jaar en maand
    int totalMonthsAlive = ((currentYear - yearOfBirth) * 12) + currentMonth - monthOfBirth;
    int yearsAlive = totalMonthsAlive / 12;
    int monthsAlive = totalMonthsAlive % 12;

    std::cout << "Current age years: " << yearsAlive << std::endl;
    std::cout << "Current age months: " << monthsAlive << std::endl;


    if ((monthOfBirth == 9) && (dayOfBirth == 24))
    {
        cout << "Happy Birthday user!\n";
    }
    else if (dayOfBirth == 24)
    {
        cout << "Happy Monthday user!\n";
    }
    if (yearOfBirth > 2008)
    {
        cout << "Sorry, you are too young.";
    }
    else if ((yearOfBirth == 2008) && (monthOfBirth > 8) && (dayOfBirth > 24))
    {
        cout << "Sorry, you are too young.\n";
    }
    else if (yearOfBirth < 1917)
    {
        cout << "Sorry, you are too old.\n";
    }
    else if ((yearOfBirth == 1917) && (monthOfBirth < 10) && (dayOfBirth < 24))
    {
        cout << "Sorry, you are too old.\n";
    }
    else
    {
        cout << "welcome to Opdracht 1.\n";
    }
    yearsSince1901 = (yearOfBirth - 1901);
    movedWeekdays = (yearsSince1901 * 365 + (yearsSince1901-1)/ 4) % 7; //als dit 0 is, dinsdag. ALs dit 1 is, woensdag, enz. (het aabtal cycli tussen 01 01 1901 en 01 01 ingevoerd jaar)
    //cout << "The number of weekdays moved since Tuesday 1901 is " << movedWeekdays << ".";
    int days_in_month;
    switch (monthOfBirth) {
        case 1: days_in_month = 0;
            break;
        case 2: days_in_month = 31;
            break;
        case 3: days_in_month = 31 + 28;
            break;
        case 4: days_in_month = 31 + 28 + 31;
            break;
        case 5: days_in_month = 31 + 28 + 31 + 30;
            break;
        case 6: days_in_month = 31 + 28 + 31 + 30 + 31;
            break;
        case 7: days_in_month = 31 + 28 + 31 + 30 + 31 + 30;
            break;
        case 8: days_in_month = 31 + 28 + 31 + 30 + 31 + 30 + 31;
            break;
        case 9: days_in_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            break;
        case 10: days_in_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            break;
        case 11: days_in_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            break;
        case 12: days_in_month = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            break;
    }//switch
    int days_total_difference = (days_in_month + dayOfBirth) % 7;
    cout << "Vanaf 1 januari 1901, tot 1 januari + geboortejaar van gebruiker: " << movedWeekdays << endl;
    cout << "Vanaf 1 januari 1901 tot geboortedag gebruiker in 1901: " << days_total_difference % 7 << endl;


    if (    monthOfBirth == 1
        || (monthOfBirth == 2 && dayOfBirth <= 29))
        movedWeekdays --;

    int real_weekday = (movedWeekdays + days_total_difference) % 7; //als 0, dinsdag

    cout << "Real weekday: " << real_weekday << endl;
    char input_weekday;
    char input_weekday2;
    int weekday_number;
    cout << "Please enter on which day of the week you were born (give the first letter). \n";
    cin >> input_weekday;
    if (input_weekday == 'd' || input_weekday == 'D')
        {
        cout << "please enter the second letter ( i or o). \n";
        cin >> input_weekday2;
        }
    if (input_weekday == 'z' || input_weekday == 'Z')
        {
        cout << "please enter the second letter ( a or o) \n";
        cin >> input_weekday2;
        }

    if (input_weekday == 'd' && input_weekday2 == 'i')
        weekday_number = 0;

    else if (input_weekday == 'w')
        weekday_number = 1;

    else if (input_weekday == 'd' && input_weekday2 == 'o')
        weekday_number = 2;

    else if (input_weekday == 'v')
        weekday_number = 3;

    else if (input_weekday == 'z' && input_weekday2 == 'a')
        weekday_number = 4;

    else if (input_weekday == 'z' && input_weekday2 == 'o')
        weekday_number = 5;

    else if (input_weekday == 'm')
        weekday_number = 6;

    if ( real_weekday != weekday_number)
        {
        cout << "Klopt niet, flapdrol" << endl;
        return 1;
        }//if
    else
        cout << "correct, you can now start the quiz.\n";

    //Begin de quiz nu:
    return 0;
}//main
