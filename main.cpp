//
// Created by maaya on 21/03/2024.
//
#include "olympicsa1.h"

int main(){
    Olympics* olympics = new Olympics();
    olympics->add_country(1,1);
    for (int i = 1; i <= 6; i++) {
        olympics->add_contestant(i,1,Sport::SPINNING,2);
    }
    olympics->add_team(1,1,Sport::SPINNING);
    olympics->add_contestant_to_team(1,3);
    olympics->add_contestant_to_team(1,1);
    olympics->add_contestant_to_team(1,4);
    olympics->remove_contestant_from_team(1,3);
    olympics->add_contestant_to_team(1,5);
    olympics->remove_contestant_from_team(1,6);//not working
    olympics->remove_contestant_from_team(1,1);
    olympics->add_contestant_to_team(1,2);
    olympics->remove_contestant_from_team(1,4);
    delete olympics;
    return 0;
}
