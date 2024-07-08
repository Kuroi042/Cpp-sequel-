#include "ScalarConverter.hpp"
int ScalarConverte::checkChar(std::string str)
{

        if (str.size() == 1 && isprint(str[0]) && !isdigit(str[0]))
                return 1;
        else
                return 0;
}
int ScalarConverte::checkDigit(const std::string &str)
{
        bool has_f = false;
        bool hasDot = false;
        bool hasDigit = false;
        size_t len = str.length();

        if (len == 0)
                return 0;
        if (str == "f")
                return 0; // f alone is not valid
        if (str[len - 1] == '.')
                return 0;
        if (str[len - 1] == 'f')
        {
                has_f = true; // Check for float at the end
        }

        size_t start = 0;

        if (str[0] == '+' || str[0] == '-')
        {
                start = 1;
        }

        size_t end = has_f ? len - 1 : len;

        for (size_t i = start; i < end; ++i)
        {
                if (str[i] == '.')
                {
                        if (hasDot)
                                return 0; // multiple . . .
                        hasDot = true;
                }
                else if (isdigit(str[i]))
                {
                        hasDigit = true;
                }
                else
                {
                        return 0; // Non-digit
                }
        }

        if (hasDot)
        {
                size_t dotPos = str.find('.');
                if (dotPos == end - 1 && has_f)
                {
                        return 3;
                }
        }

        // Check if  invalid integer 5f
        if (!hasDot && has_f)
        {
                return 0;
        }

        if (hasDot && hasDigit)
        {
                if (has_f)
                {

                        size_t dotPos = str.find('.');
                        if (dotPos == start || dotPos == end - 1)
                        {
                                return 0;
                        }
                        return 3; // Valid float with f
                }
                else
                {
                        return 2; // Valid double without f
                }
        }

        if (hasDigit)
                return 1; // Valid integer
        else
                return 0; // Invalid
}

void ScalarConverte::caseDigit(const std::string &raw)
{
        std::cout << "case is int\n";
        int i = atoi(raw.c_str());
        if (isprint(i))
                std::cout << "char : " << i << std::endl;
        else
                std::cout << "char : " << "not displayble" << std::endl;
        std::cout << "int : " << i << std::endl;
        std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}

void ScalarConverte::caseFloat(const std::string &str)
{
        int i = 0;
        for (i = 0; i < (int)str.length(); i++)
        {
                if (str[i] == '.')
                        break;
        }
        int j;
        for (j = 0; j < (int)str.length(); j++)
        {
                if (str[j] == 'f')
                        break;
        }

        std::cout << "case is float\n";
        std::cout << str << std::endl;
        std::cout << "char : " << "*" << std::endl;
        std::cout << "int : " << static_cast<int>(atoi(str.substr(0, i).c_str())) << std::endl;
        std::cout << "float : " << str << std::endl;
        std::cout << "double : " << static_cast<double>(atof(str.substr(0, j).c_str())) << std::endl;
}

void ScalarConverte::caseDouble(const std::string &str)
{

        int i = 0;
        for (i = 0; i < (int)str.length(); i++)
        {
                if (str[i] == '.')
                        break;
        }

        std::cout << "case is double\n";
        std::cout << str << std::endl;
        std::cout << "char : " << "Non displayable" << std::endl;
        std::cout << "int : " << static_cast<int>((atoi(str.substr(0, i).c_str()))) << std::endl;
        std::cout << "float : " << static_cast<float>(atof(str.c_str())) << "f" << std::endl;

        std::cout << "double : " << str << std::endl;
}

void ScalarConverte::caseChar(const std::string &raw)
{
        int i = atoi(raw.c_str());

        std::cout << "case is char\n";
        std::cout << "char : " << raw[0] << std::endl;
        if (isascii(i))
                std::cout << "int : " << static_cast<int>(i) << std::endl;
        std::cout << "float : " << static_cast<float>(i) << ".0f" << std::endl;
        std::cout << "double : " << static_cast<double>(i) << ".0" << std::endl;
}
int ScalarConverte::checkforinfinite(std::string str)
{

        if (str == "nanf" | str == "nan" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
                return 1;

        else
                return 0;
}

void ScalarConverte::strangeCase(std::string raw)
{

        std::cout << "char : " << "impossible" << std::endl;
        std::cout << "int : " << "impossible" << std::endl;
        std::cout << "float : " << convert_to_float(raw) << "f" << std::endl;
        std::cout << "double : " << convert_to_double(raw) << std::endl;
}
float ScalarConverte::convert_to_float(std::string raw)
{
        if (raw == "nanf")
                return (std::numeric_limits<float>::quiet_NaN());
        else if (raw == "+inff")
                return (std::numeric_limits<float>::infinity());
        else if (raw == "-inff")
                return (-std::numeric_limits<float>::infinity());
        return (static_cast<float>(strtof(raw.c_str(), nullptr)));
}
double ScalarConverte::convert_to_double(std::string raw)
{
        if (raw == "nan")
                return (std::numeric_limits<double>::quiet_NaN());
        if (raw == "+inf")
                return (std::numeric_limits<double>::infinity());
        if (raw == "-inf")
                return (-std::numeric_limits<double>::infinity());
        return (static_cast<double>(strtod(raw.c_str(), nullptr)));
}

void ScalarConverte::convert(const std::string &raw)
{
        if (checkforinfinite(raw))
                strangeCase(raw);

        else if (checkChar(raw))
        {
                caseChar(raw);
        }
        else if (checkDigit(raw) == 1)
        {
                caseDigit(raw);
        }
        else if (checkDigit(raw) == 3)
        {
                caseFloat(raw);
        }
        else if (checkDigit(raw) == 2)
        {
                caseDouble(raw);
        }
        else
        {
                std::cout << "input incorrect" << std::endl;
        }
}
