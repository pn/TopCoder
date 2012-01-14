import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class MinCostPalindrome
{
    public int getMinimum(String s, int oCost, int xCost)
    {
        int result = 0;
        int size = s.length();
        for (int i = 0; i < (size + 1) / 2; i++) {
            if (s.charAt(i) == '?' && s.charAt(size - 1 - i) == '?') {
                result += 2 * min(oCost, xCost);
            } else if (s.charAt(i) == '?' || s.charAt(size - 1 - i) == '?') {
                if (s.charAt(i) == 'o' || s.charAt(size - 1 - i) == 'o')
                    result += oCost;
                else
                    result += xCost;
            } else if (s.charAt(i) != s.charAt(size - 1 - i))
                return -1;
        }
        return result;
    }
}

