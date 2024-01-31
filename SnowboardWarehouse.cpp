// SnowboardWarehouse.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<vector>
#include<iomanip>
#include<string>
#include<ios>
#include<fstream>
#include"board.h"

//KEY
// 
//SHAPE STYLE  
//------------------------------------
//True Twin-1
//Directional Twin-2
//Direcional-3
//Powder-4

//FLEX
//------------------------------------
//soft-1
//medium-2
//hard-3

//SIZE
//-----------------------------------
// 45'-1
// 46'-2
//47'-3
//48'-4
//49'-5
//50'-6
//51'-7
//52'-8
//53'-9
//54'-10

//ABILITY
//------------------------------------ 
//beginner-1
//intermdiate-2
//advanced-3 







int main()
{
    char answer1{NULL};
 
    int shape{0};
    int flex{0};
    int ability{ 0 };
    int size{ 0 };
    bool go = true;

    do {
        // setting the stage 
        std::cout << std::setw(40) << " " << "Welcome to the Snowboard Warehouse!" << std::endl;
        std::cout << std::setw(120) << std::setfill('-') << " " << std::endl;
        std::cout << "\n" << " " << "Are you ready to shred ? " << std::endl;
        std::cout << std::setfill(' ');
        //pulling in the first response 
        std::cin >> answer1;
        std::cout << "\n";

        if (answer1 == 'y' || answer1 == 'Y') { go = false; std::cout << "\n " << " Great!Lets Begin " << std::endl; }
        else if (answer1 == 'n' || answer1 == 'N')
        {
            std::cout << " Bummer! " << std::endl;
            std::cout << "Come back when our ready to shred(: Goodbye! " << std::endl;
            return 1;
        }
        else {
            std::cout << "Sorry, you have entered an invalid response, please try again!" << std::endl;
        }
    } while (go != false);


    

    bool go1 = true;
    std::cin.ignore();
    std::cin.ignore();
    do
    {
        
            std::cout << " Which board shape are you looking for? " << std::endl;
            std::cout << std::setw(10) << "1- " << "TRUE TWIN" << std::endl;
            std::cout << std::setw(10) << "2- " << "DIRECTIONAL TWIN" << std::endl;
            std::cout << std::setw(10) << "3- " << "DIRECTIONAL" << std::endl;
            std::cout << std::setw(10) << "4- " << "POWDER" << std::endl;
            
            std::cin >> shape;
        

            if (shape == 1) { std::cout << " You have selected TRUE TWIN" << std::endl;}
            else if (shape == 2) {std::cout << "Youve have selected DIRECTIONAL TWIN" << std::endl;}
            else if (shape == 3) {std::cout << "You have selected DIRECTIONAL" << std::endl;}
            else if (shape == 4) { std::cout << "You hae selected POWDER " << std::endl;}
            std::cout << "\n" << std::endl;



            if ((shape == 1 || shape == 2 || shape == 3 || shape == 4)) { go1 = false; }
            else
            {std::cout << "You have entered an invalid response, please try again"<<"\n" << std::endl;}


    } while (go1!=false);
    if (go1 == false) {
        std::cout << "Lets keep going " << std::endl;
        std::cout << "\n";
    }

    bool go2 = true;
    do
    {
        std::cout << " Which size board are you looking for? " << std::endl;
        std::cout << std::setw(10) << "1- " << "45" << std::endl;
        std::cout << std::setw(10) << "2- " << "46" << std::endl;
        std::cout << std::setw(10) << "3- " << "47" << std::endl;
        std::cout << std::setw(10) << "4- " << "48" << std::endl;
        std::cout << std::setw(10) << "5- " << "49" << std::endl;
        std::cout << std::setw(10) << "6- " << "50" << std::endl;
        std::cout << std::setw(10) << "7- " << "51" << std::endl;
        std::cout << std::setw(10) << "8- " << "52" << std::endl;
        std::cout << std::setw(10) << "9- " << "53" << std::endl;
        std::cout << std::setw(10) << "10- " << "54" << std::endl;
        std::cin >> size;

        if (size == 1) { std::cout << "You have selected a 45 length board" << std::endl; }
        else if (size == 2) { std::cout << "You have selected a 46 length board" << std::endl; }
        else if (size == 3) { std::cout << "You have selected a 47 length board" << std::endl; }
        else if (size == 4) { std::cout << "You have selecte a 48 length board" << std::endl; }
        else if (size == 5) { std::cout << "You have selected a 49 length board" << std::endl; }
        else if (size == 6) { std::cout << "You have selected a 50 length board" << std::endl; }
        else if (size == 7) { std::cout << "You have selected a 51 length board" << std::endl; }
        else if (size == 8) { std::cout << "You have selected a 52 length board" << std::endl; }
        else if (size == 9) { std::cout << "You have selected a 53 length board" << std::endl; }
        else if (size == 10) { std::cout << "You have selected a 54 length board" << std::endl; }
        std::cout << "\n";

        if (shape == 1 || shape == 2 || shape == 3 || shape == 4 || shape == 5 || shape == 6 || shape == 7 || shape == 8 || shape == 9 || shape == 10) { go2 = false; }
        else { std::cout << "You have enetered an invalid value, please try again " << "\n"; }

    } while (go2!=false);
    if (go2 == false) { std::cout << " Great, lets dig a little deepr! "<<"\n" << std::endl; }

    bool go3 = true;
    std::cin.ignore();

    do
    {
        std::cout << "What is your riding ability level?" << std::endl;
        std::cout <<std::setw(10) <<"1- "<< "Beginner" << std::endl;
        std::cout << std::setw(10) << "2- " << "Intermediate" << std::endl;
        std::cout << std::setw(10) << "3- " << "Advanced" << std::endl;
        std::cin >> ability;

        if (ability == 1) { std::cout << "You have chosen BEGINNER" << std::endl; }
        if (ability == 2) { std::cout << "You have chosen INTERMEDIATE" << std::endl; }
        if (ability == 3) { std::cout << "You have chosen ADVANCED" << std::endl; }
        std::cout << "\n";

        if (ability == 1 || ability == 2 || ability == 3) { go3 = false; }
        else
        {
            std::cout << "You have entered an invalid value, please try again!" << std::endl;
        }




    } while (go3!=false);
    if (go3 == false) {std::cout << "Thats awesome, last question!" <<"\n"<< std::endl; }


    bool go4 = true;
    std::cin.ignore();
    do {
        std::cout << "What level of board flex are you looking for?" << std::endl;
        std::cout << std::setw(10) << "1- " << "Soft" << std::endl;
        std::cout << std::setw(10) << "2- " << "Medium" << std::endl;
        std::cout << std::setw(10) << "3- " << "Hard" << std::endl;
        std::cin >> flex;

        if (flex == 1) { std::cout << "You have chosen SOFT" << std::endl; }
        if (flex == 2) { std::cout << "You have chosen MEDIUM" << std::endl; }
        if (flex == 3) { std::cout << "You have chosen HARD" << std::endl; }
        std::cout << "\n";

        if (flex == 1 || flex == 2 || flex == 3) { go4 = false; }
        else
        {
            std::cout << "You have entered an invalid value, please try again!" << std::endl;
        }

        
    } while (go4 != false);
    if (go4 == false) { std::cout << "Thank you for your responses, let me see what I can find" <<"\n"<< std::endl; }
    else{}
    //-------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
    //dealing with the file...xlsx file wasnt working so went with .txt file 
  //  std::ifstream myfile {"C:\\Users\\sydney.swofford\\OneDrive - OMRON\\Documents\\SnowboardWarehouse.txt", std::ios::in};
    std::ifstream myfile{ "Data.txt", std::ios::in };

    if (!myfile.is_open()) {
        std::cerr << "The file could not be opened! ";
        return 1;
    }
    else
    {
    }

    //vector of all the board objects to be filled with ALL data
    std::vector<board> boards{};
    //create board object for the users answers that are already stored. 
    board user(shape, flex, size, ability, 0, "", "", "");
   
    board temp{ 0,0,0,0,0.00,"","","" };
    int t1;
    int t2;
    int t3;
    int t4;
    double t5;
    std::string t6;
    std::string t7;
    std::string t8;

    while (myfile>>t1>>t2>>t3>>t4>>t5>>t6>>t7>>t8)
    {
        temp.set_shape(t1);
        temp.set_flex(t2);
        temp.set_size(t3);
        temp.set_ability(t4);
        temp.set_price(t5);
        temp.set_color(t6);
        temp.set_name(t7);
        temp.set_brand(t8);

         boards.push_back(temp);   
    }
  
   // check that the boards are input properly
    for (auto c : boards) {
        std::cout << c.brand<<" " << c.name << std::endl;
    }

    board mtemp{ 0,0,0,0,0.00,"","","" };
    std::vector<board> matches{};
    for (int i = 0; i < boards.size(); i++) {
        if (boards.at(i).shape == user.shape && boards.at(i).flex == user.flex && boards.at(i).ability == user.ability && boards.at(i).size == user.size) {
            matches.push_back(boards[i]);
        }
       
    }

    //checks matches are getting matched properly
  /*  for (auto c: matches )
    {
        std::cout << c.price << std::endl;
    }*/

    std::cout << std::setw(40) << " " << "Here Are Your Matching Snowboards" << std::endl;
    std::cout << std::setw(120) << std::setfill('-') << " " << std::endl;
    std::cout << std::setfill(' ');
    std::cout << "\n";

    if (matches.size() == 0) {
        std::cout <<std::setw(10)<<"  "<<"Unfortunately there are no exact matches for you" << std::endl;
    }

    else {
         
            for(int i = 0;i<matches.size();i++)
           std::cout << std::setw(10) << " " <<(i+1)<<"."<<std::setw(10) << matches.at(i).brand << std::right << std::setw(20) << matches.at(i).name << std::setw(10) << matches.at(i).color << std::setw(10) << std::fixed << std::setprecision(2) <<"$"<< matches.at(i).price << std::endl;
        
    }
    
    std::cout <<"\n";
    std::cout << "Which board would you like to view?" << std::endl;
    int choice{};
    std::cin >> choice;
    std::cout << "\n";
    board result = matches[choice - 1];
    
    std::ofstream outfile{ "C:\\Users\\sydney.swofford\\OneDrive - OMRON\\Desktop\\SnowboardWarehouseResults.txt",std::ios::out};

    outfile << result.brand
        << " "
        << result.name;
        

    outfile << " Evo";

    std::cout << "YOU HAVE CHOSEN: " << std::setw(10) << matches[choice - 1].brand << std::setw(20) << matches[choice - 1].name << std::setw(10) << matches[choice - 1].color << std::setw(10) << std::fixed << std::setprecision(2) << matches[choice - 1].price << std::endl;
    std::cout << std::setw(120) << std::setfill('-') << " " << std::endl;
    std::cout<<"\n" << "\n" << "\n" << "\n" <<"\n"<< "PLEASE PRESS ENTER" << std::endl;
    
    

    
    









    










    myfile.close();
    outfile.close();

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
