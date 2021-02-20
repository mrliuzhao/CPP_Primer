#include <iostream>

extern const double PI = 3.1415926;

class Book
{
public:
    // 各种构造函数
    Book(void)
    {
        std::cout << "Void Book constructed!!!" << std::endl;
        this->isbn = "";
        this->count = 0;
        this->priceEach = 0.0;
    }

    Book(std::string isbn, int count, double priceEach) : 
    isbn(isbn), count(count), priceEach(priceEach)
    {
    }

    // 拷贝构造函数
    // Book(const Book &obj)
    // {
    // }

    // ~Book(void); // 析构函数

    // 成员函数
    void SetISBN(std::string isbn)
    {
        this->isbn = isbn;
    }
    void SetCount(int count)
    {
        this->count = count;
    }
    void SetPriceEach(double priceEach)
    {
        this->priceEach = priceEach;
    }
    std::string GetISBN()
    {
        return this->isbn;
    }
    int GetCount()
    {
        return this->count;
    }
    double GetPriceEach()
    {
        return this->priceEach;
    }

    // 友元函数
    // friend double GetTotalPrice(Book book, int count);

    // 运算符重载
    // 重载 双目+ 运算符
    // Book operator+(Book &b)
    // {
    //     if (this->isbn != b.GetISBN())
    //     {
    //         std::cout << "" << std::endl;
    //     }
    //     else
    //     {
    //     }
    // }

    // 重载 单目- 运算符
    // Book operator-(void);
    // 重载 流提取 运算符
    std::ostream &operator>>(std::ostream &output)
    {
        output << "ISBN: " << this->GetISBN()
               << "; Count = " << this->GetCount()
               << "; PriceEach = " << this->GetPriceEach() << "\n";
        return output;
    }
    // 重载 流插入 运算符，注意重载的是ostream的函数，因此是友元函数
    friend std::ostream &operator<<(std::ostream &output, Book &b)
    {
        output << "ISBN: " << b.GetISBN()
               << "; Count = " << b.GetCount()
               << "; PriceEach = " << b.GetPriceEach();
        return output;
    }

private:
    std::string isbn;
    int count;
    double priceEach;
};
