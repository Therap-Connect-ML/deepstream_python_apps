#!/bin/bash
version=1.1.6
platform=linux_x86_64

apt update
apt install -y gstreamer1.0-libav
apt install --reinstall -y gstreamer1.0-plugins-good gstreamer1.0-plugins-bad gstreamer1.0-plugins-ugly libavresample-dev libavresample4 libavutil-dev libavutil56 libavcodec-dev libavcodec58 libavformat-dev libavformat58 libavfilter7 libde265-dev libde265-0 libx264-155 libx265-179 libvpx6 libmpeg2encpp-2.1-0 libmpeg2-4 libmpg123-0
apt install -y python3-gi python3-dev python3-gst-1.0 python-gi-dev git python-dev python3 python3-pip python3.8-dev cmake g++ build-essential libglib2.0-dev libglib2.0-dev-bin libgstreamer1.0-dev libtool m4 autoconf automake libgirepository1.0-dev libcairo2-dev

git submodule update --init
apt install -y apt-transport-https ca-certificates -y
update-ca-certificates

cd 3rdparty/gst-python/
./autogen.sh
make
make install

cd ../../bindings
rm -rf build && mkdir build && cd build
cmake .. -DPIP_PLATFORM=$platform
make -j$(nproc)

pip3 install ./pyds-$version-py3-none*.whl
