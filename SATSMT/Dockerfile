# Run these commands to get started:
#   docker-compose build
#   docker-compose up -d
#   docker exec -it lunchctf_satsmt /bin/bash

FROM ubuntu:bionic

ENV DEBIAN_FRONTEND noninteractive

# == Install the basics =========================================
RUN apt-get update
RUN apt-get -y install git build-essential python python-pip

# == Fetch, Build and install Z3 ================================
WORKDIR /opt
RUN git clone https://github.com/Z3Prover/z3
WORKDIR /opt/z3
RUN python scripts/mk_make.py --prefix=/usr --python --pypkgdir=/usr/lib/python-2.7/site-packages
WORKDIR /opt/z3/build
RUN make -j8
RUN make install
RUN echo 'export PYTHONPATH=/usr/lib/python-2.7/site-packages' >>~/.bashrc
WORKDIR /

# Have fun!
