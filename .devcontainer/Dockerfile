ARG DS_VERSION=6.2
ARG DS_VARIANT=devel

FROM nvcr.io/nvidia/deepstream:${DS_VERSION}-${DS_VARIANT}

RUN apt update && \
    apt install -y python3-gi python3-dev python3-gst-1.0 python-gi-dev git python-dev \
    python3 python3-pip python3.8-dev cmake g++ build-essential libglib2.0-dev \
    libglib2.0-dev-bin libgstreamer1.0-dev libtool m4 autoconf automake libgirepository1.0-dev libcairo2-dev && \
    apt clean

ENV USE_NEW_NVSTREAMMUX=yes
ENV CUDA_MODULE_LOADING=LAZY
