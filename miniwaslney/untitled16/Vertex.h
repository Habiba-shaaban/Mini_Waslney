//
// Created by Habiba on 5/7/2022.
//
#include <bits/stdc++.h>
#include "Edge.h"
#ifndef UNTITLED16_VERTEX_H
#define UNTITLED16_VERTEX_H
using namespace std;

class Vertex {
public:

    //dataMembers
    int stateId;
    string stateName;
    vector<Edge> edges;

    //Constractors
    Vertex();
    Vertex(int, string);

    //Functions
    void setStateID(int);
    void setStateName(string);
    int getStateID();
    string getStateName();
    vector<Edge> getEdge();
};


#endif //UNTITLED16_VERTEX_H
