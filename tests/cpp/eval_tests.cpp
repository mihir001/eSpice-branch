#include "../../src/cpp/eval.cpp"
#include<string>

/*
    Copyright 2017 Yogesh Aggarwal
*/


// Test case 1 -> INVALID COMMAND

// Test case 2 -> Adds the values 2 and 5 and prints 7

// Test case 3 -> Prints "Hello World"

// Test case 4 -> Prints 2

// Test case 5 -> Prints Hi


void tests() {
    int pass = 0, fail = 0;

    std::string test1 = "-.>,reg,][";
    node *t1 = parse(test1 , test1.length());
    if ( t1 == NULL ) {
        printf("Case 1: OK \n");
        pass++;
    } else {
        printf("Case 1: FAIL \n");
        fail++;
    }
    cout<<endl;

    std::string test2 = "++>+++++[<+>-]++++++++[<++++++>-]<.";
    node *t2 = parse(test2, test2.length());
    evaluate(t2);
    if ( stx == "7" ) {
        printf(" \nCase 2: OK \n");
        pass++;
    } else {
        printf("Case 2: FAIL \n");
        fail++;
    }
    cout<<endl;

    std::string test3 = "++++++++++[>+++++++>++++++++++>+++>+<<<<-]>++.>+.+++++++..+++.>++.<<+++++++++++++++.>.+++.------.--------.>+.>.";
    node *t3 = parse(test3 , test3.length());
    evaluate(t3);
    if ( stx == "Hello World!\n" ) {
        printf("Case 3: OK \n");
        pass++;
    } else {
        printf("Case 3: FAIL \n");
        fail++;
    }
    cout<<endl;

    std::string test4 = "+++++++sq+.";
    node *t4 = parse(test4 , test4.length());
    evaluate(t4);
    cout<<endl;
    if ( stx == "2" ) {
        printf("Case 4: OK \n");
        pass++;
    } else {
        printf("Case 4: FAIL \n");
        fail++;
    }
    cout<<endl;

    std::string test5 = "++++fact>+++sq-[<++++++>-]<.>+++++fact+sr++++>++++sq-[<++++++>-]<.";
    node *t5 = parse(test5 , test5.length());
    evaluate(t5);
    cout<<endl;
    if ( stx == "Hi" ) {
        printf("Case 5: OK \n");
        pass++;
    } else {
        printf("Case 5: FAIL \n");
        fail++;
    }
    cout<<endl;

    if ( fail ) {
        printf("INCORRECT \n");
    } else {
        printf("CORRECT \n");
    }
}

int main() {
    tests();
}

