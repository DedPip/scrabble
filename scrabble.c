#include "./libs/cs50.h"
#include <stdio.h>
#include <string.h>

int main(void)
{
    int num_of_1_points = 10;
    int num_of_2_points = 2;
    int num_of_3_points = 4;
    int num_of_4_points = 5;
    int num_of_5_points = 1;
    int num_of_8_points = 2;
    int num_of_10_points = 2;

    string point1s = "aeilnorstu";
    string point2s = "dg";
    string point3s = "bcmp";
    string point4s = "fhvwy";
    string point5s = "k";
    string point8s = "jx";
    string point10s = "qz";
        
    string word = "abcdefghijklmnopqrst";
    int score = 0;
    
    for (int i = 0, word_length = strlen(word); i < word_length; i++)
    {

        int foundScore = 0;
        for (int j = 0, point1s_length = strlen(point1s); j < point1s_length; j++)
        {
            if (word[i] == point1s[j])
            {
                score += 1;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;;}


        for (int j = 0, point2s_length = strlen(point2s); j < point2s_length; j++)
        {
            if (word[i] == point2s[j])
            {
                score += 2;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}


        for (int j = 0, point3s_length = strlen(point3s); j < point3s_length; j++)
        {
            if (word[i] == point3s[j])
            {
                score += 3;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}


        for (int j = 0, point4s_length = strlen(point4s); j < point4s_length; j++)
        {
            if (word[i] == point4s[j])
            {
                score += 4;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}


        for (int j = 0, point5s_length = strlen(point5s); j < point5s_length; j++)
        {
            if (word[i] == point5s[j])
            {
                score += 5;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}


        for (int j = 0, point8s_length = strlen(point8s); j < point8s_length; j++)
        {
            if (word[i] == point8s[j])
            {
                score += 8;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}


        for (int j = 0, point10s_length = strlen(point10s); j < point10s_length; j++)
        {
            if (word[i] == point10s[j])
            {
                score += 10;
                foundScore = 1;
                break;
            }
        }
        if (foundScore == 1) {continue;}

    }

    printf("%i\n", score);


}