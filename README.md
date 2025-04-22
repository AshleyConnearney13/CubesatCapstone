This is our README file. It contains information about the project, how to run it, and how to use it.
```

To get to our flowcharts, you can go to the "cubeSatFlowcharts" in our repository.

Follow the GnuRadio Wiki to build and run the application and use the flowcharts.

You will also need to install the used blocks from the GNU extension linked here: https://github.com/igorauad/gr-dvbs2rx

There you can find instructions to install the extension to allow you to run the flowcharts with HackRF hardware.

For more information on set up, please view our GitHub wiki page: https://github.com/AshleyConnearney13/CubesatCapstone/wiki/GNU-Radio-Flowcharts-and-Commands


Gnuradio (version and other stuff in the Wiki tab in Gnuradio)

1) If you are going to do simulation have it be either udp or .ts file and have the throttle (if not you computer will crash)

2) If you want to do .ts file just disable UDP blocks and enauble the .ts file block for the Source of the TX and the Sink of the RX

3) If the disable block are not showing do Crtl D and it should show it.

4) If you wanna do a SDR do the same as 2) but with a soapy hackrf block or whatever you will be using.
