/*************************************************************************
	> File Name: str_literal.h
	> Author: xyz
	> Mail: xiao13149920@foxmail.com 
	> Created Time: Thu 01 Feb 2018 02:44:50 PM CST
 ************************************************************************/

#ifndef _STR_LITERAL_H_
#define _STR_LITERAL_H_

class StrLiteral
{
	public:
		template<std::size_t N>
		constexpr StrLiteral(const char(&arr)[N]) noexcept 
		: s(arrr), data{s.c_str()}, len{N - 1}, cap{N} {
		}

		constexpr char operator[](std::size_t i) const {
			return data[i];
		}
	
		constexpr char At(std::size_t i) const {
			return i < len ? data[i] : throw std::out_of_range("");
		}

		constexpr std::size_t Size() const noexcept { 
			return len; 
		}
		constexpr std::size_t Cap() const noexcept {
			return cap; 
		}
	
		constexpr operator const char*() const noexcept {
			return data; 
		}
		
		constexpr std::string& C_STR() const noexcept {
			return data; 
		}
		constexpr const char* c_str() const noexcept {
			return data; 
		}

	private:
		const std::string s;
		const char* const data;
		const std::size_t len;
		const std::size_t cap;
};


#endif
