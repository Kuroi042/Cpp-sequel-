#include "BitcoinExchange.hpp"


static float convert_to_float(string &var)
{
    float result;
    stringstream ss(var);
    ss >> result;
    return result;
}
static bool valid_num(string var, bool isFloat = true)
{
    size_t dot_counter = count(var.begin(), var.end(), '.');
    if (var.empty() || dot_counter > 1 || var.at(var.length() - 1) == '.')
        return false;
    if (var.at(0) == '-')
        var.at(0) = '0';
    if (isFloat)
        return (var.find_first_not_of("0123456789.") == string::npos);
    return (var.find_first_not_of("0123456789") == string::npos);
}



static bool ValidDate(string var)
{
    string month, year, day;
    int first_dash, second_dash;

    // Ensure there are exactly 2 dashes
    if (count(var.begin(), var.end(), '-') != 2)
        return false;

    // Find positions of dashes
    first_dash = var.find('-');
    second_dash = var.find('-', first_dash + 1);

    // Extract year, month, day
    year = var.substr(0, first_dash);
    month = var.substr(first_dash + 1, second_dash - first_dash - 1);
    day = var.substr(second_dash + 1);

    // Validate the date components
    if (year.length() != 4 || !valid_num(year, false) ||
        month.length() != 2 || !valid_num(month, false) ||
        day.length() != 2 || !valid_num(day, false) ||
        (int)convert_to_float(year) < 1 ||
        (int)convert_to_float(month) < 1 || (int)convert_to_float(month) > 12 ||
        (int)convert_to_float(day) < 1 || (int)convert_to_float(day) > 31)
    {
        return false;
    }

    return true;
}

    BitcoinExchange::BitcoinExchange()
    {
        string key;
        string value;
        string data;
        ifstream file("./data.csv");

        if (!file.is_open())
        {
            cerr << "Error: Could not open the input CSV file.\n";
            return;
        }

        getline(file, data); // Skip the header line
        while (getline(file, data))
        {
            size_t comma_pos = data.find(",");
            if (comma_pos == string::npos)
            {
                cerr << "Error: Invalid CSV format (missing ',').\n";
                continue;
            }

            key = data.substr(0, comma_pos);
            value = data.substr(comma_pos + 1);

            // Trim whitespace
            size_t start = key.find_first_not_of(" ");
            size_t end = key.find_last_not_of(" ");
            key = key.substr(start, end - start + 1);

            start = value.find_first_not_of(" ");
            end = value.find_last_not_of(" ");
            value = value.substr(start, end - start + 1);

            if (!ValidDate(key) || !valid_num(value))
            {
                cerr << "Error: Invalid data in CSV file.\n";
                continue;
            }

            input[key] = convert_to_float(value);
        }

        file.close();
    }

    BitcoinExchange::~BitcoinExchange() {}


float BitcoinExchange::getExchange(const string &date)
{
    float result = -1.0;
    map<string, float>::iterator it = input.begin();

    for (; it != input.end(); ++it)
    {
        if (it->first > date)
            break;
        result = it->second;
    }

    if (result == -1.0)
    {
        cerr << "Error: No exchange rate available for the given date or earlier.\n";
    }

    return result;
}




void BitcoinExchange::handle_data(const string &path)
{
    fstream file(path.c_str());
    if (!file.is_open())
    {
        cerr << "Error: Could not open file.\n";
        return;
    }

    string key, value, data;
    getline(file, data);
    size_t start = data.find_first_not_of(" ");
    size_t end = data.find_last_not_of(" ");
    data = data.substr(start, end - start + 1);

    if (data != "date | value")
    {
        cerr << "Error: Invalid file format.\n";
        file.close();
        return;
    }

    while (getline(file, data))
    {
        size_t pipe_pos = data.find("|");
        if (pipe_pos == string::npos)
        {
            cerr << "Error: Invalid format, missing '|'.\n";
            continue;
        }

        key = data.substr(0, pipe_pos);
        start = key.find_first_not_of(" ");
        end = key.find_last_not_of(" ");
        key = key.substr(start, end - start + 1);

        value = data.substr(pipe_pos + 1);
        start = value.find_first_not_of(" ");
        end = value.find_last_not_of(" ");
        value = value.substr(start, end - start + 1);

        if (!ValidDate(key))
        {
            cerr << "Error: Invalid date format (" << key << ").\n";
            continue;
        }

        if (!valid_num(value) || convert_to_float(value) < 0 || convert_to_float(value) > 1000)
        {
            cerr << "Error: Invalid value (" << value << ").\n";
            continue;
        }

        float exchange_rate = getExchange(key);
        if (exchange_rate != -1.0)
        {
            cout << key << " => " << value << " = " << exchange_rate * convert_to_float(value) << "\n";
        }
    }

    file.close();
}

 