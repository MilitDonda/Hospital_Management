#include<string>
#include<iostream>


#include "./../include/global.hh"

Date getDateFromUser(){
    Date inputDate;
    std::cout<<"enter date in DD MM YYYY format: " << std::endl;

    std::cout <<"DAY: ";
    std::cin >> inputDate.day;

    std::cout <<"MONTH: ";
    std::cin >> inputDate.month; 

    std::cout <<"YEAR: ";
    std::cin >> inputDate.year;

    std::cout<<"Today's Date is " <<inputDate.day << "/" << inputDate.month << "/" << inputDate.year << std::endl;

    return inputDate;
}

int main(){
    Date inputDate = getDateFromUser();
}