#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include "MovieRatings.h"

class Movie{
    std::string movieName;
    int movieId;
    std::string movieDirector;
    MovieRatings movieRating;
    int movieRunTimeInMin;
    std::string *cast;

public:
    //getter and setter
    std::string getMovieName() const { return movieName; }
    void setMovieName(const std::string &movieName_) { movieName = movieName_; }

    int getMovieId() const { return movieId; }
    void setMovieId(int movieId_) { movieId = movieId_; }

    std::string getMovieDirector() const { return movieDirector; }
    void setMovieDirector(const std::string &movieDirector_) { movieDirector = movieDirector_; }

    MovieRatings getMovieRating() const { return movieRating; }
    void setMovieRating(const MovieRatings &movieRating_) { movieRating = movieRating_; }

    //counstructors 
    Movie();
    void accept();
    Movie(std::string mName, int mId, MovieRatings mRating, std::string mDirector, int mRunTime, std::string *c);
    void display();
    
    // functionalities
};

void showMenu(Movie *m);
int search(Movie *m,int n);
void displayAll(Movie *m,int n);
int  searchByDirector(Movie *m,int n);
#endif // 