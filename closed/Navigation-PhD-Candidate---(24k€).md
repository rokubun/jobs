We are an R&D performing startup, pursuing a breakthrough in **Accurate and affordable navigation solutions**. We work mostly developing algorithms and software related to satellite navigation 🛰️ (GNSS), but we aim also at exploring other technologies (WiFi, 5G, Ultra wideband, IMU, ...). Also, we sometimes get our hands dirty and play with hardware in case it's useful for showcasing our technologies 🔩

As of today, the automotive 🚗 and Location Based Services 📱 are actively looking for navigation solutions that are scalable and can offer sub-metric accuracy. After a few years generating proprietary navigation technology on his own, Rokubun is getting there!

Rokubun is now mature enough to take off and scale-up to hit these markets with novel and innovative navigation solutions. But to achieve this goal we need people like you! We are currently expanding as a result of the combination of a seed round and an European GNSS Agency R&D grant.

So yes! We are looking for a **navigation PhD candidate** that is willing to pursue her/his degree working at Rokubun and with the support of [gAGE/UPC](https://gage.upc.edu/). This position will be partially supported by the [Industrial Doctorates programme](http://doctoratsindustrials.gencat.cat/en/pages/home).

## PhD Topic

The advent of new Global Navigation Satellite Systems (GNSS), such as Galileo or Beidou, besides the already existing GPS and Glonass, in combination with new technology trends such as autonomous vehicles and Location Based Services (LBS), has increased the requirements of navigation systems in terms of ubiquity (having an accurate navigation solution indoors and outdoors) and robustness (resilience to spoofing and interference). In this context it is clear that GNSS alone cannot fully satisfy these requirements and further sources of data will be required.

The state-of-the-art in terms of increasing the availability of navigation solutions in GNSS receivers (in e.g. tunnels or under canopy) is to use Inertial Measurement Units (IMU). They palliate GNSS outages to a certain extent, but the quality of low cost sensors (such as the ones employed in automotive or mobile platforms or smartphones) make it difficult to hybridize them with GNSS in indoor scenarios or areas with degraded GNSS visibility or high multipath (urban canyons). The industry is aware that other data of opportunity will be required to fully fulfill the ubiquity and robustness requirements mentioned above, which cannot be covered by GNSS alone.

In this context, technologies such as WiFi round-travel-time (RTT), Angle of arrival or Ultra-wide Band (UWB) ranging have been proposed to assist GNSS in impaired scenarios. In indoors, WiFi-based fingerprinting, that uses Received Signal Strength (RSS) has been used for years, but this technique is very susceptible to environment. The newer WiFi 802.11mc protocol allows to measure the round travel time (RTT measurement) between the rover and the WiFi Access Point (WAP). which is more robust and easier to hybridize with GNSS pseudorange. The proposed research project will allow the candidate to work on challenging and innovative topics of GNSS data processing and, in particular, how to hybridize GNSS with low cost IMU as well as other ranging systems such as WiFi 802.11mc and UWB. Rokubun will provide the candidate with mentoring and coaching to develop and implement the techniques algorithms in a modern software development environment as well as the necessary equipment (smartphones, RTT-compatible WAP and GNSS receivers with integrated IMU) to execute data campaigns for testing and validation.

It is clear that the industry is going into the direction pointed out in this research proposal and are eager to find solutions that successfully hybridize GNSS with low cost IMU as well as other data of opportunity. A proof of that is the inclusion of the WiFi 802.11mc protocol in the Google Pixel phones or the UWB chipset in the Apple iPhones. Therefore, the outcome of the proposed research topic has enough material worth publishing as well as for successful doctoral thesis as well as has direct applicability in industry. Moreover, a professional with the skill set developed in this research proposal is on high demand nowadays both in deep-tech companies as well as research institutions.

## What will you do on your day-to-day with us

You will develop your PhD thesis working with a dynamic team of software and navigation engineers. Besides allowing you to get your degree, the output of your work will help us to improve **Rokubun's location stack**, in particular:

- Hybridize GNSS data with inertial measurement units (IMU) data, with a clear focus on smartphone data processing (single- or dual-frequency GNSS raw measurements and IMU readings obtained from Android smartphones). You will also have the chance to work with other higher-quality measurements from e.g. (dual-frequency) u-blox ZED-F9P GNSS receiver and MEMS IMUs.
- Use other ranging data (WiFi RTT and UWB) to complement GNSS data and improve the position estimates or make them more robust in challenging scenarios (e.g. urban canyons)
- contribute to our processing core (written in C and some bits in C++), that takes care of the heavy-lifting (GNSS signal modeling, processing filter, parsers, ...)
- create bindings in Python for our processing core. This will add functionality and extend [Jason](https://jason.rokubun.cat), our Positioning-as-a-Service.


### In 1 month

You will get to know the team, how we work, how we code and which are the projects we currently have ongoing.

If you need to refresh some concepts on GNSS data analysis, we can point you to some useful material. Believe it or not, there is lots of great stuff for free out there.

### In 3 months

You will be familiar with the code we have implemented so far. It is likely that you will be up to speed and already contribute with great ideas and brilliant software.

### From 6 months onward

You may be already at full-speed working on your PhD with the tools you need and creating interesting stuff! Maybe you have identified some interesting project out there. We assist you in the proposal preparation (we do this all the time). On one condition: the topic should be aligned at what we do at Rokubun ➡️ "Accurate and affordable navigation", but as you can imagine this is already highly aligned with your PhD topic

## How are you going to do it

We are still small, so you will closely work in a team of 3 to 4 engineers that has already developed a great deal of algorithms and software for Rokubun's Location Stack and its Positioning-as-a-Service platform.

We hold weekly *stand-up meetings* to check what each team member is doing, which problems she/he faced, etc. This keeps the team cohesive and helps the task progress. Sometimes, great ideas pop up in those meetings as well.

gAGE/UPC will provide the supervision on the algorithm design, implementation and testing of a versatile navigation engine that fusions the of GNSS pseudorange measurements with inertial units and with WiFI ranges, ultimately achieving precise and reliable positioning in urban environments where severe blocage of direct satellite signal and severe multipath interference occurs.

Check our notes on [how we like to code](how-we-code.md)

## Who will you be working with

- [Miquel Garcia-Fernandez](https://www.linkedin.com/in/miquelgarcia/) (CTO and co-founder), GNSS engineer and software developer
- [Adrià Rovira Garcia](https://www.linkedin.com/in/adriarovira/), Senior GNSS Researcher at gAGE/UPC.

## Where will you work

In our offices at [Barcelona, near Glòries](https://www.openstreetmap.org/#map=19/41.40255/2.19455), but we will move by Q4 2020 to a close-by office also in the Glories area.

You will work 4 out of 5 days in a week at Rokubun and the other day at UPC (at gAGE/UPC facilities at the Campus Nord). We also enforce some telecommuting as you will see. Keep reading.

## Which skills are we looking for

- Knowledge of GNSS data processing for navigation
- Programming languages: C, Python
- Familiarity with version control systems (e.g. git)
- Good understanding of statistical modelling and Kalman filtering 
- (optional) Experience processing inertial sensor data
- (optional) Familiar with WiFi-based fingerprinting for geolocatisation and experience processing WiFi RTT data
- Fluent in English. Additional languages will be valuable.

Regarding soft skills, keep in mind that:

- Patience and tenacity, you will need it to complete your PhD.
- we highly value **curiosity**.
- we embrace **positive criticism**, we know we are not perfect and that there is always a better way to do things.

## What do we offer

- A position in industry that will allow you to get your PhD.
- Salary of 24k€
- 27 holidays per year
- **flexible working hours**, the only thing we ask is that you show up during our core hours: from 10h to 15h
- Having a good rest helps stay productive, that is why we offer **37.5 hours per week** instead of 40.
- **Remote work** once per week (yes, you will be able to work in slippers)
- Contract would be under the Industrial Doctorates programme, which will cover PhD expenses, Catalan courses (if needed), possibility to perform international stays, ...
- ☕ and 🍪 are on us!

## How to apply

To apply for this position, follow these steps:

1. Download and fill the [application form in PDF](http://doctoratsindustrials.gencat.cat/files/file/attachment/8379/98_DI_ROKUBUN_UPC_PE10_20201006.pdf)
2. Send the PDF document to [doctorats.industrials.sur@gencat.cat](mailto:doctorats.industrials.sur@gencat.cat)

Your application will be made available to us