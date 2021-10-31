# Smart-city-hackathon
Pollution monitoring

Problem Statement

To solve any problem first we need to understand the size of problem and  make the necessary tools to tackle it. According to W.H.O website 9 out of 10 people live in areas where the pollution exceeds their levels and around 4.2 million people die every year due to air pollution. And now air pollution (any kind of environmental pollution) is a global issues and it needs to be addressed. Next comes noise pollution which is an invisible danger to both humans and animals. According to W.H.O permissible noise while we sleep should be less than 40dB. According to a European Union (EU) publication: about 40% of the population in EU countries is exposed to road traffic noise at levels exceeding 55 dB(A), 20% is exposed to levels exceeding 65 dB(A) during the daytime; and more than 30% is exposed to levels exceeding 55 dB(A) at night. This is another issue that need to be addressed because noise is often underestimated always.

Solution

To build a sensor network which constantly monitors the data of  air and noise pollution of a particular area and push the data to cloud to keep track of the pollution of a city. Fresh data is pushed into the cloud every five minutes and we can observe it in visual form in a cloud interface. Seeing things in real-time gives more understanding about pollution and encourages us to take necessary measures quickly. 

By taking the values from gas sensor (in ppm) and noise ( dB ) one can understand the pollution in an area  and analyze and take steps in getting solution to tackle pollution of the area. It a made of small sensors and microcontrollers therefore it can be easily be placed in a neat package and installed near a light pole or  in any public area, it can make use of  public WIFI to push the data to cloud. By using to these kind of modules in different areas we can analyze pollution levels more easily and take faster actions.

Technical Stack Description

An ESP32 based microcontroller with custom firmware called Bolt (for communication) interfaced with Arduino Uno microcontroller (head of the whole system), the MQ135 gas sensor checks air pollution and Big sound sensor checks noise pollution. And this data will be pushed to the cloud with the help of bolt module to a cloud interface for an equal interval of five minutes.

 
