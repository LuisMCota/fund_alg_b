#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//temperatura con condiciones//
//frio:16
//caliente: 29
int frio =  16;
int caliente = 29;
int sofa = 7000;

int main(int argc, char** argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv[3][0];
    bool temp_condition = (inputTemp == frio);
    bool temp_condition2 = (inputTemp == caliente);
    bool temp_condition3 = (inputTemp >= caliente);
    bool canRobotMove = (inputTemp <= caliente);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isuserFemale = (inputName != 'F');

    if(canRobotMove){
        //Robot.move(x_coord, y_coord)
    }else{
        //Robot.stop(x-coord, y_coord)
    }

    if(hasUserMoney){
        //Allows to buy
    }
    else{
        //Rejected product
    }

    if(inputTemp <= 29){
        //Robot.move(x.axis, y_axis)
    } else{
        //Robot.stop(x_cord)
    }
    return 0;
}

// e.g.
