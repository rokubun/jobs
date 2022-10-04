# Quiz on basic positioning principles

1. Which is the orbit at which GPS and SBAS satellites are located?
a. MEO for SBAS and LEO for GPS constellations
b. LEO for SBAS and GEO for GPS constellations
c. MEO for GPS and LEO for SBAS constellations
d. MEO for GPS and GEO for GPS constellations
e. MEO for GPS and SBAS constellations

2. What is the basic measure used in GNSS to estimate the user position?
a. DoA - Direction of Arrival
b. AoA - Angle of Arrival
c. ToA - Time of Arrival
d. RSS - Received Signal Strength
e. AoD -  Angle of Departure

3. What is the basic principle of trilateration?
a. Determining the position using the received signal strength from known locations
b. Determining the position using the distance from known locations
c. Determining the position using the angles of arrival from known locations

4. How are GNSS receivers estimating the distance (or time of travel) from the satellite to the receiver?
a. Cross-correlating the received signal with a local replica of each satellite in view’ PRN code.
b. Auto-correlating the received signal from each satellite.
c. Looking for a synchronization pattern in the received signal
d. Using the Received Signal Strength (RSS) of each satellite.

5. Why GNSS receivers need 4 range (or travel time) measurements in order to estimate their position?
a. Four, to estimate 4 receiver coordinates (w,x,y,z)
b. Four, to estimate 3 receiver coordinates (x,y,z) and the recevier clock offset from GNSS time scale (dtr)
c. Three are enough in order to estimate 3 receiver coordinates (x,y,z)
d. Four, to estimate 3 receiver coordinates (x,y,z) and the satellite clock offset from GNSS time scale (dts)

6. What is the proper order in the GNSS signal and data processing in a receiver?
a. GNSS Raw bits -> RF -> GNSS Measurements -> GNSS Fixes
b. GNSS Measurements -> GNSS Raw bits -> RF -> GNSS Fixes
c. RF -> GNSS Raw bits -> GNSS Measurements -> GNSS Fixes
d. RF -> GNSS Fixes -> GNSS Raw bits -> GNSS Measurements

7. Which statements about GNSS multipath is/are correct?
a. Multipath is generated by GNSS signal reflections reaching the receiver antenna together with direct signal
b. High bandwidth GNSS signals (L5, E5) are optimal to counter-measure multipath
c. Multipath is a GNSS error source present in open sky areas
d. Low bandwidth GNSS signals (L1, E1) are optimal to counter-measure multipath
e. Multipath effect can generate errors of several meters

8. Sort from slowest to fastest, the different acquisition and tracking modes
a. Warm start - Cold Start - Hot start
b. Hot start - Cold Start - Warm start
c. Cold Start - Warm start - Hot start

9. Which statements about GNSS multi-frequency and multi-constellation is/are correct?
a. Improves Time to first fix (TTFF)
b. Improves global coverage and availability
c. Provides DoA measurements for increased accuracy
d. Increases accuracy (ionosphere effect cancellation)
e. Improves robustness in harsh environments (multipath, urban canyons…)
f. Compromises the position estimation results due to receiver signals overload

10. SBAS focus on integrity information provision which is defined as:
a. The measure of correctness of the position estimation with respect to the real position.
b. The percentage of time that the services of the system are usable by the navigator
c. The measure of the trust that can be placed in the correctness of the information delivered by a navigation system.
d. The ability of the total system to perform its function without interruption during the intended operation.