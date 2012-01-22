
import static java.lang.Math.*;
import static java.math.BigInteger.*;
import static java.util.Arrays.*;
import static java.util.Collections.*;
import java.math.*;
import java.util.*;

public class MinskyMysteryDiv2
{
    public long computeAnswer(long N)
    {
        long[] bag = new long[5];
        bag[0] = N;

        //Add a marble into bag 1.
        bag[1]++;
        //Repeat forever:
        while(true)
        {
            //Add a marble into bag 1.
            bag[1]++;
            //Empty bag 4.
            bag[4] = 0;
            //While there are marbles in bag 0:
            while (bag[0] > 0)
            {
                //While there are marbles both in bag 0 and in bag 1:
                    //Remove a marble from bag 0.
                    //Remove a marble from bag 1.
                    //Add a marble into  bag 2.
                    //Add a marble into  bag 3.
                //End While             
                if (bag[0] > 0 &&  bag[1] > 0)
                {
                    long m = min(bag[0], bag[1]);
                    bag[0] -= m; bag[1] -= m; bag[2] += m; bag[3] += m;
                }
                //Add a marble into bag  4.
                bag[4]++;
                //If bags 0 and 1 are both empty:
                if(bag[0] == 0 && bag[1] == 0)
                {
                    //Move all marbles  from bag 3 to bag 4.
                    bag[4] += bag[3];
                    //TERMINATE THE GAME
                    return bag[4];
                } //End If

                //Move all marbles from bag 3 to bag 1.
                bag[1] += bag[3];
                bag[3] = 0;
            }//End While
            //Move all marbles from b ag 2 to bag 0.
            bag[0] += bag[2];
            bag[2] = 0;
            System.out.println(bag[0]+" "+bag[1]+" "+bag[2]+" "+bag[3]+" "+bag[4]);
        } //End Repeat
    }
}

