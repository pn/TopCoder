
import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class GogoXBallsAndBinsEasy
{
	public int solve(int[] T)
	{
        int result = 0;
        for (int i=0; i< T.length/2; i++)
            result += T[T.length-1-i]-T[i];
        return result;
	}
}

