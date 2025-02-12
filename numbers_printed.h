char zero[9][6];
char one[9][6];
char two[9][6];
char three[9][6];

int definePrintableNumbers(){
    int completeRow(char var[9][6], int column){
        var[0][column] = '['; var[1][column] = ']'; var[2][column] = '['; var[3][column] = ']'; var[4][column] = '['; var[5][column] = ']'; var[6][column] = '['; var[7][column] = ']';

        return 0;
    };

    int leftAndRightRow(char var[9][6], int column){
        var[0][column] = '['; var[1][column] = ']'; var[2][column] = ' '; var[3][column] = ' '; var[4][column] = ' '; var[5][column] = ' '; var[6][column] = '['; var[7][column] = ']';

        return 0;
    };

    // prints zero
    completeRow(zero, 0);
    leftAndRightRow(zero, 1);
    leftAndRightRow(zero, 2);
    leftAndRightRow(zero, 3);
    completeRow(zero, 4);


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


    three[0][0] = '['; three[1][0] = ']'; three[2][0] = '['; three[3][0] = ']'; three[4][0] = '['; three[5][0] = ']'; three[6][0] = '['; three[7][0] = ']';

    three[0][1] = ' '; three[1][1] = ' '; three[2][1] = ' '; three[3][1] = ' '; three[4][1] = ' '; three[5][1] = ' '; three[6][1] = '['; three[7][1] = ']';

    three[0][2] = '['; three[1][2] = ']'; three[2][2] = '['; three[3][2] = ']'; three[4][2] = '['; three[5][2] = ']'; three[6][2] = '['; three[7][2] = ']';

    three[0][3] = ' '; three[1][3] = ' '; three[2][3] = ' '; three[3][3] = ' '; three[4][3] = ' '; three[5][3] = ' '; three[6][3] = '['; three[7][3] = ']';

    three[0][4] = '['; three[1][4] = ']'; three[2][4] = '['; three[3][4] = ']'; three[4][4] = '['; three[5][4] = ']'; three[6][4] = '['; three[7][4] = ']';


    /*four[0][0] = '['; four[1][0] = ']'; four[2][0] = ' ' four[3][0] = ' ' four[4][0] = ' four[5][0] = ' ' four[6][0] = '['; four[7][0] = ']';*/
    /*four[0][1] = '['; four[1][1] = ']'; four[2][1] = ' '; four[3][1] = ' '; four[4][1] = ' '; four[5][1] = ' '; four[6][1] = '['; four[7][1] = ']';*/
    /*three[0][2] = '['; three[1][2] = ']'; three[2][2] = '['; three[3][2] = ']'; three[4][2] = '['; three[5][2] = ']'; three[6][2] = '['; three[7][2] = ']';*/
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

