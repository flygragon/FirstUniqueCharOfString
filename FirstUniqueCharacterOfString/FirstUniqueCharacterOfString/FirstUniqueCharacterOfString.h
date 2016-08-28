#pragma once
#include<string>
#include<time.h>
#include<iostream>

class FirstUniqueCharOfString {
public:
	int firstUniqChar(std::string s) {
		int exist[26]{}, unique = 0;
		exist[int(s[0] - 'a')] ++;
		for (int i = 1; s[i]; i++) {
			exist[int(s[i] - 'a')] ++;
			if (s[i] == s[unique])
				while (s[unique] && exist[int(s[unique] - 'a')] >1)
					unique++;
			if (!s[unique])
				break;
		}
		std::cout << clock() / double(CLOCKS_PER_SEC) << '\n';
		return s[unique] ? unique : -1;
	}
};