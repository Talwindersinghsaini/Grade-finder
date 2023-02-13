
//************************************************************************
// Name : Talwinder singh saini
// course : CS 155 computer science
// Semester : 1
// Assignment A7 : Practice with switch
// Date : 8/29/2021
//Description : Write a program that will input a single integer value (all input will be exactly 8 digits long) and will store pairs of digits as individual integer values. The program will display the four 2-digit numbers as well as the average of these, each on their own line. Finally, use a switch statement to print out Grade: and then either A (>=90), B ([80..89]), C ([70..79]), D ([60..69]) or F (<60) based on the calculated average.
//************************************************************************

#include<iostream>

using namespace std;

int main()
{
    //used 5 integer variables
    int a,b,c,d,e;
    
    // and two double variables
    double avg,add;
    
    //Enter te value by user
    cout<<"Enter the marks(Only 8 digit allowed): ";
    cin>>a;
    
    //we have to cut last two digit and i use this formula which put the cut value in variable b
    b = a % 100;
    
    //we have remove last two digit so i use following formula
    //we have to cut last two digit and i use this formula which put the cut value in variable c
    a = a / 100;
    
    c = a % 100;
    
    //we have remove last two digit so i use following formula
    //we have to cut last two digit and i use this formula which put the cut value in variable d
    
    a = a / 100;
    
    d = a % 100;
    
    //we have remove last two digit so i use following formula
    //we have to cut last two digit and i use this formula which put the cut value in variable e
    
    a = a / 100;
    
    e = a % 100;

    //Then i print the all varibles value in compiler
    
    cout<<e<<endl;
    
    cout<<"\n"<<d<<endl;
    
    cout<<"\n"<<c<<endl;
    
    cout<<"\n"<<b<<endl;
    
    //here I add all the varibles which i used put in value in them
    add = e + d + c + b;
    
    //here I calulate the average of all the variables
    avg = add / 4 ;
    
    //here i print the avg value on the compiler
    cout<<"\nAvg: "<<avg<<endl;
    
    //To use switch statement in need only first digit so i divide it by 10 and cast the avg variable in integer data type
    avg = avg / 10;
    
    //here i use switch statements
    switch ((int)avg) {
            //if the value is 6 the compiler would print grade D for the student
        case 6:
            cout<<"\nGrade: D"<<endl;
            cout<<"\nNeeds improvment"<<endl;
            break;
            
        case 7:
            //if the value is 7 the compiler would print grade C for the student
            cout<<"\nGrade: C"<<endl;
            cout<<"\nYou can do better"<<endl;
            break;
            
        case 8:
            //if the value is 8 the compiler would print grade B for the student
            cout<<"\nGrade: B"<<endl;
            cout<<"\nGood"<<endl;
            break;
            
        case 9:
            //if the value is 9 the compiler would print grade A for the student
            cout<<"\nGrade: A"<<endl;
            cout<<"\nExeclent"<<endl;
            break;
            
        default:
            //If the grade is less than 6 the defalut statement automatically print F grade
            cout<<"\nGrade: F"<<endl;
            cout<<"\nFail"<<endl;
            break;
    }
    return 0;
}
