#include <iostream>
#include <ctime>
#include <cstring>

int main(){
	//new years
	std::tm chosen_date = {};
	chosen_date.tm_mday = 1;
	chosen_date.tm_mon = 0;
	chosen_date.tm_year = 2024 - 1900;

	//now
	std::time_t now = std::time(0);
	//then
  	std::time_t then = std::mktime(&chosen_date);
	//diff
	auto diff = then - now;
	
	//ptr and out
	char * date_now_ptr = std::ctime(&now);
	std::cout<<"Current time: "<<date_now_ptr<<"Chosen time: ";
	char * date_then_ptr = std::ctime(&then);
	std::cout<<date_then_ptr<<std::endl;
	std::cout<<diff/(3600*24)<<" days until chosen date."<<std::endl;
	std::cout<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢀⠀⢆⡱⢫⡟⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣿⣿⣿⣿⣿⢿⣻⢿⣟⡿⡤"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠄⠠⠀⢂⡘⢦⡳⣏⣾⣟⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⢿⣿⣿⣿⣿⣿⣿⣿⣞⣿⣳⣁"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠠⠐⠈⣌⢣⡑⢦⣙⢮⣳⢻⡾⣿⣻⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⡿⣾⢷⣿⢯⠄"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⣌⡳⢈⡒⡌⡖⣭⢺⡭⣞⡥⣏⣿⣽⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣻⣟⡾⣏⡂"<<std::endl<<
"⠀⠀⠀⠀⠀⠰⡈⢑⡣⢜⡜⡱⣌⢧⡽⣲⣽⢻⣾⢿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣿⣽⣿⣽⣻⡽⣷⡂"<<std::endl<<
"⠀⠀⠀⠀⠀⠐⠁⠂⠐⢈⠐⡡⠊⢎⡳⣟⠾⣝⡾⣛⣾⢳⢯⡻⡝⣯⢟⡿⣻⢿⣟⡿⣟⣿⢻⠿⡿⣿⢿⡿⣿⣿⢿⣾⣿⣿⣷⡿⣽⣳⠭"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠠⠐⣸⢮⣷⡱⣭⣞⡵⣏⢿⡱⣏⠷⣎⣟⢮⢳⡙⡴⢋⡴⢩⠞⡼⡙⢮⠘⣉⠣⡙⠤⢋⡹⢱⠫⣟⢿⣽⣿⣟⣿⣯⣟⡷⡀"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⢀⠂⢭⣻⣽⣿⡷⣯⢻⣜⣣⢟⣼⡻⣝⣮⣛⢦⡙⡖⢣⠜⣡⠚⡔⣩⠂⢇⢢⠱⡱⢌⡒⠤⡃⠵⣈⠞⣽⣾⣿⣿⣽⣯⠷"<<std::endl<<
"⠀⠀⠀⠀⠀⠁⠠⣈⣶⣽⣾⡿⣽⢏⡷⣎⢷⣫⠾⣽⣹⢶⡹⣎⡵⣍⢳⢪⢅⡫⠴⣡⢋⡜⢢⢣⡑⢎⡸⢐⡉⢖⡡⢚⡜⣯⣿⣿⣯⣟⡏"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠰⡸⣟⣿⡿⣽⣻⢎⣷⡹⣎⣷⣛⣧⢯⣗⡻⣜⡞⣬⢇⡳⢊⡕⢣⢆⢣⠜⣡⠆⡍⢦⠡⠣⠜⢢⡑⢣⢜⣱⢯⣿⢿⡽⠌"<<std::endl<<
"⠀⠀⠀⠀⠀⠠⣁⢷⣻⣯⢿⣯⢷⣛⠶⣝⣳⢾⣹⢮⢷⡺⣝⢧⡻⣔⢫⡔⢫⠜⡡⢎⢎⡜⢢⡙⡜⠤⢋⡅⣋⠦⡙⢆⢮⡹⣟⣾⣿⡻⠄"<<std::endl<<
"⠀⠀⠀⠀⢀⠰⢬⢏⣷⡿⣟⣮⢳⣭⢻⣭⣟⣯⣿⣯⣿⣷⣯⣿⣳⣮⣳⣜⢣⢎⡱⢎⡖⣸⢡⠚⣄⠫⠔⡘⡔⢢⠍⢎⢲⡹⣽⢾⡷⣟⠂"<<std::endl<<
"⠀⠀⠀⠀⠀⡉⢆⢫⣞⢿⡝⣮⢳⢮⣟⣼⢻⣞⡷⢯⡳⣏⢿⡻⣟⡿⣷⢯⣟⣎⠖⣭⢞⡵⣎⡵⣂⠧⣙⠰⣉⠦⡙⡌⢶⣹⢯⣟⣿⡱"<<std::endl<<
"⠀⠀⠀⠀⠐⡐⢬⢷⡞⣯⡝⣮⢏⣷⣚⣮⢷⣻⣾⣿⣷⣿⣞⣷⣯⣟⣿⣻⡾⣝⠎⡜⢯⡾⣿⣽⢿⣻⣮⢷⡜⣦⣑⢚⢦⣻⣯⡿⣞⠥⠁"<<std::endl<<
"⠀⠀⠀⠀⠂⡄⢫⠞⡑⢊⠱⠉⠞⣲⣛⠾⣏⡿⣹⢾⡹⢣⢏⠾⣽⣻⢾⣽⣻⢭⡚⣌⢣⢛⣷⣯⣿⣧⡝⣎⡝⠶⡭⡞⢦⣻⣯⢿⡉"<<std::endl<<
"⠀⢀⠰⣎⡷⣞⣧⡚⠀⠀⠀⠀⡘⠴⣩⠿⣜⣳⡱⢎⡵⣋⢮⡟⣷⢯⣟⣾⢣⠷⡱⢌⠦⡙⣎⠿⣹⠻⡟⣷⢾⡱⢣⠝⡲⢯⡟⠁"<<std::endl<<
"⠀⢌⣻⣽⣻⡽⣶⡹⠄⠀⢌⠰⣌⡳⣝⣯⢳⡧⣝⣏⢶⡹⣎⡿⣽⣻⢾⣝⡯⢏⡵⢊⠖⡱⢌⡚⢥⠓⡜⢤⠣⡙⢥⢋⡵⣻"<<std::endl<<
"⠀⠂⢳⣳⢯⣟⡾⣝⢦⠈⣂⠳⡜⣽⢺⡼⣳⡽⣞⣼⣳⢿⣹⣟⡷⢯⣛⣮⡝⣮⠰⣉⢎⡱⠌⡜⢢⡙⡜⢢⡑⡩⢆⢣⢺⡅"<<std::endl<<
"⠀⠀⠡⢏⡿⣾⣽⢫⣮⡑⠤⡛⣼⢣⡯⣗⡯⢷⣛⡾⣽⣞⣷⣻⣾⢿⡿⣷⢿⣞⣳⣵⢪⠴⡩⢜⠡⡒⠌⡥⢒⡱⢊⢆⠯⣼⢆"<<std::endl<<
"⠀⠀⠀⠭⢳⢧⣛⡧⣷⣙⢦⡙⣦⢏⡷⣹⢞⡯⣯⣽⢳⣞⡷⣯⣟⣯⠿⣝⠻⡜⡭⠻⣍⠚⡵⣊⠵⣡⢋⡔⢣⠜⣡⠞⡰⢭⡇"<<std::endl<<
"⠀⠀⠀⠀⠈⠾⣱⠿⣼⡹⢮⡱⣎⠿⣜⢧⢯⣳⠷⣭⣟⡾⡽⢧⣻⣜⠳⣌⠳⡩⠔⢣⠌⡓⢬⢃⡞⢤⠣⡜⢣⡙⣤⢛⡥⢫⠐"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠉⠠⢉⢧⡳⣭⢻⡜⣯⢞⣵⣻⣳⢯⡾⣽⢯⣷⣞⣷⣬⣳⡹⣌⠣⡜⢱⢊⠖⡸⢂⡳⢌⢣⠜⡰⣋⠖⠁"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⡘⢦⡻⣜⢧⣻⡜⣯⢞⡵⣯⣿⣿⣿⣿⣿⣾⣽⣾⣽⣿⣽⣷⣎⡕⡪⢜⡡⢓⡜⡌⢦⡙⡔⠡⠂"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢉⠲⣝⢮⡳⢧⡻⣜⢯⡽⣳⡽⣞⣯⣟⡻⣙⢛⠻⣻⢿⡿⣟⢯⡛⡕⢪⠔⡣⢜⡘⠆⠱⠈⠁"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢪⠔⡹⢮⡝⣧⢻⡜⣧⢻⡵⣛⣾⢳⣯⢷⣹⢮⡗⣧⢛⡼⢌⠦⡑⢮⡑⢎⡱⢊⠔"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⢞⡡⣛⡼⣣⢟⡼⣣⠿⣜⠿⣼⣻⣞⣯⢷⣻⣼⢣⢏⡲⣉⠖⡩⢆⡙⢦⠱⡉"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢭⡚⣵⢣⡟⣵⢯⣞⡵⣻⢭⡟⡶⣓⠮⡜⢭⡒⣍⠣⢎⠴⡡⢎⡕⢪⡑⢎⡱"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⢣⢟⡼⣣⢿⡹⡾⣼⣹⢧⡟⣾⣱⢏⡷⣙⢦⡱⢌⠳⣌⠲⡑⢎⡜⡥⡙⢦⡑"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⠭⣞⡵⣛⡮⣗⢿⣱⢯⠾⣝⡾⣭⣟⡾⣵⢮⣱⢋⠶⣈⢧⣙⠲⣜⡡⢝⢢⡹⣄⡀"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⠀⡹⢎⡷⣫⢷⣹⡞⣧⢟⣻⡽⣽⣳⢯⡿⣽⣞⡷⣯⢻⡭⢶⢩⠓⢦⡙⢬⠲⣑⢻⣷⣦⣀"<<std::endl<<
"⠀⠀⠀⠀⠀⠀⠀⠀⠀⢄⠱⣏⡞⣷⢫⣶⢻⡼⣫⣗⢯⡷⣯⠿⣽⠳⢯⡝⣎⢳⡙⢎⡲⡙⢦⡙⢦⡙⠤⠈⣿⣿⣿⣷⣤";


	return 0;
}
