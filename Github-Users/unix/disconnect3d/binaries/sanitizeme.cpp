#include <iostream>

using namespace std;

const int keys[][22] = \
{{60, 99, 63, 64, 52, 44, 43, 20, 95, 88, 76, 55, 68, 95, 55, 49, 77, 96, 71, 64, 72, 61}, {74, 98, 86, 61, 27, 77, 87, 78, 99, 91, 45, 82, 32, 88, 80, 31, 67, 24, 23, 45, 31, 82}, {88, 27, 69, 66, 26, 30, 45, 42, 61, 53, 30, 34, 40, 23, 81, 62, 32, 46, 58, 25, 67, 91}, {88, 37, 85, 36, 99, 58, 96, 31, 84, 74, 72, 58, 78, 71, 92, 35, 58, 42, 71, 76, 23, 30}, {69, 21, 99, 95, 74, 53, 90, 67, 79, 89, 55, 96, 59, 23, 25, 40, 44, 47, 89, 72, 20, 30}, {66, 76, 100, 22, 82, 94, 23, 31, 100, 59, 48, 78, 59, 70, 84, 71, 32, 39, 68, 27, 87, 86}, {32, 46, 42, 86, 90, 73, 71, 86, 34, 41, 88, 40, 91, 93, 55, 36, 32, 30, 38, 46, 91, 91}, {66, 47, 86, 83, 66, 65, 35, 52, 75, 94, 62, 65, 76, 84, 87, 54, 69, 69, 74, 67, 77, 45}, {77, 87, 74, 26, 30, 33, 24, 50, 51, 42, 50, 68, 31, 66, 24, 88, 86, 76, 92, 33, 47, 87}, {62, 29, 57, 84, 73, 95, 66, 28, 61, 71, 48, 83, 54, 60, 58, 28, 83, 70, 74, 44, 33, 80}, {79, 61, 50, 75, 71, 26, 86, 25, 30, 51, 27, 70, 65, 81, 96, 94, 60, 68, 59, 35, 38, 52}, {65, 91, 57, 70, 47, 36, 47, 59, 66, 23, 69, 78, 57, 67, 20, 54, 66, 100, 91, 49, 23, 68}, {56, 33, 38, 50, 30, 81, 88, 74, 80, 32, 83, 89, 58, 63, 20, 40, 95, 30, 61, 78, 47, 99}, {54, 44, 50, 47, 50, 28, 21, 37, 57, 65, 99, 98, 53, 47, 21, 59, 24, 23, 62, 60, 83, 46}, {47, 77, 67, 60, 81, 36, 25, 36, 39, 20, 80, 86, 40, 34, 96, 70, 41, 64, 100, 92, 42, 28}, {89, 60, 72, 61, 78, 45, 95, 52, 63, 97, 87, 44, 65, 43, 100, 38, 29, 33, 87, 97, 95, 100}, {98, 56, 84, 48, 21, 40, 53, 20, 80, 49, 32, 82, 99, 25, 41, 85, 54, 57, 22, 85, 53, 35}, {87, 64, 81, 95, 82, 21, 74, 35, 62, 26, 37, 91, 85, 42, 88, 46, 73, 39, 32, 49, 25, 56}, {40, 70, 48, 90, 39, 70, 34, 35, 49, 29, 20, 47, 31, 21, 65, 69, 71, 48, 51, 83, 59, 90}, {45, 90, 32, 89, 26, 32, 87, 97, 24, 71, 89, 79, 96, 90, 49, 74, 35, 69, 20, 25, 65, 50}, {24, 91, 75, 56, 74, 62, 88, 41, 45, 38, 24, 40, 26, 67, 34, 26, 88, 28, 59, 23, 28, 51}, {21, 74, 48, 85, 26, 95, 73, 48, 82, 82, 84, 83, 41, 58, 87, 98, 68, 86, 94, 27, 75, 28}, {40, 28, 32, 72, 69, 49, 67, 73, 35, 69, 22, 86, 23, 40, 39, 88, 52, 75, 74, 86, 58, 60}, {46, 43, 66, 54, 76, 99, 93, 29, 69, 91, 26, 80, 89, 83, 91, 52, 37, 41, 76, 63, 50, 61}, {80, 22, 59, 60, 38, 95, 76, 55, 83, 44, 79, 49, 51, 61, 27, 63, 21, 87, 34, 81, 40, 79}, {76, 64, 37, 53, 51, 67, 41, 62, 96, 63, 47, 45, 54, 82, 98, 93, 80, 44, 26, 84, 43, 28}, {63, 20, 47, 84, 24, 33, 81, 69, 68, 27, 40, 92, 98, 37, 90, 84, 95, 77, 95, 82, 32, 35}, {79, 21, 61, 48, 58, 23, 90, 35, 38, 31, 57, 45, 71, 30, 80, 81, 37, 32, 98, 47, 39, 71}, {41, 49, 54, 88, 52, 52, 49, 49, 54, 63, 33, 77, 35, 55, 93, 68, 31, 62, 70, 28, 69, 37}, {33, 60, 21, 27, 32, 26, 41, 97, 55, 81, 49, 92, 94, 88, 47, 64, 24, 62, 45, 49, 35, 89}, {86, 81, 86, 60, 38, 66, 100, 78, 99, 97, 95, 41, 39, 81, 57, 21, 25, 79, 40, 44, 51, 48}, {23, 71, 98, 61, 61, 37, 51, 49, 25, 93, 100, 35, 97, 73, 69, 63, 42, 64, 69, 53, 22, 46}, {79, 92, 49, 48, 24, 51, 85, 71, 20, 55, 82, 82, 81, 31, 46, 97, 70, 33, 86, 71, 71, 58}, {94, 21, 65, 95, 53, 72, 37, 28, 99, 23, 96, 52, 80, 94, 98, 28, 74, 78, 60, 26, 44, 58}, {63, 84, 38, 26, 54, 44, 96, 81, 80, 53, 72, 24, 74, 24, 37, 92, 22, 26, 28, 85, 99, 64}, {99, 89, 100, 20, 99, 78, 37, 35, 23, 61, 57, 78, 80, 59, 84, 44, 70, 92, 76, 90, 32, 24}, {23, 38, 55, 91, 98, 96, 60, 24, 97, 66, 80, 81, 79, 79, 24, 39, 69, 67, 24, 69, 96, 26}, {95, 60, 71, 80, 42, 78, 27, 56, 81, 86, 30, 32, 79, 65, 69, 55, 37, 74, 27, 42, 49, 51}, {27, 31, 56, 41, 46, 48, 37, 79, 77, 95, 31, 93, 38, 41, 30, 81, 49, 66, 74, 91, 68, 68}, {53, 25, 28, 26, 83, 94, 97, 42, 41, 99, 25, 56, 33, 27, 94, 96, 45, 61, 40, 84, 28, 69}, {41, 82, 71, 61, 83, 49, 66, 77, 94, 67, 99, 21, 77, 87, 22, 72, 100, 44, 77, 36, 22, 81}, {55, 51, 91, 78, 84, 68, 63, 61, 69, 74, 78, 48, 28, 56, 27, 62, 79, 85, 40, 83, 96, 34}, {24, 80, 100, 39, 57, 78, 40, 25, 48, 22, 22, 37, 34, 83, 48, 71, 44, 26, 55, 86, 42, 27}, {76, 31, 73, 72, 37, 87, 54, 44, 86, 100, 39, 45, 47, 54, 51, 77, 90, 94, 69, 42, 55, 65}, {51, 80, 22, 30, 46, 65, 46, 56, 53, 58, 39, 94, 49, 64, 49, 29, 94, 51, 69, 52, 60, 100}, {88, 64, 46, 65, 94, 74, 66, 21, 93, 60, 96, 24, 35, 96, 64, 60, 99, 71, 52, 54, 100, 33}, {49, 88, 40, 83, 95, 56, 100, 69, 25, 94, 72, 21, 58, 21, 34, 97, 67, 37, 62, 88, 65, 36}, {48, 84, 49, 62, 82, 63, 21, 28, 63, 98, 49, 79, 47, 57, 49, 55, 84, 46, 79, 22, 64, 39}, {27, 51, 81, 34, 81, 46, 20, 59, 65, 34, 56, 64, 39, 59, 68, 41, 82, 21, 47, 91, 29, 52}, {31, 43, 90, 67, 90, 67, 33, 27, 51, 44, 63, 64, 54, 31, 46, 78, 49, 59, 77, 78, 40, 98}, {61, 66, 50, 32, 22, 29, 55, 56, 78, 92, 89, 30, 86, 74, 43, 22, 68, 90, 54, 73, 78, 77}, {61, 91, 80, 60, 60, 31, 72, 99, 52, 93, 86, 38, 54, 92, 74, 60, 67, 20, 48, 78, 28, 43}, {81, 42, 45, 100, 57, 60, 44, 52, 29, 74, 78, 44, 50, 78, 61, 88, 69, 23, 97, 81, 88, 92}, {77, 70, 70, 90, 69, 98, 35, 49, 89, 69, 25, 79, 92, 66, 98, 37, 59, 50, 62, 40, 34, 94}, {29, 89, 58, 99, 82, 86, 66, 74, 77, 48, 59, 52, 98, 63, 100, 87, 56, 75, 61, 45, 30, 75}, {81, 89, 88, 53, 26, 57, 60, 89, 80, 54, 67, 61, 43, 45, 35, 91, 64, 21, 92, 24, 79, 47}, {27, 24, 51, 94, 94, 51, 56, 52, 22, 25, 44, 68, 88, 23, 69, 59, 30, 81, 55, 35, 82, 84}, {95, 27, 82, 21, 57, 88, 68, 64, 80, 37, 20, 82, 47, 48, 34, 86, 26, 64, 37, 62, 65, 68}, {99, 34, 97, 49, 69, 48, 30, 60, 52, 61, 75, 22, 86, 24, 100, 30, 94, 83, 71, 97, 62, 96}, {21, 43, 32, 86, 90, 52, 86, 67, 60, 93, 94, 74, 88, 20, 61, 25, 23, 76, 96, 82, 33, 33}, {85, 71, 52, 95, 35, 34, 32, 33, 71, 28, 99, 92, 85, 98, 89, 20, 21, 81, 80, 63, 42, 96}, {57, 66, 74, 56, 63, 34, 79, 25, 95, 37, 70, 63, 68, 79, 79, 44, 47, 74, 37, 49, 46, 64}, {56, 100, 96, 50, 63, 46, 56, 30, 90, 79, 90, 90, 29, 41, 63, 71, 54, 100, 40, 87, 86, 81}, {35, 62, 58, 71, 28, 22, 58, 61, 60, 67, 68, 47, 74, 93, 64, 64, 20, 36, 78, 63, 87, 61}, {52, 93, 37, 81, 54, 31, 81, 31, 33, 27, 42, 68, 91, 56, 66, 65, 68, 95, 83, 87, 33, 48}, {59, 36, 53, 55, 29, 33, 28, 67, 21, 54, 73, 21, 86, 65, 33, 21, 81, 35, 51, 40, 42, 37}, {79, 26, 65, 44, 85, 45, 52, 70, 65, 100, 27, 28, 70, 47, 21, 44, 29, 34, 20, 32, 73, 31}, {91, 60, 31, 99, 76, 48, 88, 26, 93, 47, 94, 93, 21, 39, 85, 22, 64, 26, 39, 98, 68, 77}, {35, 91, 80, 84, 57, 27, 89, 75, 25, 91, 53, 59, 60, 51, 57, 43, 46, 96, 43, 89, 40, 52}, {29, 21, 48, 63, 61, 52, 97, 87, 87, 39, 93, 99, 28, 45, 85, 93, 27, 53, 94, 70, 61, 92}, {42, 87, 37, 64, 74, 93, 81, 96, 54, 37, 57, 99, 43, 94, 97, 33, 45, 49, 33, 39, 76, 31}, {84, 79, 50, 20, 93, 68, 97, 52, 48, 87, 74, 99, 27, 84, 81, 49, 54, 72, 90, 80, 58, 36}, {32, 58, 72, 32, 67, 62, 71, 75, 47, 50, 97, 72, 86, 70, 39, 90, 45, 89, 82, 63, 50, 77}, {27, 78, 41, 78, 97, 57, 57, 34, 50, 73, 39, 99, 44, 60, 24, 61, 20, 94, 53, 53, 64, 61}, {46, 39, 29, 41, 63, 28, 28, 23, 52, 74, 96, 59, 38, 21, 33, 84, 31, 22, 43, 43, 96, 38}, {89, 31, 84, 92, 56, 99, 78, 31, 47, 35, 21, 61, 39, 93, 85, 98, 34, 78, 58, 69, 72, 71}, {63, 80, 25, 79, 47, 45, 24, 35, 64, 61, 68, 62, 46, 97, 82, 91, 47, 89, 92, 68, 65, 56}, {56, 88, 44, 69, 81, 98, 67, 30, 86, 26, 68, 35, 85, 99, 92, 36, 38, 31, 29, 96, 37, 34}, {78, 56, 63, 93, 40, 49, 64, 93, 49, 80, 92, 20, 35, 35, 26, 85, 77, 27, 42, 70, 94, 71}, {23, 54, 76, 55, 50, 20, 31, 99, 96, 52, 80, 76, 85, 94, 25, 74, 82, 100, 71, 84, 93, 98}, {21, 48, 96, 40, 35, 20, 53, 64, 86, 80, 65, 69, 87, 60, 74, 23, 89, 24, 85, 42, 22, 39}, {31, 42, 21, 23, 75, 99, 48, 61, 74, 92, 21, 52, 43, 39, 51, 49, 69, 57, 66, 32, 28, 77}, {46, 90, 29, 86, 82, 49, 39, 99, 78, 69, 77, 97, 32, 73, 56, 62, 55, 85, 30, 73, 71, 34}, {67, 88, 57, 55, 64, 58, 28, 23, 22, 25, 53, 54, 34, 46, 23, 100, 87, 23, 24, 76, 43, 45}, {78, 56, 55, 39, 53, 54, 21, 82, 99, 37, 20, 72, 70, 95, 26, 40, 49, 46, 70, 23, 42, 61}, {36, 75, 92, 24, 44, 57, 68, 34, 43, 86, 95, 61, 28, 55, 88, 32, 26, 45, 52, 55, 30, 44}, {83, 30, 91, 48, 46, 27, 65, 51, 27, 49, 67, 85, 92, 70, 30, 46, 91, 37, 33, 75, 85, 49}, {38, 46, 86, 49, 45, 48, 22, 55, 88, 32, 68, 92, 44, 23, 94, 32, 29, 23, 23, 55, 50, 90}, {69, 97, 39, 38, 38, 41, 46, 69, 51, 77, 53, 73, 59, 69, 85, 62, 82, 46, 46, 99, 22, 70}, {49, 95, 49, 97, 59, 33, 69, 99, 39, 72, 96, 38, 35, 35, 74, 82, 98, 35, 78, 92, 53, 92}, {97, 95, 30, 63, 39, 78, 21, 61, 87, 73, 70, 45, 46, 42, 61, 22, 81, 54, 44, 83, 30, 22}, {79, 54, 51, 66, 50, 59, 42, 69, 59, 67, 94, 89, 41, 90, 44, 43, 29, 57, 24, 57, 63, 48}, {100, 24, 51, 49, 20, 66, 77, 52, 79, 30, 28, 76, 79, 23, 61, 45, 47, 37, 75, 98, 43, 83}, {78, 23, 30, 61, 39, 92, 48, 88, 84, 48, 32, 70, 84, 53, 31, 31, 69, 38, 81, 77, 84, 84}, {77, 81, 22, 43, 42, 94, 55, 84, 30, 74, 69, 99, 40, 66, 86, 47, 21, 43, 75, 95, 93, 30}, {78, 30, 65, 74, 77, 95, 51, 62, 32, 52, 37, 82, 74, 34, 80, 88, 89, 40, 75, 65, 28, 25}, {54, 97, 26, 83, 39, 99, 79, 39, 72, 40, 92, 87, 76, 62, 86, 92, 90, 57, 72, 24, 69, 64}, {48, 46, 21, 76, 33, 79, 62, 57, 28, 64, 50, 90, 54, 21, 68, 95, 85, 57, 80, 48, 38, 22}, {20, 84, 69, 31, 61, 39, 91, 94, 81, 46, 45, 39, 99, 71, 42, 78, 96, 51, 72, 100, 87, 24}, {50, 65, 39, 49, 91, 39, 89, 81, 88, 81, 66, 87, 40, 30, 69, 25, 21, 31, 39, 63, 49, 51}};
int first[] = {95, 96, 100, 95, 116, 118, 65, 77, 84, 58, 0, 11, 9, 54, 52, 74, 110, 120};
int second[] = {4, 26, 78, 68, 17, 28, 93, 38, 14, 2, 45, 93, 99, 85, 123, 104, 98, 124, 82, 52};
int last[] = {0, 95, 95, 28, 115, 103, 75, 0, 56, 110, 118, 0, 56, 25, 38, 24, 32, 119, 66, 24, 86, 11};

std::string decode(int* encoded_string, int keys_offset, int keys_used, int str_len)
{
    for(int i=keys_offset; i<keys_offset+keys_used; ++i)
        for(int j=0; j<str_len; ++j)
            encoded_string[j] ^= keys[i][j];

    std::string s;
    for(int j=0; j<str_len; ++j)
        s += static_cast<char>(encoded_string[j]);

    return s;
}

int main()
{

    cout << "cr4ckm3 level 4. enjoy" << endl;
    cout << "In this level, there's something wrong with decoding messages - you have to find the issue and fix code." << endl;
    cout << "You can find the issue with g++/clang++ sanitizers. For more info check man or documentation." << endl;
    cout << "Example usage of sanitizers: g++ -fsanitize=address <source_file>" << endl;
    cout << "Decoding messages:" << endl;
    cout << decode(first, 0, 18, 18) << endl;
    cout << decode(second, 19, 29, 20) << endl;
    cout << decode(last, 30, 52, 22) << endl;
}