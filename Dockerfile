FROM alpine:latest

RUN apk add --update-cache \
    build-base \
    g++ \
    python3 \
    perl \
    npm \
    rust \
    go \
    && rm -rf /var/cache/apk/*

WORKDIR /github.com/lrth06/app

COPY . ./

