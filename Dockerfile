#!/bin/bash
# Step 1: Choose a suitable base image
FROM ubuntu:latest

# Step 2: Install necessary dependencies and tools
RUN apt-get update && \
    apt-get -y install gcc cmake

# Step 3: Set the working directory inside the container
WORKDIR /app

# Step 4: Copy the necessary files into the container
COPY deploy.sh CmakeLists.txt main.c ./

# Step 5: Build your C program
RUN cd /app
SHELL ["/bin/bash", "-c"]
RUN 

# Step 6: Configure the Dockerfile to run your program
CMD ["./build/Debug/BMI_Calculator.exe"]