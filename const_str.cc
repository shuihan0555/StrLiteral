/*************************************************************************
  > File Name: src/const_str.cpp
  > Author: xyz
  > Mail: xiao13149920@foxmail.com
  > Created Time: Mon 06 Aug 2018 05:18:31 PM CST
 ************************************************************************/
#include"const_str.h"
#include<stdio.h>
#include<string.h>

void Split(const char* in, std::vector<int>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    int elem;

    while (1 == sscanf(data, format, &elem, &offset)) {
        out.push_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        offset = 0;
    }
}

void Split(const char* in, std::vector<long>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    long elem;

    while (1 == sscanf(data, format, &elem, &offset)) {
        out.push_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        offset = 0;
    }
}

void Split(const char* in, std::vector<size_t>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    size_t elem;

    while (1 == sscanf(data, format, &elem, &offset)) {
        out.push_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        offset = 0;
    }
}

void Split(const char* in, std::vector<float>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    float elem;

    while (1 == sscanf(data, format, &elem, &offset)) {
        out.push_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        offset = 0;
    }
}

void Split(const char* in, std::vector<double>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    double elem;

    while (1 == sscanf(data, format, &elem, &offset)) {
        out.push_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        offset = 0;
    }
}

void Split(const char* in, std::vector<std::string>& out, const char* format)
{
    const char* data = in;
    int offset = 0;
    char elem[1024];
    memset(elem, 0, sizeof(elem));

    while (1 == sscanf(data, format, elem, &offset)) {
        out.emplace_back(elem);
        data += offset;

        if (*data == 0 || offset == 0) {
            break;
        }
        memset(elem, 0, sizeof(elem));
        offset = 0;
    }
}
