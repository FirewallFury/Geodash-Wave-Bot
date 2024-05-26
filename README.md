# Geometry Dash Wave Bot

This bot allows you to go straight in wave mode using an Arudino Micro.

It can go as small as a one block gap.

## How to use

First, download the GB_wave_bot.ino file. Then, if you haven't already, install the Mouse library by Arduino using the library manager in Arduino IDE.
Connect your Arudino Micro. Using the Upload button in the IDE, flash the sketch to your Micro. Once it is done, open GD and start a wave level. After a 10 second delay, the bot will start.

## Cusomization

If you want the wave to go through bigger gaps, you can set the delay(50); event to delay(100); or more for less straight waves.
You can also set the delay of the bot starting to less to be in time for different types of levels. Simply change the delay(10000); event to delay(enter ms here); to make it start later or earlier.
