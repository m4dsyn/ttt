#ifndef _TT_TCOLOR_H
#define _TT_TCOLOR_H

#include <string>
#include <ttdef.hpp>
#include <cstdio>

namespace tt {

enum color { black = 0, red, green, yellow, blue, magenta, cyan,
			 dark_black, dark_red, dark_green, dark_yellow, dark_blue, dark_magenta, dark_cyan,
			 light_black, light_red, light_green, light_yellow, light_blue, light_magenta, light_cyan};

class print_t {
	int indent_p;
	tt:color color_p;
	char invite_p;
	bool invited_p;
	tt::color fore_color_p;
	FILE* file_p;

public:
	
	print_t ();
	print_t (const print_t&);
	~print_t ();

	void indent     (int num);
	void color      (color col);
	void fore_color (color col);
	void invite     (char sym);
	void file       (FILE* file);

	int write (const char*);
	int write (const std::string);
	
	
}

int puts (const std::string& str);

int printf (const char *, ...);




} // namespace tt

#endif // End of include guard: _TT_TCOLOR_H
