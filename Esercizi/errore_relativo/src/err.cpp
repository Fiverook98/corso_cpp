#include "../../val_assoluto/src/abs.hpp"

float errore_relativoF(float x, float y){
    return valore_assolutoF(x - y) / valore_assolutoF(x);
}