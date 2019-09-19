# easy-node-particle-request


As a gitpod load


https://gitpod.io/#github.com/hpssjellis/easy-node-particle-photon-request


The .ino must be flashed to your particle.


From the terminal this curl command should work once you replace the photon ID and access Token

```curl https://api.particle.io/v1/devices/f1234f1234/doAll -d access_token=c43212c4321c4321 -d arg=toggleLED```

To run as a node js program you must change the app.js code for your particle ID and Particle Access Token

Then run these commands:

```npm install```


```npm start```




To run in a web browser using local storage for the Particle ID and access token 

```apachectl start```

the expose a port and open the browser or preview

or just run this url

https://hpssjellis.github.io/easy-node-particle-photon-request/public/index.html


