//Function To Check for Leap year
int  leap_year(int year)
{
    return (((year % 4 == 0) && (year % 100 != 0)) ||(year % 400 == 0));
}
// returns 1 if given date is valid.