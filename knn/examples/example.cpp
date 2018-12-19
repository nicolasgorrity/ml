#include "knn.hpp"
#include <iostream>

int main(int argc, char* argv[]) {

    knn::KnnClassifier clf({{1,1,1}, {4,4,4}, {8,8,8}, {10,10,10}, {13,13,13}},
                           { 1,  1,    1,   2,   2});
    //clf.printDataset();
    unsigned int k=2;
    clf.predict({{1,1,1}, {7,7,7}, {8,8,8}, {9,9,9}, {15,15,15}}, 3);
    clf.printPrediction();
}
