# anonimOS
This is my 64bit operating system. Base on [this](https://youtu.be/FkrpUaGThTQ) youtube tutorial.
## Build:
### Build docker image:
    docker build env -t anonim-os-bulid-env
### And run docker contaner:
    docker run --rm -it -v %cd%:/root/env anonim-os-bulid-env make build-x86_64
