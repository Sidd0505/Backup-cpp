#include "Movie.h"
#include "MovieRatings.h"
#include <string.h>
#include <iostream>

class UnderflowException : public std::exception
{ // inheriting exception class
    char message[50];

public:
    UnderflowException() {}

    UnderflowException(const char *s)
    {
        strcpy(message, s);
    }

    char *getMessage()
    {m
        return message;
    }
};

class OverflowException : public std::exception
{ // inheriting exception class
    char message[50];

public:
    OverflowException() {}

    OverflowException(const char *s)
    {
        strcpy(message, s);
    }

    char *getMessage()
    {
        return message;
    }
};

void showMenu(Movie *m)
{
    int exitFlag = 1, i = -1, choice, k;
    try
    {
        while (exitFlag)
        {
            std::cout << "\n\n1.Add movie Record \n2.Search  \n3.Display \n4.Display movie by director \n5.Exit";
            std::cout<<"\nchoose action : ";
            std::cin >> choice;
            switch (choice)
            {
            case 1:
                if (i > 5)
                {
                    throw OverflowException("no space to create object");
                }
                else
                {
                    m[++i].accept();
                }
                break;

            case 2:
                if (i < 0)
                {
                    throw UnderflowException("object is yet not made. first create object");
                }
                k = search(m, i);
                if (k != -1)
                {
                    std::cout << "\nMovie found";
                }
                else
                {
                    std::cout << "\nMovie not found";
                }
                break;

            case 3:
                m[0].display();
                break;

            case 4:
                displayAll(m, i);
                break;

            case 5:

                k = searchByDirector(m, i);
                if (k != -1)
                {
                    std::cout << "\nMovie found";
                }
                else
                {
                    std::cout << "\nMovie not found";
                }
                break;
            case 6:
                exitFlag = 0;
                break;
            default:
                std::cout << "\nInvalid Choice";
                break;
            }
        }
    }
    catch (UnderflowException &uf)
    {
        std::cout << "\n"
                  << uf.getMessage();
    }
    catch (OverflowException &of)
    {
        std::cout << "\n"
                  << of.getMessage();
    }
}

int search(Movie *m, int n)
{
    int mId;
    std::cout << "\nEnter Movie Id : ";
    std::cin >> mId;
    for (int i = 0; i < n+1; i++)
    {
        if (m[i].getMovieId() == mId)
        {
            return i;
        }
    }
    return -1;
}

Movie::Movie()
{
    movieName = "Welcome";
    movieId = 101;
    movieDirector = "sajid";
    movieRating = MovieRatings ::UA;
    movieRunTimeInMin = 180;
}

void Movie ::accept()
{
    std::cout << "\nEnter Movie Id: ";
    std::cin >> movieId;
    std::cout << "\nEnter Movie Name: ";
    std::cin >> movieName;
    std::cout << "\nEnter Movie Director : ";
    std::cin >> movieDirector;
    std::cout << "\nEnter Movie Time (in mins) : ";
    std::cin >> movieRunTimeInMin;
    std::cout << "\n Enter Movie Cast : ";
    // cast = new std::string;
    cast = new std::string("abc");
}

Movie::Movie(std::string mName, int mId, MovieRatings mRating, std::string mDirector, int mRunTime, std::string c[])
{
    movieName = mName;
    movieId = mId;
    movieRating = mRating;
    movieDirector = mDirector;
    movieRunTimeInMin = mRunTime;
    cast = new std::string[5];
    cast = c;
}

void Movie::display()
{
    std::cout << "\nMovie Id: " << movieId;
    std::cout << "\nMovie Name: " << movieName;
    std::cout << "\nMovie Director : " << movieDirector;
    std::cout << "\nMovie Time (in mins) : " << movieRunTimeInMin;
    std::cout << "\nMovie Cast : ";

    std::cout << *cast << "  ";
    std::cout << "\nMovie Rating : " << movieRating;
    std::cout << "\n";
}

void displayAll(Movie *m, int n)
{
    for (int i = 0; i < n + 1; i++)
    {
        m[i].display();
    }
    std::cout << "\n";
}

int searchByDirector(Movie *m, int n)
{
    std::string dName;
    std::cout << "\nEnter Director name : ";
    std::cin >> dName;
    for (int i = 0; i < n+1; i++)
    {
        if (m[i].getMovieDirector() == dName)
        {
            return i;
        }
    }
    return -1;
}