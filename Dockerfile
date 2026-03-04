FROM gcc:12 AS builder
WORKDIR /app
COPY . .
RUN apt-get update

RUN apt-get update && apt-get install -y \
    build-essential \
    cmake 

RUN apt-get install -y python3-dev
RUN apt-get -y install python3-django

RUN git submodule init
RUN git submodule update

RUN cmake --version

RUN mkdir build

WORKDIR /app/build

RUN cmake ..

RUN make

WORKDIR /app/server

EXPOSE 8000

CMD ["python3", "manage.py", "runserver", "0.0.0.0:8000"]



