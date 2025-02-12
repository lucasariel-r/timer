char zero[9][6];
char one[9][6];
char two[9][6];

int definePrintableNumbers(){
    // complete column
    zero[0][0] = '['; zero[1][0] = ']'; zero[2][0] = '['; zero[3][0] = ']'; zero[4][0] = '['; zero[5][0] = ']'; zero[6][0] = '['; zero[7][0] = ']';

    // left and right only column
    zero[0][1] = '['; zero[1][1] = ']'; zero[2][1] = ' '; zero[3][1] = ' '; zero[4][1] = ' '; zero[5][1] = ' '; zero[6][1] = '['; zero[7][1] = ']';

    zero[0][2] = '['; zero[1][2] = ']'; zero[2][2] = ' '; zero[3][2] = ' '; zero[4][2] = ' '; zero[5][2] = ' '; zero[6][2] = '['; zero[7][2] = ']';

    zero[0][3] = '['; zero[1][3] = ']'; zero[2][3] = ' '; zero[3][3] = ' '; zero[4][3] = ' '; zero[5][3] = ' '; zero[6][3] = '['; zero[7][3] = ']';

    zero[0][4] = '['; zero[1][4] = ']'; zero[2][4] = '['; zero[3][4] = ']'; zero[4][4] = '['; zero[5][4] = ']'; zero[6][4] = '['; zero[7][4] = ']';



    one[0][0] = ' '; one[1][0] = ' '; one[2][0] = ' '; one[3][0] = '['; one[4][0] = ']'; one[5][0] = ' '; one[6][0] = ' '; one[7][0] = ' ';

    one[0][1] = ' '; one[1][1] = ' '; one[2][1] = ' '; one[3][1] = '['; one[4][1] = ']'; one[5][1] = ' '; one[6][1] = ' '; one[7][1] = ' ';

    one[0][2] = ' '; one[1][2] = ' '; one[2][2] = ' '; one[3][2] = '['; one[4][2] = ']'; one[5][2] = ' '; one[6][2] = ' '; one[7][2] = ' ';

    one[0][3] = ' '; one[1][3] = ' '; one[2][3] = ' '; one[3][3] = '['; one[4][3] = ']'; one[5][3] = ' '; one[6][3] = ' '; one[7][3] = ' ';

    one[0][4] = ' '; one[1][4] = ' '; one[2][4] = ' '; one[3][4] = '['; one[4][4] = ']'; one[5][4] = ' '; one[6][4] = ' '; one[7][4] = ' ';



    two[0][0] = '['; two[1][0] = ']'; two[2][0] = '['; two[3][0] = ']'; two[4][0] = '['; two[5][0] = ']'; two[6][0] = '['; two[7][0] = ']';

    // just right
    two[0][1] = ' '; two[1][1] = ' '; two[2][1] = ' '; two[3][1] = ' '; two[4][1] = ' '; two[5][1] = ' '; two[6][1] = '['; two[7][1] = ']';

    two[0][2] = '['; two[1][2] = ']'; two[2][2] = '['; two[3][2] = ']'; two[4][2] = '['; two[5][2] = ']'; two[6][2] = '['; two[7][2] = ']';

    // just left
    two[0][3] = '['; two[1][3] = ']'; two[2][3] = ' '; two[3][3] = ' '; two[4][3] = ' '; two[5][3] = ' '; two[6][3] = ' '; two[7][3] = ' ';

    two[0][4] = '['; two[1][4] = ']'; two[2][4] = '['; two[3][4] = ']'; two[4][4] = '['; two[5][4] = ']'; two[6][4] = '['; two[7][4] = ']';


};

char three1[9] = "[][][][]";
char three2[9] = "      []";
char three3[9] = "[][][][]";
char three4[9] = "      []";
char three5[9] = "[][][][]";

char four1[9] = "[]    []";
char four2[9] = "[]    []";
char four3[9] = "[][][][]";
char four4[9] = "      []";
char four5[9] = "      []";

char five1[9] = "[][][][]";
char five2[9] = "[]      ";
char five3[9] = "[][][][]";
char five4[9] = "      []";
char five5[9] = "[][][][]";

char six1[9] = "[][][][]";
char six2[9] = "[]      ";
char six3[9] = "[][][][]";
char six4[9] = "[]    []";
char six5[9] = "[][][][]";

char seven1[9] = "[][][][]";
char seven2[9] = "      []";
char seven3[9] = "      []";
char seven4[9] = "      []";
char seven5[9] = "      []";

char eight1[9] = "[][][][]";
char eight2[9] = "[]    []";
char eight3[9] = "[][][][]";
char eight4[9] = "[]    []";
char eight5[9] = "[][][][]";

char nine1[9] = "[][][][]";
char nine2[9] = "[]    []";
char nine3[9] = "[][][][]";
char nine4[9] = "      []";
char nine5[9] = "[][][][]";

char twoPoints1[9] = "        ";
char twoPoints2[9] = "   []   ";
char twoPoints3[9] = "        ";
char twoPoints4[9] = "   []   ";
char twoPoints5[9] = "        ";

