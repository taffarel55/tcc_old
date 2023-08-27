Import("env")

print("Getting tensorflow lite model")

env.Execute("cp '../5. Modelo tflite com venv/sine_model.cc' ./src/sine_model.cc")
env.Execute("cp '../5. Modelo tflite com venv/sine_model.h' ./include/sine_model.h")
