
char test_numbers[][50] = {
        "10 1 2 3 1 2 3 1 1 1 1", "4 7",
        "+10 1 2 3 1 2 3 1 1 1 1", "4 7",
        "10\n1 2 3 1 2 3 1 1 1 1", "4 7",
        "10 1 2 3 4 3 3 1 2 3 4", "4 1",
        "10 1.5 2 3 4.7 3 3 1 2 3 4", "4 1",
        "3 1 2 3 1 2 3 1 1 1 1", "3 1",
        "3 10 20 30 40 50", "3 1",
        "5 5 4 3 2 1", "0",
        "4 3 2 1 2", "2 3",
        "4 3e1 2e1 1e1 -2.700000e+00", "0",
        "6 -1 -2 -1 -2 -1 -2", "2 2",
        "4 0.5 1.789 -0.555 +0.555", "2 1",
        "3 4 1 2", "2 2",
        "3 1 0 2", "2 2",
        "7 1 2 1 2 1 2 3", "3 5",
        "4 1 2 1 2", "2 1",
        "3 1 2 3", "3 1",
        "", "[error]",
        "1 1", "[error]",
        "10.1 1 2 3 1 2 3 1 1 1 1", "[error]",
        "10 1 2 3 1 2 3 1 1 1 1", "4 7",
        "10 1 2 3 1 2 3 1 1 1 1", "4 7",
        "10 1 2 3", "[error]",
        "-3 1 2 3", "[error]",
        "3- 1 2 3", "[error]",
        "10", "[error]",
        "3 10 20 30 40 50 zxczxc", "3 1",
        "3 1 2 -2.70e0000e+00", "2 1",
        "3 1 2 -2.70E0000E+00", "2 1",
        "3 1 2 -2.70e0000E+00", "2 1",
        "3 1 2 -2.70+0000E+2", "2 1",
        "3 1 2 -2.70-0000E-2", "2 1",
};

int main() {
    return 0;
}

void test() {
    char t[][MAXLEN] = {
            "10 1 2 3 1 2 3 1 1 1 1", "4 7",
            "+10 1 2 3 1 2 3 1 1 1 1", "4 7",
            "10\n1 2 3 1 2 3 1 1 1 1", "4 7",
            "10 1 2 3 4 3 3 1 2 3 4", "4 1",
            "10 1.5 2 3 4.7 3 3 1 2 3 4", "4 1",
            "3 1 2 3 1 2 3 1 1 1 1", "3 1",
            "3 10 20 30 40 50", "3 1",
            "5 5 4 3 2 1", "0",
            "4 3 2 1 2", "2 3",
            "4 3e1 2e1 1e1 -2.700000e+00", "0",
            "6 -1 -2 -1 -2 -1 -2", "2 2",
            "4 0.5 1.789 -0.555 +0.555", "2 1",
            "3 4 1 2", "2 2",
            "3 1 0 2", "2 2",
            "7 1 2 1 2 1 2 3", "3 5",
            "4 1 2 1 2", "2 1",
            "3 1 2 3", "3 1",
            "", "[error]",
            "1 1", "[error]",
            "10.1 1 2 3 1 2 3 1 1 1 1", "[error]",
            "10   1 2 3 1 2 3 1 1 1 1", "[error]",
            "10 1 2   3 1 2 3 1 1 1 1", "[error]",
            "10 1 2 3", "[error]",
            "-3 1 2 3", "[error]",
            "3- 1 2 3", "[error]",
            "10", "[error]",
            "3 10 20 30 40 50  zxczxc", "[error]",
            "3 1 2 -2.70e0000e+00", "[error]",
            "3 1 2 -2.70E0000E+00", "[error]",
            "3 1 2 -2.70e0000E+00", "[error]",
            "3 1 2 -2.70+0000E+2", "[error]",
            "3 1 2 -2.70-0000E-2", "[error]",
    };

    for (int i = 0; i < sizeof(t) / MAXLEN; i += 2) {
        printf("%-7s :  %s\n", t[i + 1], t[i]);
        get_result(t[i]);
    }
}