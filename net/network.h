#include <stdlib.h>
#include <stdio.h>
#include <time.h>

typedef struct Neuron{
	float *weights;
	float bias;
	float output;
	float dBias;
	float dOutput;
	float activationGradient;
} Neuron;

typedef struct Layer{
  Neuron *neurons;
  void *input_layer;
	void *output_layer;
  size_t size;
} Layer;

typedef struct Network{
	Layer *input;
	Layer *output;
} Network;

Layer *create_layer(size_t size, Layer *previousLayer);
float squish(float input);
void calculateOutputs(Layer *layer);
void setOutputs(Layer *layer, float *outputs);
void printOutputs(Layer *layer);
void backpropagate(Layer *output_layer);
float cost(Layer*, int);