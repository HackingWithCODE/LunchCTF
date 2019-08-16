# Run these commands to get started:
#   docker-compose build
#   docker-compose up -d
#   docker exec -it lunchctf_formatstringvulns /bin/bash

FROM ubuntu:12.04

ENV DEBIAN_FRONTEND noninteractive

# == Install the basics =========================================
RUN apt-get update
RUN apt-get -y install vim git gdb build-essential libc6-dev-i386 python python-pip
RUN git clone https://github.com/longld/peda.git ~/peda
RUN echo "source ~/peda/peda.py" >> ~/.gdbinit
