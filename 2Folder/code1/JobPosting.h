#ifndef JOBPOSTING_H
#define JOBPOSTING_H

#include<iostream> 

class JobPosting
{
    std::string jobtitle;
    std::string jobcompany;
    std::string joblocation;
    std::string jobdescription;

    public:
    
    JobPosting();
    JobPosting(std::string,std::string,std::string,std::string);

    std::string getJobtitle() const { return jobtitle; }
    void setJobtitle(const std::string &jobtitle_) { jobtitle = jobtitle_; }

    std::string getJobcompany() const { return jobcompany; }
    void setJobcompany(const std::string &jobcompany_) { jobcompany = jobcompany_; }

    std::string getJoblocation() const { return joblocation; }
    void setJoblocation(const std::string &joblocation_) { joblocation = joblocation_; }

    std::string getJobdescription() const { return jobdescription; }
    void setJobdescription(const std::string &jobdescription_) { jobdescription = jobdescription_; }

    void display();
    void displayAll();
    void accept();

    ~JobPosting();
    
};

void showMenu(JobPosting *j);
void addJobPosting();
int searchByCompany(JobPosting *j,int k);
int searchByLocation(JobPosting *j,int k);



#endif // JOBPOSTING_H