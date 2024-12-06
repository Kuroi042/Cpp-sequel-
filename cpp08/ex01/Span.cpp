   #include "Span.hpp"
    Span::Span(unsigned int _N) : N(_N) {
           
          };
        Span::~Span(){};


Span &Span::operator=(const Span &other)
{
    if (this != &other)
    {
        this->N = other.N;
        this->hh = other.hh;
    }
    return *this;
}
Span::Span(const Span &other)
{
        if(this!= &other)
            {
                this->N =  other.N;
                this->hh =  other.hh;
            }
}

 
void Span::addNumber(int i)
{
    if (hh.size() >= N)
    {
        throw std::out_of_range("Out of bounds");
    }
    
    hh.push_back(i);
}

    class outofbound : public ::std::exception
    {

    public:
        const char *what() const throw()
        {
            return "out of bound\n";
        };
    };

   int Span::longestSpan()
    {
        std::sort(this->hh.begin(), this->hh.end());

        int longestSpan = 0;
        std::vector<int>::iterator iter1 = this->hh.begin();
        int first = *iter1;
        int max = 0; 
        for (; iter1 != this->hh.end(); iter1++)
        {
            max = -first + *(iter1); // 

            if (max > longestSpan)
            {
                longestSpan = max;
            }
        }

        return longestSpan;
    }

    int Span::shortestSpan()
    {
        std::sort(this->hh.begin(), this->hh.end());

        std::vector<int>::iterator iter1 = this->hh.begin();
        unsigned int shortestSpan = std::numeric_limits<int>::max();
        for (; iter1 != this->hh.end(); iter1++)
        {
            unsigned int min = *(iter1 + 1) - *iter1;
            // std::cout<<"min == "<< *(iter1 + 1)<< " - "<<*iter1<<std::endl;
            // std::cout<<"min == "<<min<<std::endl;
            if (min < shortestSpan)
            {
                shortestSpan = min;
            }
        }
         return shortestSpan;
    }


        unsigned int Span::getSize()
    {
        return N;
    }
 std::vector<int> &Span::getVect() 
    {
        return hh;
    }