//PREPEND BEGIN
#include <iostream>
#include <string>
//PREPEND END

//TEMPLATE BEGIN
//You just need to implement these two classes
class Gregorian{
};

class Shanghaitech:public Gregorian{
};

//TEMPLATE END

//APPEND BEGIN

// Use this main function
int main()
{
	int year, day, n;
	std::string calendar, f;
    char month[10];

	std::cin >> f;
	std::cin >> year >> month >> day;
	Shanghaitech date(year, month, day);
    Shanghaitech* S = &date;
    Gregorian* G = &date;
    std::cin >> calendar;
    std::cin >> f;
	while (!std::cin.eof()){
		if (f == "pass_day"){
			std::cin >> n;
			G->pass_day(n) if calendar=="G" else S->pass_day(n);
		}
		else if (f == "pass_month"){
			std::cin >> n;
			G->pass_month(n) if calendar=="G" else S->pass_month(n);
		}
		else if (f == "pass_year"){
			std::cin >> n;
			G->pass_year(n) if calendar=="G" else S->pass_year(n);
		}
        else if (f == "print_today"){
			G->print_today() if calendar=="G" else S->print_today();
		}
		else if (f == "print_month"){
			G->print_month() if calendar=="G" else S->print_month();
		}
		else if (f == "print_year"){
			G->print_year() if calendar=="G" else S->print_year();
		}
        else if (f == "go_to"){
			std::cin >> year >> month >> day;
			G->go_to(year, month, day) if calendar=="G" else S->go_to(year, month, day);
		}
        calendar = "";
        f = "";
        std::cin >> calendar;
		std::cin >> f;
	}
	return 0;
}
//APPEND END