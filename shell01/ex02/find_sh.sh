#!/bin/sh
find . -type f -name "*.sh" | sed 's/.*\///g ; s/\.sh//g'