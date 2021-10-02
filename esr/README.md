# ESR Calculator

## About

Capacitor datasheets do not specifically list ESR ratings because the rating is
dependent on the test frequency. This extremely simple command-line program
will calculate an ESR value given the *tangent of loss angle* listed for the
part, the test frequency in hertz, and the value in microfarads. I've chosen
to normalize on microfarads because all of the capacitors I'm testing for this
project are in that range. 

## Use

Here's an example that makes the following assumptions:

* Nichicon UFG capacitor
* 100 uF value
* 10V voltage rating
* 120 hertz test frequency (set your ESR meter to this as well!)

First, check the datasheet to find the tangent of loss angle for the part.
In this case, the value was 0.19. Next, run the command-line program with
the test frequency and value in uF:

```
esr 0.19 120 100

ESR: 2.519953
```

The resulting ESR value is printed to the terminal.  

## Author

Tom R. Dial
dialtr at gmail dot com
