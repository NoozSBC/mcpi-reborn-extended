#!/bin/sh

set -e

# Build Test
ARCH="$(dpkg-architecture -qDEB_BUILD_ARCH)"
./scripts/setup.sh server "${ARCH}"
./scripts/build.sh server "${ARCH}"

# Add minecraft-pi-reborn-server To PATH
export PATH="$(pwd)/out/server-$(dpkg-architecture -qDEB_BUILD_ARCH)/usr/bin:${PATH}"

# Create Test Directory
rm -rf build/test
mkdir -p build/test

# Run Test
cd build/test
minecraft-pi-reborn-server --only-generate
