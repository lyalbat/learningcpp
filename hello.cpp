#include <iostream>
#include <vector>

namespace mininum_access {
    std::string ACCESS_LEVEL = "Read Only";
}

//typedef std::vector<std::pair<std::string,int>> pairlist_t; (OLD)

using pairlist_t = std::vector<std::pair<std::string,int>>; //new

//void makeRectangle1(int columns, int rows);

int main(){
    /*std::cout << "i like sushi" << '\n';
    int age = 23;
    double temperature = 27.4;
    char grade = 'B';
    grade = 'A';
    const char FINAL_GRADE = 'A';*/

    //std::cout << "Your grade is: " << grade << '\n';
    //std::cout << "Your final grade is: " << FINAL_GRADE << '\n';

    /*pairlist_t lista;

    //this is using the namespace specific of standard
    using std::string;

    bool IS_ADMIN = true;
    //std::cout << IS_ADMIN << '\n';

    string name = "Larissa";
    string ACCESS_LEVEL = "Full Access";
    std::cout << "Hi " << name <<  "! Your Access Level is: " << ACCESS_LEVEL << '\n';
    //std::cout << name <<  "! Your Access Level is: " << mininum_access::ACCESS_LEVEL << '\n';

    int correct = 8;
    int questions  = 10;
    //double score = correct / questions * 100;
    //this would return 0%, because it would truncate the result of the division of integers

    //Explicit type conversion
    double score  = correct / (double) questions * 100;

    //std::cout << score << "%";

    string country;
    std::cout << "where are you from?" << '\n';
    std::cin >> country;
    std::cout << "You are from " << country << '\n';

    string fullName;
    std::cout << "Please insert your full name: " << '\n';
    std::getline(std::cin >> std::ws, fullName);
    std::cout << "You are " << fullName << '\n';*/

    /*int rows;
    int columns;

    std::cout << "How many * in the side? ";
    std::cin >> rows;
    std::cout << "How many * in the base? ";
    std::cin >> columns;
    makeRectangle1(columns,rows);*/

    int testArray [] = {10,1,9,2,8,3,7,4,6,5};
    int temp;
    int size = sizeof(testArray)/sizeof(testArray[0]);


    std::cout << "testArray before is: " << '\n';
    for (int i = 0; i < size; i++)
    {
        std::cout << testArray[i] << '\n';
    }
    
    /*std::cout << "testArray before is: " << testArray << '\n';

    for (int i = 0; i < size; i++)
    {
        if(testArray[i]>= testArray[i+1]){
            temp = testArray[i];
            testArray[i] = testArray[i+1];
            testArray[i+1] = temp;
        }
    }
    std::cout << "testArray after is: " << '\n';
    
    for (int i = 0; i < size; i++)
    {
        std::cout << testArray[i] << '\n';
    }*/
    return 0;
}

/*
void makeRectangle1(int columns, int rows){
    std::string lines;
    for (int j = 0; j < rows; j++)
    {
        lines.append(columns,'*');
        std::cout << lines <<"\n";
        lines.clear();

    }
}*/