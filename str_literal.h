/*************************************************************************
	> File Name: str_literal.h
	> Author: xyz
	> Mail: xiao13149920@foxmail.com 
	> Created Time: Thu 01 Feb 2018 02:44:50 PM CST
 ************************************************************************/

#ifndef _STR_LITERAL_H_
#define _STR_LITERAL_H_

#include<stdexcept>
#include<string>
#include<vector>

class StrLiter {
    public:
        template<size_t N>
            constexpr StrLiter(const char (&arr)[N]) :
                s(arr),
                str(s.c_str()),
                len(N-1) {
                }

        const char operator[](std::size_t n) const {
            return str[n];
        }

        const char at(std::size_t n) const {
            return n < len ? str[n]: throw std::out_of_range("");;
        }

        const char* c_str(void) const {
            return str;
        }

        const std::string& C_STR(void) const {
            return s;
        }

        size_t Length(void) const {
            return len;
        }

    private:
        const std::string s;
        const char* str;
        const size_t len;
};

void Split(const char* in, std::vector<int>& out, const char* format=R"(%d|%n)");
void Split(const char* in, std::vector<long>& out, const char* format=R"(%ld|%n)");
void Split(const char* in, std::vector<size_t>& out, const char* format=R"(%zu|%n)");
void Split(const char* in, std::vector<float>& out, const char* format=R"(%f|%n)");
void Split(const char* in, std::vector<double>& out, const char* format=R"(%lf|%n)");
void Split(const char* in, std::vector<std::string>& out, const char* format=R"(%[^|]|%n)");

#endif
