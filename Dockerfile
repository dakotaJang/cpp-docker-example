FROM ubuntu:20.04
RUN apt-get -y update && apt-get install -y
RUN apt-get -y install clang