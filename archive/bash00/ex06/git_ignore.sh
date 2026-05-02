#!/bin/bash

ROOT="$(git rev-parse --show-toplevel)"

cd $ROOT

POSITION="$(find -name .gitignore)"

cat $POSITION
