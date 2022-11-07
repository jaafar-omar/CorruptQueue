//
// Created by Jfr on 26/10/2022.
//
#include "CQhead.h"

int main() {

    if(input_file.is_open()) {
        string data;
        string temp;
        int i = 0;
        int j = 0;
        while(getline(input_file, data)) {
            stringstream val(data);
            while(val.good() && j < 3) {
                getline(val, temp, ' ');
                arr[i][j] = temp;
                j++;
            }
            i++;
            j = 0;
        }
    }
    input_file.close();

    for (int i = 0; i < 35; ++i) {
        string str = arr[i][0];
        if(str == "lineup") {
            CQSimulation(arr[i][0],arr[i][1],arr[i][2]);
        } else if(str == "arrive" || str == "leave") {
            CQSimulation(arr[i][0],arr[i][1]);
        } else if(str == "serve") {
            CQSimulation("serve");
        }
    }

    return 0;

}