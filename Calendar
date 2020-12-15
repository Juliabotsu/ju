package com.company;

import java.util.Arrays;
import java.util.Calendar;
import java.util.List;

public class Result {
    static List<String> days = Arrays.asList("SUNDAY", "MONDAY", "TUESDAY", "WEDNESDAY", "THURSDAY", "FRIDAY", "SATURDAY");


    public static String getDay(String year, String month, String day) {

        int y = Integer.parseInt(year);
        int m = Integer.parseInt(month);
        int d = Integer.parseInt(day);

        Calendar c = Calendar.getInstance();
        c.set(y, m, d);
        int p = c.get(Calendar.DAY_OF_WEEK);
        String s = days.get(p-1);
        return s;

    }

}


package com.company;

import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws IOException {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
        System.out.println(Result.getDay(day, month, year));
    }
}
