#include <iostream>

struct ClockOfTheLongNow {
    ClockOfTheLongNow() {
        year = 2019;
    }

    ClockOfTheLongNow(int yearIn) {
        if(!set_year(yearIn)){
            year = 2019;
        }
    }
    void add_year(){
        year++;
    }
    bool set_year(int new_year) {
        if(new_year < 2019) return false;
        year = new_year;
        return true;
    }

    int get_year() {
        return year;
    }

    private:
    int year;
};
int main() {
    ClockOfTheLongNow clock {2020};
//    if(!clock.set_year(2018)){
//        clock.set_year(2019);
//    }
//    clock.add_year();
    printf("year: %d", clock.get_year());

    return 0;
}
