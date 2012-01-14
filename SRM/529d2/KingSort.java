
import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

class King
{
    String fullName;
    String name;
    String romanNumber;
    int number;
    private final String[] RNUM = {"I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX", "X", "XX", "XXX", "XL",  "L"};
    private final int[] DNUM = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 20, 30, 40, 50};

    King(String n)
    {
        fullName = n;
        String[] a = n.split(" ");
        name = a[0];
        romanNumber = a[1];
        number = 0;
        int i = RNUM.length - 1;
        n = romanNumber;
        while (n.length() > 0 && i >= 0)
        {
            if(n.startsWith(RNUM[i]))
            {
                number += DNUM[i];
                n = n.replaceFirst(RNUM[i], "");
            }
            i--;
        }
    }

    public String toString()
    {
        return fullName;
    }
}

class KingComparator implements Comparator<King>
{
    public int compare(King k1, King k2)
    {
        int c = k1.name.compareTo(k2.name);
        if (c == 0)
            return k1.number - k2.number;
        else
            return c;
    }
}

public class KingSort
{
    public String[] getSortedList(String[] kings)
    {
        List<King> listOfKings = new ArrayList();
        for (int i = 0; i < kings.length; i++)
            listOfKings.add(new King(kings[i]));
        KingComparator comparator = new KingComparator();
        Collections.sort(listOfKings, comparator);
        for (int i = 0; i<kings.length; i++)
        {
            kings[i] = listOfKings.get(i).toString();
        }
        return kings;
    }
}

