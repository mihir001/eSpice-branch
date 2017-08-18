#include "../../src/cpp/parse.cpp"
#include<iostream>
#include<bits/stdc++.h>
#include<string>

/*
    TEST FUNCTION

    1-> Contains invalid commands ie. r,/ , OUTPUT -> NULL
    2-> Contains a ] before any [ OUTPUT -> NULL
    3-> Contains unequal number of [ and ] OUTPUT -> NULL
    4-> Valid Command
    5-> Valid Command
    6-> Valid Command (Checking language extensions)
*/


string str1 = "r/.<";
string str2 = ".].>[";
string str3 = "[[..]";
string str4 = "<[.[-]]";
string str5 = "++[->+[-]<]-->";
string str6 = "+++++--[sq----<<fact[++]-sr--]fact";

bool test_case(string code,int sz) {
    node *ptr = parse(code , sz);
    if ( ptr == NULL ) {
        return 0;
    }
    return 1;
}

void tests() {
    int pass = 0, fail = 0;

    if ( !test_case(str1 , str1.length()) ) {
        printf("Case 1: OK \n");
        pass++;
    } else {
        printf("Case 1: FAIL \n");
        fail++;
    }
    if ( !test_case(str2 , str2.length()) ) {
        printf("Case 2: OK \n");
        pass++;
    } else {
        printf("Case 2: FAIL \n");
        fail++;
    }

    if ( !test_case(str3 , str3.length()) ) {
        printf("Case 3: OK \n");
        pass++;
    } else {
        printf("Case 3: FAIL \n");
        fail++;
    }

    if ( test_case(str4 , str4.length()) ) {
        printf("Case 4: OK \n");
        pass++;
    } else {
        printf("Case 4: FAIL \n");
        fail++;
    }
    if ( test_case(str5 , str5.length()) ) {
        printf("Case 5: OK \n");
        pass++;
    } else {
        printf("Case 5: FAIL \n");
        fail++;
    }
    if ( test_case(str6 , str6.length()) ) {
        printf("Case 6: OK \n");
        pass++;
    } else {
        printf("Case 6: FAIL \n");
        fail++;
    }

    if ( fail ) {
        printf("STATUS: INCORRECT \n");
    } else {
        printf("STATUS: CORRECT \n");
    }
}

int main() {
    tests();
}
