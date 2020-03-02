#!/usr/bin/env bash

# install android deps
sudo apt-get -qq update
sudo apt-get -qq install --no-install-recommends curl tar perl

echo "Downloading OpenSSL"
if ! curl -L -k -s -o openssl-1.1.1d.tar.gz https://www.openssl.org/source/openssl-1.1.1d.tar.gz;
then
    echo "Failed to download OpenSSL"
    exit 1
fi

echo "Unpacking OpenSSL"
rm -rf ./openssl-1.1.1d
if ! tar -xf openssl-1.1.1d.tar.gz;
then
    echo "Failed to unpack OpenSSL"
    exit 1
fi

cd openssl-1.1.1d || exit 1

# Damn OpenSSL devs... They just make the shit up as they go...
if ! cp ../contrib/android/15-android.conf Configurations/; then
    echo "Failed to copy OpenSSL Android config"
    exit 1
fi

echo "Configuring OpenSSL"
if ! ./Configure "$OPENSSL_HOST" no-comp no-asm no-hw no-engine shared \
     "$CFLAGS" --prefix="$ANDROID_SYSROOT" --openssldir="$ANDROID_SYSROOT"; then
    echo "Failed to configure OpenSSL"
    exit 1
fi

echo "Building OpenSSL"
if ! make; then
    echo "Failed to build OpenSSL"
    exit 1
fi

echo "Installing OpenSSL"
if ! make install_sw; then
    echo "Failed to install OpenSSL"
    exit 1
fi

exit 0
