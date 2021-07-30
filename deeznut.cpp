#include <iostream>
#include <string>
#include <fstream>
#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif
int parser(std::string c)
{   size_t pos = 0; int value = 0; std::string output; size_t len = c.length(); int i; std::string input;
    for(i = 0; i != len; i++)
    {   if(c[i] == '+') value++;
        else if(c[i] == '-') value--;
        else if(c[i] == '0') value = value * 10;
        else if(c[i] == '1') value = value * 1;
        else if(c[i] == '2') value = value * 2;
        else if(c[i] == '3') value = value * 3;
        else if(c[i] == '4') value = value * 4;
        else if(c[i] == '5') value = value * 5;
        else if(c[i] == '6') value = value * 6;
        else if(c[i] == '7') value = value * 7;
        else if(c[i] == '8') value = value * 8;
        else if(c[i] == '9') value = value * 9;
        else if(c[i] == '<') {if(pos == 0 || output[pos - 1] == '\r') {std::cout << "\033[1;31mDeezNut: ERROR}> Position out of bounds" << std::endl;return 0;}else pos--;}
        else if(c[i] == '>') {if(output[pos] == '\0') {std::cout << "\033[1;31mDeezNut: ERROR}> Position out of bounds" << std::endl;return 0;}else pos++;}
        else if(c[i] == '^') {output.append("\r"); pos++;}
        else if(c[i] == '$') {output.append("\b"); pos++;}
        else if(c[i] == '.')
        {
            if(output[pos] == '\0')
            {
                switch(value)
                {
                    case 1: output.append(" "); break;
                    case 2: output.append("\n"); break;
                    case 3: output.append("a"); break;
                    case 4: output.append("b"); break;
                    case 5: output.append("c"); break;
                    case 6: output.append("d"); break;
                    case 7: output.append("e"); break;
                    case 8: output.append("f"); break;
                    case 9: output.append("g"); break;
                    case 10: output.append("h"); break;
                    case 11: output.append("i"); break;
                    case 12: output.append("j"); break;
                    case 13: output.append("k"); break;
                    case 14: output.append("l"); break;
                    case 15: output.append("m"); break;
                    case 16: output.append("n"); break;
                    case 17: output.append("o"); break;
                    case 18: output.append("p"); break;
                    case 19: output.append("q"); break;
                    case 21: output.append("r"); break;
                    case 22: output.append("s"); break;
                    case 23: output.append("t"); break;
                    case 24: output.append("u"); break;
                    case 25: output.append("v"); break;
                    case 26: output.append("w"); break;
                    case 27: output.append("x"); break;
                    case 28: output.append("y"); break;
                    case 29: output.append("z"); break;
                    case 30: output.append("A"); break;
                    case 31: output.append("B"); break;
                    case 32: output.append("C"); break;
                    case 33: output.append("D"); break;
                    case 34: output.append("E"); break;
                    case 35: output.append("F"); break;
                    case 36: output.append("G"); break;
                    case 37: output.append("H"); break;
                    case 38: output.append("I"); break;
                    case 39: output.append("J"); break;
                    case 40: output.append("K"); break;
                    case 41: output.append("L"); break;
                    case 42: output.append("M"); break;
                    case 43: output.append("N"); break;
                    case 44: output.append("O"); break;
                    case 45: output.append("P"); break;
                    case 46: output.append("Q"); break;
                    case 47: output.append("R"); break;
                    case 48: output.append("S"); break;
                    case 49: output.append("T"); break;
                    case 50: output.append("U"); break;
                    case 51: output.append("V"); break;
                    case 52: output.append("W"); break;
                    case 53: output.append("X"); break;
                    case 54: output.append("Y"); break;
                    case 55: output.append("Z"); break;
                    case 56: output.append("0"); break;
                    case 57: output.append("1"); break;
                    case 58: output.append("2"); break;
                    case 59: output.append("3"); break;
                    case 60: output.append("4"); break;
                    case 61: output.append("5"); break;
                    case 62: output.append("6"); break;
                    case 63: output.append("7"); break;
                    case 64: output.append("8"); break;
                    case 65: output.append("9"); break;
                    case 66: output.append("!"); break;
                    case 67: output.append("`"); break;
                    case 68: output.append("~"); break;
                    case 69: output.append("!"); break;
                    case 70: output.append("@"); break;
                    case 71: output.append("$"); break;
                    case 72: output.append("%"); break;
                    case 73: output.append("^"); break;
                    case 74: output.append("&"); break;
                    case 75: output.append("*"); break;
                    case 76: output.append("("); break;
                    case 77: output.append(")"); break;
                    case 78: output.append("-"); break;
                    case 79: output.append("_"); break;
                    case 80: output.append("="); break;
                    case 81: output.append("+"); break;
                    case 82: output.append("{"); break;
                    case 83: output.append("}"); break;
                    case 84: output.append("["); break;
                    case 85: output.append("]"); break;
                    case 86: output.append("|"); break;
                    case 87: output.append("\\"); break;
                    case 88: output.append(":"); break;
                    case 89: output.append(";"); break;
                    case 90: output.append("'"); break;
                    case 91: output.append("\""); break;
                    case 92: output.append("<"); break;
                    case 93: output.append(">"); break;
                    case 94: output.append(","); break;
                    case 95: output.append("."); break;
                    case 96: output.append("?"); break;
                    case 97: output.append("/"); break;
                    default: break;
                } pos++;
            }
            else
            {
                switch(value)
                {
                    case 1: output[pos] = ' '; break;
                    case 2: output[pos] = '\n'; break;
                    case 3: output[pos] = 'a'; break;
                    case 4: output[pos] = 'b'; break;
                    case 5: output[pos] = 'c'; break;
                    case 6: output[pos] = 'd'; break;
                    case 7: output[pos] = 'e'; break;
                    case 8: output[pos] = 'f'; break;
                    case 9: output[pos] = 'g'; break;
                    case 10: output[pos] = 'h'; break;
                    case 11: output[pos] = 'i'; break;
                    case 12: output[pos] = 'j'; break;
                    case 13: output[pos] = 'k'; break;
                    case 14: output[pos] = 'l'; break;
                    case 15: output[pos] = 'm'; break;
                    case 16: output[pos] = 'n'; break;
                    case 17: output[pos] = 'o'; break;
                    case 18: output[pos] = 'p'; break;
                    case 19: output[pos] = 'q'; break;
                    case 21: output[pos] = 'r'; break;
                    case 22: output[pos] = 's'; break;
                    case 23: output[pos] = 't'; break;
                    case 24: output[pos] = 'u'; break;
                    case 25: output[pos] = 'v'; break;
                    case 26: output[pos] = 'w'; break;
                    case 27: output[pos] = 'x'; break;
                    case 28: output[pos] = 'y'; break;
                    case 29: output[pos] = 'z'; break;
                    case 30: output[pos] = 'A'; break;
                    case 31: output[pos] = 'B'; break;
                    case 32: output[pos] = 'C'; break;
                    case 33: output[pos] = 'D'; break;
                    case 34: output[pos] = 'E'; break;
                    case 35: output[pos] = 'F'; break;
                    case 36: output[pos] = 'G'; break;
                    case 37: output[pos] = 'H'; break;
                    case 38: output[pos] = 'I'; break;
                    case 39: output[pos] = 'J'; break;
                    case 40: output[pos] = 'K'; break;
                    case 41: output[pos] = 'L'; break;
                    case 42: output[pos] = 'M'; break;
                    case 43: output[pos] = 'N'; break;
                    case 44: output[pos] = 'O'; break;
                    case 45: output[pos] = 'P'; break;
                    case 46: output[pos] = 'Q'; break;
                    case 47: output[pos] = 'R'; break;
                    case 48: output[pos] = 'S'; break;
                    case 49: output[pos] = 'T'; break;
                    case 50: output[pos] = 'U'; break;
                    case 51: output[pos] = 'V'; break;
                    case 52: output[pos] = 'W'; break;
                    case 53: output[pos] = 'X'; break;
                    case 54: output[pos] = 'Y'; break;
                    case 55: output[pos] = 'Z'; break;
                    case 56: output[pos] = '0'; break;
                    case 57: output[pos] = '1'; break;
                    case 58: output[pos] = '2'; break;
                    case 59: output[pos] = '3'; break;
                    case 60: output[pos] = '4'; break;
                    case 61: output[pos] = '5'; break;
                    case 62: output[pos] = '6'; break;
                    case 63: output[pos] = '7'; break;
                    case 64: output[pos] = '8'; break;
                    case 65: output[pos] = '9'; break;
                    case 66: output[pos] = '!'; break;
                    case 67: output[pos] = '`'; break;
                    case 68: output[pos] = '~'; break;
                    case 69: output[pos] = '!'; break;
                    case 70: output[pos] = '@'; break;
                    case 71: output[pos] = '$'; break;
                    case 72: output[pos] = '%'; break;
                    case 73: output[pos] = '^'; break;
                    case 74: output[pos] = '&'; break;
                    case 75: output[pos] = '*'; break;
                    case 76: output[pos] = '('; break;
                    case 77: output[pos] = ')'; break;
                    case 78: output[pos] = '-'; break;
                    case 79: output[pos] = '_'; break;
                    case 80: output[pos] = '='; break;
                    case 81: output[pos] = '+'; break;
                    case 82: output[pos] = '{'; break;
                    case 83: output[pos] = '}'; break;
                    case 84: output[pos] = '['; break;
                    case 85: output[pos] = ']'; break;
                    case 86: output[pos] = '|'; break;
                    case 87: output[pos] = '\\'; break;
                    case 88: output[pos] = ':'; break;
                    case 89: output[pos] = ';'; break;
                    case 90: output[pos] = '\''; break;
                    case 91: output[pos] = '"'; break;
                    case 92: output[pos] = '<'; break;
                    case 93: output[pos] = '>'; break;
                    case 94: output[pos] = ','; break;
                    case 95: output[pos] = '.'; break;
                    case 96: output[pos] = '?'; break;
                    case 97: output[pos] = '/'; break;
                    default: output[pos] = '\0'; break;}}
            value = 0;
        }
        else if(c[i] == '\n') continue;
        else{std::cout << "\033[1;31mDeeznut: ERROR}> Unknown syntax '" << c[i] << "' at position " << i << "\033[0;0m" << std::endl;return 0;}}
    for(int x = 0; x != output.length(); x++) {if(output[x] == '\r'){    getline(std::cin, input);}else if(output[x] == '\b'){    std::cout << input;}else{     std::cout << output[x];}}
    std::cout << std::endl;
    return 1;
}
int main(int argc,  char* argv[])
{   if(argc < 2) { std::cout << "\033[1;31mDeezNut: No input file.\033[0;0m" << std::endl; return 0;}
    else
    {   std::string filename;
        for(int i = 1; i < argc; i++) {filename.append(argv[i]);filename.push_back(' ');}
        filename.pop_back();
        std::ifstream file(filename); std::string str((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
        if(!file.is_open()) {std::cout << "\033[1;31mDeezNut: File not found.\033[0;0m" << std::endl; return 0;} else return parser(str);
    }
}