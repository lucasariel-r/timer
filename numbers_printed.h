char zero[9][6];
char one[9][6];
char two[9][6];
char three[9][6];
char four[9][6];
char five[9][6];
char six[9][6];
char seven[9][6];
char eight[9][6];
char nine[9][6];
char twoPoints[9][6];

int definePrintableNumbers(){
    int completeRow(char var[9][6], int column){
        var[0][column] = '['; var[1][column] = ']'; var[2][column] = '['; var[3][column] = ']'; var[4][column] = '['; var[5][column] = ']'; var[6][column] = '['; var[7][column] = ']';

        return 0;
    };

    int leftAndRightRow(char var[9][6], int column){
        var[0][column] = '['; var[1][column] = ']'; var[2][column] = ' '; var[3][column] = ' '; var[4][column] = ' '; var[5][column] = ' '; var[6][column] = '['; var[7][column] = ']';

        return 0;
    };

    int atCenterRow(char var[9][6], int column){
        var[0][column] = ' '; var[1][column] = ' '; var[2][column] = ' '; var[3][column] = '['; var[4][column] = ']'; var[5][column] = ' '; var[6][column] = ' '; var[7][column] = ' ';
    };

    int justLeftRow(char var[9][6], int column){
        var[0][column] = '['; var[1][column] = ']'; var[2][column] = ' '; var[3][column] = ' '; var[4][column] = ' '; var[5][column] = ' '; var[6][column] = ' '; var[7][column] = ' ';

        return 0;
    };

    int justRightRow(char var[9][6], int column){
        var[0][column] = ' '; var[1][column] = ' '; var[2][column] = ' '; var[3][column] = ' '; var[4][column] = ' '; var[5][column] = ' '; var[6][column] = '['; var[7][column] = ']';

        return 0;
    };

    int spaceRow(char var[9][6], int column){
        var[0][column] = ' '; var[1][column] = ' '; var[2][column] = ' '; var[3][column] = ' '; var[4][column] = ' '; var[5][column] = ' '; var[6][column] = ' '; var[7][column] = ' ';

        return 0;
    };
    // set zero
    completeRow(zero, 0);
    leftAndRightRow(zero, 1);
    leftAndRightRow(zero, 2);
    leftAndRightRow(zero, 3);
    completeRow(zero, 4);

    // set one
    atCenterRow(one, 0);
    atCenterRow(one, 1);
    atCenterRow(one, 2);
    atCenterRow(one, 3);
    atCenterRow(one, 4);

    // set two
    completeRow(two, 0);
    justRightRow(two, 1);
    completeRow(two, 2);
    justLeftRow(two, 3);
    completeRow(two, 4);

    // set three
    completeRow(three, 0);
    justRightRow(three, 1);
    completeRow(three, 2);
    justRightRow(three, 3);
    completeRow(three, 4);

    // set four
    leftAndRightRow(four, 0);
    leftAndRightRow(four, 1);
    completeRow(four, 2);
    justRightRow(four, 3);
    justRightRow(four, 4);

    // set five
    completeRow(five, 0);
    justLeftRow(five, 1);
    completeRow(five, 2);
    justRightRow(five, 3);
    completeRow(five, 4);

    // set six
    completeRow(six, 0);
    justLeftRow(six, 1);
    completeRow(six, 2);
    leftAndRightRow(six, 3);
    completeRow(six, 4);

    // set seven
    completeRow(seven, 0);
    justRightRow(seven, 1);
    justRightRow(seven, 2);
    justRightRow(seven, 3);
    justRightRow(seven, 4);

    // set eight
    completeRow(eight, 0);
    leftAndRightRow(eight, 1);
    completeRow(eight, 2);
    leftAndRightRow(eight, 3);
    completeRow(eight, 4);

    // set nine
    completeRow(nine, 0);
    leftAndRightRow(nine, 1);
    completeRow(nine, 2);
    justRightRow(nine, 3);
    completeRow(nine, 4);

    // set two points
    spaceRow(twoPoints, 0);
    atCenterRow(twoPoints, 1);
    spaceRow(twoPoints, 2);
    atCenterRow(twoPoints, 3);
    spaceRow(twoPoints, 4);



    /*four[0][0] = '['; four[1][0] = ']'; four[2][0] = ' ' four[3][0] = ' ' four[4][0] = ' four[5][0] = ' ' four[6][0] = '['; four[7][0] = ']';*/
    /*four[0][1] = '['; four[1][1] = ']'; four[2][1] = ' '; four[3][1] = ' '; four[4][1] = ' '; four[5][1] = ' '; four[6][1] = '['; four[7][1] = ']';*/
    /*three[0][2] = '['; three[1][2] = ']'; three[2][2] = '['; three[3][2] = ']'; three[4][2] = '['; three[5][2] = ']'; three[6][2] = '['; three[7][2] = ']';*/
};

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

