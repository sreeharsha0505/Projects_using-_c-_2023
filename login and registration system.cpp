Login and registration system using C++ for Beginners 2021
byGyana Ranjan Barik-August 09, 2021
The points we covered are mentions below  
How will c++ projects help you
How will this project help you
Basic knowledge for this project
Logic explanation
source code
source code explanation 
video explanation
conclusion


Login and registration system using C++ for Beginners 2021



How Will C++ Projects Help You?
To practice learning C++, you can do a lot of projects from easy to advanced levels.
 Each of these projects will teach you something new so that you are familiar with the most important topics that will always come in handy when you build real-world projects.
How will This Project help you
This project will help you to gain the basic knowledge about file handling in c++.
How to create a Login and registration system using c++. How to store the information's in the file .
You will get know about some new function and its uses.

Basic knowledge for this project

File handling in c++
Functions in c++
If  else-if conditional statement

Logic  Explanation
first we will give two options for user 1st one is are you want to register or want to login 
then if he wants to register then we ask to enter the username and password and we store this into a file .
then if the user want to login , we ask to user please enter the username and password then we will check the username and password that user enter is present in our file if not we print a message that  "Invalid username and password"  ,if present then we print a message that "successfully login".
This is the overall logic about this project see the source code you will clarify more.

Source code

#include <iostream>
#include <fstream> //because here we are going to use file handling
#include <cstring>
using namespace std;

//this below is for verifying are you create an account or not
//so here we use bool value that always returns true or false
//if you have account this means true and else false

//verify logged in or not

bool IsloggedIn()
{
    string username, password, un, pw; //last two are comparison string

    cout << "Enter username :";
    cin >> username;

    cout << "Enter password :";
    cin >> password;

    //for reading file that you have account or not
    //if stream for reading the file
    //read is variable here
    ifstream read("data\\" + username + ".txt"); //here data.txt where our data will save for us 
    //the file name is written in double cout in file handling
    getline(read, un); //for reading the user name is that user valid
    getline(read, pw); //reading the password correct or not

    //comparison

    if (un == username && pw == password)
    {
        return true;   //that the user is valid and can log in
    }
    else
    {
        return false;
    }
}

int main()
{
   // system("colour 3f"); for colour output in console
    int choice;

    cout << "1 : Register \n2 :Login\nYour choice :";
    cin >> choice;
    if (choice == 1)
    {
        string username, password;

        cout << "select a username :";
        cin >> username;
        cout << "select a password :";
        cin >> password;

        //

        ofstream file;
        //open file help of open function
        file.open("data\\" + username + ".txt");

  //rewrite in the file
        file<<"username :"<<username<<endl<<"password :"<<password; //the data is registered into our file
        file.close();

    //return here main because then again we going to logged in
    //then we go ahead and register another one so:
    main();
    }

//if user have already account and want to log in then
    else if(choice==2)
    {
        //create a variable status and assign into islogged in function 
        //and it proceed it from there
       bool status =IsloggedIn();

       if(!status) //if login goes wrong user name and password is incorrect
       {
          cout<<"Invalid user name password :"<<endl;
          system("PAUSE");

//This is a Windows-specific command, which tells the OS to run the pause
// program. This program waits to be terminated, and halts the execution of the parent C++ program. 
          return 0;
       }
       else //if success then return 1 or proceed further
       {
           cout<<"Successfully Logged in"<<endl;
           system("pause");
           return 1;
       }
    }
}
