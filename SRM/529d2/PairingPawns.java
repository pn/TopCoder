
import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class PairingPawns
{
	public int savedPawnCount(int[] start)
	{
        for (int i = start.length - 1; i > 0; i--) {
            start[i-1] += start[i] / 2;
        }
        return start[0];
	}
}

