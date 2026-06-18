#include <stdio.h>

int main(){
    
float inputScore(char label[]);
float calculateFinalGrade(float quizScore, float examScore);
char getLetterGrade(float finalGrade);
void displayReport(float quizScore, float examScore, float finalGrade, char letterGrade);
    
    float quizScore = inputScore("Quiz");
    float examScore = inputScore("Exam");
    float finalGrade = calculateFinalGrade(quizScore, examScore);
    char letterGrade = getLetterGrade(finalGrade);
    
    displayReport(quizScore, examScore, finalGrade, letterGrade);
    return 0;
}

float inputScore(char label[]){
    float score;
    printf("Enter %s Score: ", label);
    scanf("%f", &score);
    return score;
}

float calculateFinalGrade(float quizScore, float examScore){
    return (quizScore * 0.4) + (examScore * 0.6);
}

char getLetterGrade(float finalGrade){
    
    if (finalGrade >= 90)
        return 'A'; else if (finalGrade >= 80)
        return 'B'; else if (finalGrade >= 70)
        return 'C'; else if (finalGrade >= 60)
        return 'D'; else
        return 'F';
}

void displayReport(float quizScore, float examScore, float finalGrade, char letterGrade){
    
    printf("=================================\n");
    printf("           GRADE REPORT           \n");
    printf("=================================\n");
    printf("Quiz Score:       %.2f\n", quizScore);
    printf("Exam Score:       %.2f\n", examScore);
    printf("Final Grade:      %.2f\n", finalGrade);
    printf("Letter Grade:     %c\n", letterGrade);
    printf("==================================\n");
}
