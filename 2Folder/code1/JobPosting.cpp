#include<iostream>
#include<cstring>
#include "JobPosting.h"
 

JobPosting array[4];
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
    {
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

JobPosting::JobPosting()
{
    jobtitle= "Tester";
    jobcompany="TCS";
    joblocation="Gurugram";
    jobdescription="2 year Experience ";

}
JobPosting::JobPosting(std::string jbt, std::string jbc, std::string jbl, std::string jbd)
       
{
    jobtitle=jbt;
    jobcompany=jbc;
    joblocation=jbl;
    jobdescription = jbd;
}

void JobPosting::display()
{
    std::cout << "\nJob Title: " <<jobtitle ;
    std::cout << "\nJob Company Name " <<jobcompany ;
    std::cout << "\nJob Location " <<joblocation ;
    std::cout << "\nJob Description" <<jobdescription;
    std::cout << "\n";
}
void displayAll(JobPosting *j, int k)
{
    for (int i = 0; i < k + 1; i++)
    {
        j[i].display();
    }
    std::cout << "\n";
}

void JobPosting::accept()
{
    std::cout<<"\nEnter your job title of ";
    std::cin>>jobtitle;
    std::cout<<"\nEnter your company name";
    std::cin>>jobcompany;
    std::cout<<"\nEnter your job location";
    std::cin>>joblocation;
    std::cout<<"\n Enter your job description";
    std::cin>>jobdescription;
    std::cout<<"\n";

}

JobPosting::~JobPosting()
{
}

void showMenu(JobPosting *j)
{
    int exitFlag = 1, i = -1, choice, p,noofjobs;
    try
    {
        while (exitFlag)
        {
            std::cout << "\n\n1.Add Job Posting \n2.Search job by company\n3.Search job by location \n4.Display\n5.Exit";
            std::cout<<"\nchoose action : ";
            std::cin >> choice;
            switch (choice)
            {
            case 1:
                    std::cout<<"\n No. of jobs you want to add";
                    std::cin>>noofjobs;
                if (i > 5)
                {
                    throw OverflowException("no space to create object");
                }
                else
                {
                    j[++i].accept();
                }
                break;

            case 2:
                if (i < 0)
                {
                    throw UnderflowException("object is yet not made. first create object");
                }
                p = searchByCompany(j, i);
                if (p != -1)
                {
                    std::cout << "\nJob found";

                    std::cout<<array[i].getJobtitle()<<std::endl;
                    std::cout<<array[i].getJobcompany()<<std::endl;
                    std::cout<<array[i].getJoblocation()<<std::endl;
                    std::cout<<array[i].getJobdescription()<<std::endl;
                }
                else
                {
                    std::cout << "\nJob not found";
                }
                break;

            case 3:
                if (i < 0)
                {
                   throw UnderflowException("object is yet not made. first create object");
                }
                p = searchByLocation(j, i);
                if (p != -1)
                {
                    std::cout << "\nJob found";
                }
                else
                {
                    std::cout << "\nJob not found";
                }
                break;
                // j[0].display();
                // break;
            case 4:
                displayAll(j, i);
                break;
            case 5:
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
        std::cout << "\n"<< of.getMessage();
    }
}

void addJobPosting()
{
}

int searchByCompany(JobPosting *j, int k)
{
    std::string jobcompany;
    std::cout << "\nEnter Company name : ";
    std::cin >> jobcompany;
    for (int i = 0; i < k+1; i++)
    {
        if (j[i].getJobcompany() == jobcompany)
        {
            std::cout<<array[i].getJobtitle()<<std::endl;
                    std::cout<<array[i].getJobcompany()<<std::endl;
                    std::cout<<array[i].getJoblocation()<<std::endl;
                    std::cout<<array[i].getJobdescription()<<std::endl;

            return i;
        }
    }
    return -1;
}

int searchByLocation(JobPosting *j, int k)
{
    std::string joblocation;
    std::cout << "\nEnter Job Location name : ";
    std::cin >> joblocation;

    for (int i = 0; i < k+1; i++)
    {
        if (j[i].getJoblocation() == joblocation)
        {
            return i;
        }
    }
    return -1;
}