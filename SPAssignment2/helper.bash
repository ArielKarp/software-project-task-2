#!/bin/bash
for (( c=1; c<=4; c++ ))
do
    echo "running $c time"
    ./nim < input$c.in > result$c.out
    diff result$c.out output$c.out
done