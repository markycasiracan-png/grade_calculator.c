#include <stdio.h>

float inputScore(char label[]);
float calculateFinalGrade(float quizScore, float examScore);
char getLetterGrade(float finalGrade);
void displayReport(float quizScore, float examScore, float finalGrade, char letterGrade);

int main()
{
    float quizScore, examScore, finalGrade;
    char letterGrade;
    
    quizScore = inputScore("Quiz");
    examScore = inputScore("Exam");

   
    finalGrade = calculateFinalGrade(quizScore, examScore);
   
    letterGrade = getLetterGrade(finalGrade);

    displayReport(quizScore, examScore, finalGrade, letterGrade);

    return 0;
}


float inputScore(char label[])
{
    float score;

    printf("Enter %s Score (0-100): ", label);
    scanf("%f", &score);

    return score;
}

float calculateFinalGrade(float quizScore, float examScore)
{
    return (quizScore * 0.4f) + (examScore * 0.6f);
}

void displayReport(float quizScore, float examScore, float finalGrade, char letterGrade)
{
    printf("GRADE REPORT");
    printf("Quiz Score:       %.2f\n", quizScore);
    printf("Exam Score:       %.2f\n", examScore);
    printf("Final Grade:      %.2f\n", finalGrade);
    printf("Letter Grade:     %c\n", letterGrade);
    
}

char getLetterGrade(float finalGrade)
{
    if (finalGrade >= 90)
        return 'A';
    else if (finalGrade >= 80)
        return 'B';
    else if (finalGrade >= 70)
        return 'C';
    else if (finalGrade >= 60)
        return 'D';
    else
        return 'F';
}

