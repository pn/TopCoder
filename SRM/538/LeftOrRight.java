import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class LeftOrRight
{
	public int maxDistance(String program)
	{
        int l = 0, r = 0, u = 0, ml = 0, mr = 0;
        for (int i=0; i<program.length(); i++) {
            switch(program.charAt(i)) {
                case 'L':l++;r--;break;
                case 'R':r++;l--;break;
                case '?':l++;r++;break;
            }
            mr = max(mr, r);
            ml = max(ml, l);
        }
        return max(ml,mr);
	}
}

