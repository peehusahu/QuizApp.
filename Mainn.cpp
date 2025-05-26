/* Thia is a simple console based quiz application that asks 10 MCQ questions to the 
user and evaluates the score based on user inputs.
Concepts used: functions, conditionals, user input 
Made By: Peehu*/
#include <iostream>
using namespace std;

int score = 0;                                                //Score calculator
void askQuestion(string question,string opt1,                //Function to ask questions
    string opt2,string opt3,string opt4,char correctAns){
    char userAns;
    cout<< question <<endl;
    cout<<"A. "<< opt1 <<endl;
    cout<<"B. "<< opt2 <<endl;
    cout<<"C. "<< opt3 <<endl;
    cout<<"D. "<< opt4 <<endl;
    cout<<"Enter your answer: ";
    cin>>userAns;
    if(toupper(userAns) == toupper(correctAns)){            //Comparison of correct ans and user ans
        cout<<"Correct!";
        score++;
    }else{cout<<"Wrong!";}
cout << "\n----------------------------------------------------------------------------------\n";

}

int main(){
       string Name;
       cout<<"Enter Your Name: "<<endl;    //Quiz start
       cin>> Name;
       cout<<"Welcome "<< Name << "!\nLets start the quiz!"<<endl;

       //Function Calling
    askQuestion( "1. How many elements are there in the periodic table?"
        ,"120", "118", "115", "110",'B');

    askQuestion( "2. What is the square root of 144?"
        ,"11", "12", "15", "13",'B');

    askQuestion("3. Which is the largest Ocean on Earth?",
                "Indian Ocean", "Atlantic Ocean", "Arctic Ocean", "Pacific Ocean", 'D');

    askQuestion("4. Which of the following is a noble gas?",
                "Oxygen", "Nitrogen", "Helium", "Hydrogen", 'C');

    askQuestion("5. Which planet is known as Red Planet?",
                "Mars", "Earth", "Mercury", "Venus", 'A');

    askQuestion("6. Which is the next prime number after 7?",
                "12", "11", "09", "13", 'B');

    askQuestion("7. Which acid is found in ant bite?",
                "Sulphuric Acid", "Acetic Acid", "Citric Acid", "Formic Acid", 'D');

    askQuestion("8. Which gas is known as laughing gas?",
                "Nitrogen", "Oxygen", "Nitrous Oxide", "Carbon Monoxide", 'C');

    askQuestion("9. If x = 3, what is the value of x^2 + 2x?",
                "10", "15", "19", "11", 'B');

    askQuestion("10. Which metal is liquid at room temperature?",
                "Mercury(Hg)", "Gold(Au)", "Iron(Fe)", "Silver(Ag)", 'A');

    cout<<"Your Score is: "<< score <<endl;
  if(score>=8){
    cout<<"Excellent!";
  }else if(score>=6){
    cout<<"Good Job!";
  }else{cout<< "Keep learning!\nYou'll do better next time.";}
cout << "\n----------------------------------------------------------------------------------\n";

return 0;
}
