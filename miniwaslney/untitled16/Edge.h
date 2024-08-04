//
// Created by Habiba on 5/7/2022.
//
#include <bits/stdc++.h>

#ifndef UNTITLED16_EDGE_H
#define UNTITLED16_EDGE_H
using namespace std;

class Edge {
public:

    //dataMembers

    int DestinationVertexID;
    int weight;

    //Constractors
    Edge();
    Edge(int, int);

    //Functions
    void setDestinationVertexID(int);
    void setWieght(int);
    int getDestinationVertexID();
    int getWeight();
};


#endif //UNTITLED16_EDGE_H
