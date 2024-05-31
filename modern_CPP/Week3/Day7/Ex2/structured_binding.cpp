#include<iostream>
#include<array>

std::array<int, 3> arr {101, 5000, 0};

/*
    AAM Zindagi
*/

int id = arr[0];

int salary = arr[1];

int gender = arr[2];

/*
    Mentos Zindagi
*/

auto [_id, _salary, _gender] = arr;