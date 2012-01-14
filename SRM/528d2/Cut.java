import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class Cut
{
    public int getMaximum(int[] eelLengths, int maxCuts)
    {
        List<Integer> eels = new ArrayList<Integer>();
        for (int i=0; i<eelLengths.length; i++)
            eels.add(eelLengths[i]);
        Collections.sort(eels);
        int result = 0;
        int leftovercuts = 0;
        for (int eel: eels)
        {
            if (eel < 10)
                continue;
            if (eel % 10 == 0)
            {
                int pieces = eel / 10;
                int cuts = min(pieces - 1, maxCuts);
                result += cuts + (cuts+1==pieces?1:0);
                maxCuts -= cuts;
            } else
                leftovercuts += eel / 10;
        }
        if (maxCuts > 0)
            result += min(maxCuts, leftovercuts);

        return result;
    }
}

