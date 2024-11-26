#include <iostream>
#include <fstream>
#include <map>
#include <string>
using namespace std;

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        fstream file(argv[1]);
        if (!file.is_open())
        {
            cout << "ERROR OPEN\n";
            exit(1);
        }
        string line;
    string year;
    string month;
    string day;
        while (getline(file, line))
        {
            size_t dilimiter = line.find('-');
            if(dilimiter!= line.npos){
            year =  (line.substr(0, dilimiter) );
            cout << "years == |" << year <<"|"<< std::endl;
            month = (line.substr(year.length()+1, dilimiter-2) );

            cout << "month == |" << month <<"|"<< std::endl;
            dilimiter++;
            cout<<dilimiter<<endl;
            day =  (line.substr(line.npos, line.find('|') ));
                cout<<"day  == |"<<day<<"|"<<std::endl;;

            }


        }
        file.close();
    }
else
    cout << "argc is incorrect\n";
}