Task 1:

The counter was implemented similarly to a counter from a previous task, and the rom was implemented as according to the lecture notes. The testbench plotted a large number of points, and the simulation was exited by pressing the 'q' key using vbdGetKey(). A few different combinations of control inputs were considered during testing, and all worked as intended, since these were all functions of the counter which had been thoroughly tested by this point.

For the challenge, the increment of the counter, given by the input incr, was written based on the value of vbdValue(). Setting the rotary switch to a value of 1 provided the default frequency, a value of 2 would double it, etc. In this case, it was not possible to produce arbitrarily low frequencies since the clock had a minimum increment of 1 (not including 0). Therefore, the frequency scaling was available from 1 - 100.

Running the simulation for long periods of time produced an error saying 'terminate called after throwing an instance of std::out_of_range. This could be caused by memory issues from storing a large number of data points.

Interestingly, the signal showed strange behaviour when the frequency multiplication was too high. For a frequency multiplicatoin of about 18 or higher, the signal disorted beyond recognition and appeared to form multiple overlapping waveforms. This is because of Nyquist's condition, which tells us that the frequency of a signal cannot be determined if the sampling frequency is less than double the signal frequency. In practice, a meaningful waveform was only visible for frequency multiplication of between 1 and 15.


Task 2:

An additional input signal was added to the top module called offset, which is added to the counter value inside a combinational block to produce the second address for the ROM, which provides the phase-shifted waveform. The ROM and sinegen modules were easily altered to support two concurrent data outputs.


Task 3:

A top-level component containing a counter and RAM was created. The counter specified the write address of the RAM (i.e. where the current microphone signal is stored). A combinational block defined the read address as the write address minus an offset to access a previous recording. The counter width was adjusted to 9 since it needed to match the address width of the RAM. When playing a pure tone, a clean sinusoidal wave was shown on the plot, with the delayed wave being out of phase.

When starting the simulation, there would be a delay before the delayed wave started showing non-zero values. This is expected since the RAM is initialised to an empty array, assumed to be zero values. When stopping the sound, the delayed wave would continue showing a sinusoidal waveform for the same amount of time delay, due to a buffer of stored values.