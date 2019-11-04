**SCENARIO (short):**

**You have to record current wind and temperature data over all Upper
Austria to allow decisions for wind farms management.**

-   WEB Windenergie AG runs over 230 wind power plants in all of Austria

-   They want to examine four possible locations for a new wind farm,
    which should be determined by monitoring wind and temperature data
    for those specific spots over an extended period of time

Christian works for WEB and is tasked with choosing the most ideal one
out of the four possible locations.

For that purpose, there is a small weather station installed directly
on-site of each of the four possible locations Neumarkt, Gutau,
Pregarten and Kaltenberg. Each station is mounted on a pole so it is
15-20 meters up. 

Each weather station is equipped with temperature, wind, humidity and
light sensors (thermometer, anemometer, etc. ...) and transmits data
every 10 minutes to a wireless station that passes it on to a web
database. 

The collected data is compared to itself, meaning the four locations are
analyzed to see which one is better suited over a long period of time.
The data is ultimately is also compared to the wind farms closest to the
individual weather station and its power output.

Database and live data are accessible with a web interface; live data
can also be accessed over a smartphone app. 

Data is collected over a period of one year; after that Christian makes
an informed decision based on the data -- which location has performed
the best, meaning it was windy but not too stormy, because a wind power
plant has to power down if the wind reaches a certain speed -- and
proposes the ideal location for WEB's new wind farm.

**Example scenario during monitoring period: **

It is spring -- outside the local WEB office it's 19° degrees and it's a
bit windy. 

Christian decides to check in on one of four possible locations. He
pulls up the app on his phone and checks the data.

Temperature on the actual location is 21° degrees and the wind speed is
13 knots. 

Christian decides to compare the data to the other three locations to
see if there are major differences. 

Locations 1 and 4 are more or less the same, but location 3 has
marginally higher wind speed with 16 knots. 

Christian pulls up wind data from a comparable wind energy plant located
in the closest wind farm and compares the conditions there. 

**SCENARIO (long):**

Helios Sonnenstrom is a company that supplies solar panels to people who
own an appropriate amount of surface area, for example a big enough roof
for example. One of their clients is a farmer who keeps pigs. The solar
panels are mounted on the roof of the stable.

!\[sketch of pig stable with solar panels on
roof\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/pig-stable.png)

Unfortunately, the ventilation system goes to the roof as well and tends
to contaminate the solar panels. Snow is also an issue. Once the panels
are covered with something, there is a sudden drop in power generation.
Helios has their solar panels cleaned in regular intervals, but those
intervals are a few years apart. After just one year without cleaning
the panels, performance in this particular case has dropped down to just
60% of the possible output.

The solution is to supply each panel with temperature, wind and LDR
sensors, as well as closely monitoring power output. This allows for
exact supervision in regards to which panels are having issues and need
to be cleaned, since not all panels seem to get dirty at the same speed.
The idea behind this approach is the assumption that the LDR sensors
will be as affected as the panels if they are placed correctly and can
be used to measure how dirty the panel has gotten.

Temperature and wind sensors are needed to help make a prediction about
what the output realistically *should* be.

Sensors send data to a web application via Wifi every hour. The
application, with the help of live temperature and LDR-data, as well as
the current date, month and sun hours in the day (which of course can
vary depending on the season) creates a model that makes a prediction as
to what the current output should be like under the current conditions.

If the power output is too different, for example if the measured output
falls below a certain tolerance level, the web application will raise
the alarm. If so wanted, the web application can send a warning E-Mail
as well. Since the solar panels are easily accessible or at the very
least, very visible, the farmer can check himself whether something is
off and either solve the situation himself, or let Helios know, so they
can do something about it.

!\[mockup of web application in ideal
conditions\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/mockup-solar-01.png)

!\[ mockup of web application if something is
wrong\](https://github.com/JoachimHolst/IoT-Holst-theuretzbachner/blob/master/UE-Portfolio/Images/
mockup-solar-02.png)

**Example:**

Hugo (the farmer) pulls up the web application in the morning after
breakfast to see if everything is all right, since it has been almost a
year since last incident.

Everything is in order -- current power output is 21kW, which is normal
since it is a very sunny day. Temperature is 6°, which is normal for
late fall, and there is barely any wind.

Two days later, while he's out and about in Linz, Hugo gets an E-Mail.

It warns him that the power output has rapidly decreased. It should be
about 17kW at the moment, but the actual output is measured at only
6.3kW. Hugo goes online and checks the web application. The weather data
tells him that it has -1° and that it has been snowing all morning.

He checks when he gets home and sure enough -- most of the solar panels
are almost completely covered in snow.

His options now are either wait until the snow melts, which might be
possible, he'll have to check the weather for that, or climb up and get
rid of the snow himself.
