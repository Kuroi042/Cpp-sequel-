#include <iostream>
#include <fstream>
#include <map>
#include <cstdlib>
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

        string key, value, data;
        string year, month, day;

        while (getline(file, data))
        {
            // Find the pipe position
            size_t pipe_pos = data.find("|");
            if (pipe_pos == string::npos)
            {
                cout << "Invalid format, missing '|'\n";
                continue;
            }

            key = data.substr(0, pipe_pos);
            size_t start = key.find_first_not_of(" ");
            size_t end = key.find_last_not_of(" ");
            if (start == string::npos || end == string::npos)
            {
                key = "";
            }
            else
            {
                key = key.substr(start, end - start + 1);
            }

            value = data.substr(pipe_pos + 1);
            start = value.find_first_not_of(" ");
            end = value.find_last_not_of(" ");
            if (start == string::npos || end == string::npos)
            {
                value = "";
            }
            else
            {
                value = value.substr(start, end - start + 1);
            }


            if (key.empty() ){ 
                cout << "empty value \n";
                continue;
        }
            if (value.empty()){
                cout << "empty key \n";
                continue;
            }
        }
        cout << "key == |" << key << "|" << endl;
        cout << "value == |" << value << "|" << endl;
    }
}

// // cout<<"value ==|" <<key<<"|"<<std::endl;
// // cout<<"value == |"<<value<<"|"<<std::endl;
//         size_t start_key =  key.find_first_not_of(" ");
//         size_t  end_key =  key.find_last_not_of(" ");
//             key  =  key.substr(start_key , end_key-start_key+1);
//             // cout<<"final value == |"<<key<<"|"<<std::endl;
//             size_t first_dash =  key.find('-');
//             size_t second_dash =  key.find('-',first_dash+1);
//         // cout<<"first dash  == "<<first_dash<<std::endl;
//         //     cout<<"second dash  == "<<second_dash<<std::endl;
//         year =  (atoi(key.substr(0,first_dash).c_str()));
//         month =  (atoi(key.substr(first_dash+1, second_dash-first_dash-1).c_str()));
//         day = (atoi(key.substr(second_dash+1).c_str()));
//         if(year.)

//     }
//             size_t start_value =  value.find_first_not_of(" ");
//         size_t  end_value =  value.find_last_not_of(" ");
//          value =  value.substr(start_value , end_value-start_value+1);
//         cout<<"value == |"<<value<<"|"<<std::endl;

//                 }

// else
//     cout << "argc is incorrect\n";
//     }
