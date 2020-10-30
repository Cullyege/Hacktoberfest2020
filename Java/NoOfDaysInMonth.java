
/**
 * Gives the number of days in the given month
 * 
 * @author Sebastian
 * @version 1.0
 */
public class NoOfDaysInMonth
{
    String month;
    int year;
    int noOfDays;
    Boolean leapYear;

    /**
     * Constructor that initializes the fields.
     * @param month Assigns the param to the field
     * @param year Assign the param to the field
     */
    public NoOfDaysInMonth(String month, int year) {
        this.month = month;
        this.year = year;
        noOfDays = 0;
        leapYear = false;
    }

    /**
     * Checks how many days are in the month and takes leapyear in to consideration. 
     */
    public void NoOfDays() {

        if(month.equals("January") || month.equals("March") || month.equals("May") || month.equals("July") || month.equals("August") ||
        month.equals("October") || month.equals("December")) {
            noOfDays = 31;
        } else if(month.equals("November") || month.equals("September") || month.equals("June") || month.equals("April")) {
            noOfDays = 30;
        } else if (month.equals("February")) {
            if(((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))) {
                noOfDays = 29;
                leapYear = true;
            } else {
                noOfDays = 28;
            }
        } 
        if(leapYear) {
            System.out.println("There are " + noOfDays + " in " + month + " because its a leap year");
        } else {
            System.out.println("There are " + noOfDays + " in " + month);
        }
        
    }
}
