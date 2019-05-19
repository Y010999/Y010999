#include "neuron.h"
#include <cmath>


float Neuron::Akson::getSignal()
{
    return (1 / (1 + exp(-(ownerNeuron->kernelFunction())))) ;
}


Neuron::Neuron()
{
    akson.ownerNeuron = this;
}


float Neuron::kernelFunction()
{
    float result(0.);
    for(Dendrit d : dendrits){
        result += d.inputAkson->getSignal() * d.weight;
    }
    return result;
}
