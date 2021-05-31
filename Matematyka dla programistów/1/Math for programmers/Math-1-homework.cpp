#include <iostream>
#include <string>
// using namespace std;

std::string exampleSentence = "This is my homework";

std::string name = "Bartek";
std::string sureName = "Malinowski";
int age = 23;
const std::string pesel = "01129912123";
const char gender = 'K';
float weight = 90.5;
float height = 176.35;
bool in_relationship = false;
float scores[5] = {0.00};

int main()
{

    // std::cout << exampleSentence << std::endl;
    // std::cout << "Sentence1 \nSentence2 \nSentence3 \nSentence4" << std::endl;

    std::cout << "Please enter five scores: " << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << i + 1 << " score: ";

        std::cin >> scores[i];

        if (scores[i] < 1 || scores[i] > 5)
        {
            scores[i] = 0;
            std::cout << "Please enter scores in range from 1 to 5 :";
            std::cin >> scores[i];
        }

        std::cout << std::endl;
    }

    std::cout << "All scores are: " << std::endl;

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Score " << i + 1 << ": " << scores[i] << std::endl;
    }

    std::cout << "Average score is: " << std::endl;

    float scoresSum = 0;

    for (int i = 0; i < 5; i++)
    {
        scoresSum = scoresSum + scores[i];
    }

    std::cout << scoresSum / 5;

    // return 0;
}