#include <EloquentTinyML.h>
// sine_model.h contains the array you exported from the previous step with xxd or tinymlgen
#include "sine_model.cc"

#define NUMBER_OF_INPUTS 1
#define NUMBER_OF_OUTPUTS 1
// in future projects you may need to tweek this value: it's a trial and error process
#define TENSOR_ARENA_SIZE 2*1024

Eloquent::TinyML::TfLite<NUMBER_OF_INPUTS, NUMBER_OF_OUTPUTS, TENSOR_ARENA_SIZE> ml;

void setup() {
    Serial.begin(115200);
    ml.begin(sine_model);
    
    Serial.println("------- DEBUG Desmos ---------");
    for(int i=0; i<100; i++) {
      float x = 2*3.14159*i/100;
      float y = sin(x);
      float input[1] = { x };
      float predicted = ml.predict(input);
      Serial.print(x,8);
      Serial.print(",");
      Serial.println(predicted,8);
    }
    Serial.println("------- END DEBUG ---------");
}

void loop() {

}