#ifndef _TT_TCOLOR_CC
#define _TT_TCOLOR_CC
#include "tcolor.h"
#include "texcept.h"

namespace tt {

tt :: print_t :: print_t ():
	indent_p     (0),
	color_p      (light_black),
	invite_p     ('\0'),
	invited_p    (false),
	fore_color_p (dark_black),
	file_p       (stdout)
{}

tt :: print_t :: print_t (const print_t& obj):
	indent_p     (obj.indent_p),
	color_p      (obj.color),
	invite_p     (obj.invite_p),
	invited_p    (obj.invited_p),
	fore_color_p (obj.fore_color_p),
	file_p       (obj.file)
{}

tt :: print_t :: ~print_t () 
{}

void tt :: print_t :: indent (int num) {
	if (num < 0)
		throw tt::exception ("tt::print_t::indent", "invalid argument (expected unsigned int)");
	indent_p = num;
}

void tt :: print_t :: color (color col)  {
	if (col > 20 || col < 0)
		throw tt::exception ("tt::print_t::color", "invalid argument (expected tt::color)");
	color_p = col;
}

void tt :: print_t :: fore_color (color col) {
	if (col > 20 || col < 0)
		throw tt::exception ("tt::print_t::fore_color", "invalid argument (expected tt::color)");
	fore_color_p = col;
}

void tt :: print_t :: invite (char sym)  {
	invited_p = true;
	invite_p = sym;
	
}

} // namespace tt

#endif // End of include guard: _TT_TCOLOR_CC
